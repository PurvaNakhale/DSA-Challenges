class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       vector<int> freq(26,0);
        for(char ch : tasks){
            freq[ch-'A']++;
        }

        sort(freq.begin(), freq.end());

        int max = freq[25]-1;

        int idle = max*n;

        for(int i=freq.size()-2; i>=0 && freq[i] !=0; i--){
            idle -= min(max, freq[i]);
        }

        return idle > 0 ? idle + tasks.size() : tasks.size();

    }
};