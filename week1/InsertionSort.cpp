void insert(int arr[], int i)
    {
        if(i<=1){
            return;
        }
        
        insert(arr, i-1);
        
        int key = arr[i-1];
        int j = i-2;
        
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        insert(arr, n);
        
    }