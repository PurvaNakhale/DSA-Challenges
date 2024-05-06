class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    
	    priority_queue<int> maxHeap;
	    vector<int> ans;
	    
	    for(int i=0; i<n; i++){
	        maxHeap.push(arr[i]);
	    }
	    
	    while(k--){
	        ans.push_back(maxHeap.top());
	        maxHeap.pop();
	    }
	    
	    return ans;
	}

};