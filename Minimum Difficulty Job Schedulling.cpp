
class Solution {
public:
    
    int dp[302][12];
    
    int dfs(int i, int d, vector<int> &v){
        
        int n = v.size();
        
        if(i == n and d == 0){
            return 0;
        }
        
        if(i == n or d == 0 or n - i < d){
            return 10000000;
        }
        
        if(dp[i][d] != -1){
            return dp[i][d];
        }
        
        int ma = -10000000;
        
        int ans = 10000000;
        for(int j = i; j < n; j++){
            ma = max(ma, v[j]);
            
            ans = min(ans, ma + dfs(j + 1, d - 1, v));
        }
        
        return dp[i][d] = ans;
    }
    
    
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        
        if(n < d){
            return -1;
        }
        memset(dp, -1, sizeof(dp));
        
        int ans = dfs(0, d, jobDifficulty);
        
        if(ans == INT_MAX){
            return -1;
        }
        return ans;
        
    }
};
