// A conveyor belt has packages that must be shipped from one port to another within days days.

// The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

// Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

// Input: weights = [1,2,3,4,5,6,7,8,9,10], days = 5
// Output: 15
// Explanation: A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
// 1st day: 1, 2, 3, 4, 5
// 2nd day: 6, 7
// 3rd day: 8
// 4th day: 9
// 5th day: 10

// Note that the cargo must be shipped in the order given, so using a ship of capacity 14 and splitting the packages into parts like (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) is not allowed.

bool isPossible(vector<int>& weights, int days, int mid, int n){
        int NumberOfDays = 1;
        int totalWeight = 0;

        for(int i=0; i<n; i++){
            if(totalWeight + weights[i] <= mid){
                totalWeight += weights[i];
            }
            else{
                NumberOfDays++;
                if(NumberOfDays > days || weights[i] > mid){
                    return false;
                }
                totalWeight = weights[i];
            }
        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int s = 0;
        int sum = 0;
        int ans = 0;

        for(auto i : weights){
            sum += i;
        }
        int e = sum;

        while(s<=e){
            int mid = (s+e)/2;

            if(isPossible(weights, days, mid, n) == true){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid + 1;
            }
        }

        return ans;
    }