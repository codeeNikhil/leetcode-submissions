/*

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mapping;
        
        int ans=0;
        
        for(int front=0,back=0;front<s.size();){
            if(!mapping[s[front]]){
                mapping[s[front]]++;
                front++;
                ans=max(ans,front-back);
            }
            else{
                mapping[s[back]]--;
                back++;
            }
        }
        return ans;
    }
};

*/