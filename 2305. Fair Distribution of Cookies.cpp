/*
class Solution {
public:
    int s[10]={};
    int res=1000000001;
    void dist(vector<int>& cookies,int nn, int k){
        if(nn==cookies.size()){
            int m=0;
            for(int i=0;i<k;i++){
                m=max(m,s[i]);
            }
            res=min(res,m);
            return;
        }
        
        for(int i=0;i<k;i++){
            s[i]+=cookies[nn];
            dist(cookies,nn+1,k);
            s[i]-=cookies[nn];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        dist(cookies,0,k);
        return res;
        
    }
};
*/