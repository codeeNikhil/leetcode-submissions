class Solution {
public:
    int longestPalindrome(string s) {
        if (s.length()==1){return 1;}
        unordered_map<char,int>re;
        int count=0;
        
    
        
        for(int i=0;i<s.length();i++){
            re[s[i]]++;
            
            
            if(re[s[i]]%2==0){count=count+2;}
            
            
            
            
        }
        
        if(s.length()!=count){
            count++;
        }

    
    return count;
    }
};