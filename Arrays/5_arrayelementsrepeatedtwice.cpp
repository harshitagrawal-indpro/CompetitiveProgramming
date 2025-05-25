//  

void moveZerosToEnd(int arr[],int n){
        int i=0;int j=n-1;
        while (i<j){
            while(arr[i]!=0){
                i++;
            }
            while(arr[j]==0){
                j--;
            }
            int temp= arr[j];
            arr[j]= arr[i];
            arr[i] = temp;
        }
        int temp= arr[j];
        arr[j]= arr[i];
        arr[i] = temp;
        
    }