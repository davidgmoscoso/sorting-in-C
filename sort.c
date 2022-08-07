
// Any of the code above is optimized like a real world implemtatiom but serve as a basis for understanting the basic functioning of each algoritm
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
  int flag;

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


void insertionSort(int* A, int n){
  int temp;
  int hole;

  for(int i=1; i<n; i++){
    hole = i;
    temp = A[i];

    while(hole>0 && A[hole-1] > temp){
      A[hole] = A[hole-1];
      hole--;
    }

    A[hole] = temp;
  }

}
/* MERGE SORT
Faster than previous ones but it's not an in place algorithm
Recursive
*/

void merge(int* L, int* R, int n, int mid, int* A){
//index L,R,A  
  int   i=0,j=0,k=0;
  int nL =  mid;
  int nR = n-mid;

  while(i < nL && j < nR){
    if(L[i] <= R[j]){
      A[k] = L[i];
      i++;
    }
    else{
      A[k] = R[j];
      j++;
    }
    k++;
  }

   while(i < nL){
     A[k] = L[i];
      k++;
      i++;
   }

   while(j < nR){
     A[k] = R[j];
      k++;
      j++;
   }

}
void mergeSort(int* A, int n){
  int mid = n/2; // rounds though floor so left lenght will be equal or one less than right 
  int left[mid];
  int right[n-mid];

  if(n<2){
    return;
  }

  for(int i=0; i<mid; i++){
    left[i] = A[i];
  }
  for(int i=mid; i<n; i++){
    right[i-mid] = A[i];
  }
  mergeSort(left, mid);
  mergeSort(right, n-mid);
  merge(left, right, n, mid, A);
}

/*  QUICK SORT 
The most used algorithm for sorting arrays of values, many "sort" functions in high level programming languages use this implementation
** Time complexity
  O(nlog(n)) for average cases
  O(n^2) for wost case scenarios, can be avoided with randomized array
** Space complexity
  In place > no extra memory required
  ** Stability
  NOT stable, when equal numbers are present on the original array, order of apearence is not preserved.  
*/
void swap(int* A, int i, int j){
  int temp;

  temp = A[i];
  A[i] = A[j];
  A[j] = temp;
}

int partition(int* A, int start, int end){
  int pivot = A[end];
  int pIndex = start;

  for(int i=start; i<end; i++){
    if(A[i] <= pivot){
      swap(A, i, pIndex);
      pIndex++;
    }
  }
  swap(A, pIndex, end);

  return pIndex;
}

void quickSort(int* A, int start, int end){
  int pIndex;

  if(start >= end) return;

  pIndex = partition(A, start, end);  //returns the pivot index
  quickSort(A, start, pIndex-1);
  quickSort(A, pIndex+1, end);
}