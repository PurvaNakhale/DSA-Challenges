// You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.
// You are also given an integer 'k' which denotes the number of aggressive cows.
// You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
// Print the maximum possible minimum distance.


bool isPossible(vector<int> &stalls, int k, int mid){
    int cowNumber = 1;
    int stallPosition  = stalls[0];

    for(int i=1; i < stalls.size(); i++){
        if(stalls[i] - stallPosition >= mid){
            cowNumber++;
            stallPosition = stalls[i];
        }
        if(cowNumber >= k) return true;
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int s = 1, e = stalls[n-1] - stalls[0];


    while(s <= e){
        int mid = (s+e)/2;

        if(isPossible(stalls, k, mid)){
            s = mid + 1;
            
        }
        else{
           e = mid - 1;
        }

    }
     return e;
}