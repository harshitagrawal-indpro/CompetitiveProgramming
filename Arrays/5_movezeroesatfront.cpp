// move zeroes at front 

void moveZerosToFront(int arr[], int n){
        int j= n-1;
        for (int i=n-1 ; i>=0 ; i--){
            if (arr[i]!=0){
                arr[j]=arr[i];
                j--;
            }
        }
        for (int i=j; i>=0 ; i--){
            arr[i]=0;
        }
        
        
    }

// so this is a best apprach you can use 