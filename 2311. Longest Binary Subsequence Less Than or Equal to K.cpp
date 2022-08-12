/*class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n=s.length();
        string temp="";
        int res=0;
        long long add=0;
        int num=k;
        int j=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                if(res>k || j>=31){ }else if(add+(1LL<<j)<=k){
                    add+=(1LL<<j);
                    temp+='1';
                }
            }else{temp+='0';} j++;
        }
        return temp.size();
    }
};*/