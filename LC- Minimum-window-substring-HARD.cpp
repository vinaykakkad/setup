class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        unordered_map<char,int>us;
        unordered_map<char,int>ut;
        for(int i=0;i<t.size();i++){
            ut[t[i]]++;
        }
        int wanted=ut.size();
        
        int l=0,r=0;
        int formed=0;
        // formed==t.formed;
        // r++;
        int mini=INT_MAX;
        int min_l=-1,min_r=-1;
        while(r<n){
            us[s[r]]++;
            // cout<<s[r]<<" "<<us[s[r]]<<" ";
            if(ut.count(s[r]) && us[s[r]]==ut[s[r]]){
                formed++;
            }
            
            if(formed==wanted){
                
                
                // us[s[l]]--;
                // l++;
                while(formed==wanted){
                    // mini=min(mini,r-l+1);
                    if(mini>r-l+1){
                        mini=r-l+1;
                        min_l=l;
                        min_r=r;
                    }
                    // cout<<s[l]<<" "<<us[s[l]]<<" ";
                    us[s[l]]--;
                    if(ut.count(s[l]) && us[s[l]]<ut[s[l]])
                        formed--;
                    // cout<<s[l]<<" "<<us[s[l]]<<" ";
                    l++;
                    
                    
                }
                
            }
            
                r++;
            
            // cout<<min_l<<" "<<min_r<<" "<<l<<" "<<r<<"\n";
        }
        string ans="";
        if(min_l==-1)return "";
        for(int i=min_l;i<=min_r;i++){
            ans+=s[i];
        }
        return 
and;
            
    
// bcabcdjiafso
// abcd

// a:1;
// b:1;
// c:1;
    

// a:0;
// b:2
// c:1;
}

};
