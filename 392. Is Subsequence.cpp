class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;int j=0;
int count=0;
        
        for(int i=0;i<t.length();i++){
            
            if(s[j]==t[i]){
                j++;
                count++;
            }
            
            if(count==s.length()){return true;}
            
            
        }
        
        
        return false;
    }
    
    
};