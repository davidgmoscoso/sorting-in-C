

void selectionSort(int* A, int n){
  int temp;   // temporary variable

  for (int i=0; i < n-1; i++){    // n-2 passes (last element comparisons are not necessary)

    for (int j=i+1; j < n; j++){
      if (A[j] < A[i]){   // there's a smaller value ahead                      
        temp = A[i];  // interchange positions 
        A[i] = A[j];  
        A[j] = temp;  
      }
      
      } 
  }

}

void bubbleSort(int* A, int n){
  int temp;

  for(int i=0; i<n-1; i++){
    int flag=0;

    for(int j=0; j < (n-i-1); j++){
      if(A[j] > A[j+1]){
        temp = A[j];  // interchange positions 
        A[j] = A[j+1];  
        A[j+1] = temp;

        flag = 1;
      }
    }
    if(!flag)
      break;
  }
}