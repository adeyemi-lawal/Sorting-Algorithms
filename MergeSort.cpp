#include <iostream>

void merge(int *A, int *L, int *R, int leftcount, int rightcount) {
    int i = 0;
    int j = 0;
    int k = 0;
    
    while(i < leftcount && j < rightcount) {
        if(L[i] <= R[j])
            A[k++] = L[i++];
        
        else
            A[k++] = R[j++];

    }
    
    while(i < leftcount)
        A[k++] = L[i++];
    
    while(j < rightcount)
        A[k++] = R[j++];
    
    return;
}


void MergeSort(int A[], int n) {
    if(n < 2)
        return;
    
    
    int mid = n/2;
    
    int *L = new int[mid];
    int *R = new int[n - mid];
    
    for(int i = 0; i < mid; i++)
        L[i] = A[i];
    

    for(int i = mid; i < n; i++)
        R[i - mid] = A[i];
    
    MergeSort(L, mid);
    MergeSort(R, n - mid);
    merge(A, L, R, mid, n-mid);
    
    delete L;
    delete R;
    
    return;
    
}

int main () {
    int A[] = {6,5,2,7,8,9,5,21};
    
    MergeSort(A, 8);
    
    for(int n: A)
        std::cout << n << " ";
    
    
    
    
    return 0;
}



