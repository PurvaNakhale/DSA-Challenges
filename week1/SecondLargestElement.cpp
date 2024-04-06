int print2largest(int arr[], int n) {
	    int largest = arr[0];
	    int secondLargest = -1;
	    
	    for(int i=1; i<n; i++){
	        if(arr[i] > largest){
	            secondLargest = largest;
	            largest = arr[i];
	        }
	        
	        if(arr[i] > secondLargest && largest > arr[i]){
	            secondLargest = arr[i];
	        }
	    }
	    
	    return secondLargest;
	}