class Solution {
public:
    vector<int> prevSmaller(vector<int>& heights, int n){
        stack<int> s;
        vector<int> left(n);

        for(int i=0; i<n; i++){
            if(s.empty()){
                left[i] = -1;
            }
            else if(heights[s.top()] < heights[i]){
                left[i] = s.top();
            }
            else{
                while(!s.empty() && heights[s.top()] >= heights[i]){
                    s.pop();
                }
                if(s.empty()){
                    left[i] = -1;
                }
                else{
                    left[i] = s.top();
                }
            }
            s.push(i);
        }

        return left;
    }

    vector<int> nextSmaller(vector<int>& heights, int n){
        stack<int> s;
        vector<int> right(n);

        for(int i=n-1; i>=0; i--){
            if(s.empty()){
                right[i] = n;
            }
            else if(heights[s.top()] < heights[i]){
                right[i] = s.top();
            }
            else{
                while(!s.empty() && heights[s.top()] >= heights[i]){
                    s.pop();
                }
                if(s.empty()){
                    right[i] = n;
                }
                else{
                    right[i] = s.top();
                }
            }
            s.push(i);
        }

        return right;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left = prevSmaller(heights, n);
        vector<int> right = nextSmaller(heights, n);

        vector<int> widths(n);

        for(int i=0; i<n; i++){
            widths[i] = right[i] - left[i] - 1;
        }

        vector<int> area(n);
        for(int i=0; i<n; i++){
            area[i] = heights[i]*widths[i];
        }

        int ans = *max_element(area.begin(), area.end());

        return ans;
    }
};