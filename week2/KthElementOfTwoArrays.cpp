 int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int len = n+m;
        int* arr = new int[len];
        int i = n-1, j = m-1, x = len-1;
        
        while(i>=0 && j>=0){
            if(arr1[i] >= arr2[j]){
                arr[x--] = arr1[i--];
            }
            else{
                arr[x--] = arr2[j--];
            }
        }
        
        while(i>=0){
            arr[x--] = arr1[i--];
        }
        
        while(j>=0){
            arr[x--] = arr2[j--];
        }
        
        int element = arr[k-1];
        
        return element;
    }