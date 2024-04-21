// Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
// Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

class Solution{
    private:
    void solve(vector<vector<int>> &m, int n, int x, int y, vector<string>& ans, string temp){
        if(x<0 || x>=n || y<0 || y>=n || m[x][y] == 0){
            return;
        }
        
        if(x == n-1 && y == n-1){
            ans.push_back(temp);
            return;
        }
        
        m[x][y] = 0;
        solve(m, n, x+1, y, ans, temp+'D');
        solve(m, n, x, y-1, ans, temp+'L');
        solve(m, n, x, y+1, ans, temp+'R');
        solve(m, n, x-1, y, ans, temp+'U');
        m[x][y] = 1;
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        string temp = "";
        
        if(m[0][0] == 0 || m[n-1][n-1] == 0){
            return ans;
        }
        
        solve(m, n, 0, 0, ans, temp);
        
        return ans;
        
    }
};