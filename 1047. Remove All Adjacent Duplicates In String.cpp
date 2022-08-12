/*
class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>ss;
        
        
        int i=0;
       for(int i=0;i<s.length();i++){
            
            if(ss.empty()|| ss.top()!=s[i]){
                ss.push(s[i]);
                
                continue;
                
            }
            
            if(ss.top()==s[i]){
                ss.pop();
            }
           
        }
        string ans={};
        
        while(!ss.empty()){
            ans.push_back(ss.top());
            ss.pop();       
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};



*/