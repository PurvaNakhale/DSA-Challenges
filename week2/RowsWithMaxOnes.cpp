int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int count = 0;
	    int maxCount = 0;
	    int index = -1;
	    
	    for(int i=0; i<n; i++){
	        count = 0;
	        for(int j=0; j<m; j++){
	            if(arr[i][j]==1){
	                count++;
	            }
	        }
	        if(count > maxCount){
	            maxCount = count;
	            index = i;
	        }
	    }
	    
	    return index;
	}