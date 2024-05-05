class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    sort(arr, arr+n);
	    int cnt = 0;
	    
	    for(int i=0; i<n; i++){
	        int l = 0, r = i-1;
	        while(l < r){
	            if(arr[l]+arr[r]==arr[i]){
	                cnt++;
	                l++;
	                r--;
	            }
	            else if(arr[l]+arr[r]<arr[i]){
	                l++;
	            }
	            else{
	                r--;
	            }
	            
	        }
	    }
	    return cnt;
	}
};