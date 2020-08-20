#include <iostream>



int Partition(int *A, int start, int end) {
    int pivot = A[end];
    int pIndex = start;
    
    for(int i = start; i < end; i++) {
        if(A[i] <= pivot) {
            std::swap(A[pIndex], A[i]);
            pIndex++;
        }
    }
    
    std::swap(A[pIndex], A[end]);
    

    
    
    
    return pIndex;
    
    
}




void QuickSort(int *A, int start, int end) {
    
    if(start < end) {
        int partitionIndex = Partition(A, start, end);
        QuickSort(A, start, partitionIndex - 1);
        QuickSort(A, partitionIndex + 1, end);
        
        
    }

    
    return;
}



int main () {
    int A[] = {4,6,1,3,9,3,2,16,19,24,13,11};
    
    QuickSort(A, 0, 11);
    
    for(int n: A)
        std::cout << n << " ";
    
    
    return 0;
}













