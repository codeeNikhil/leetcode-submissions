/*
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int mini=INT_MAX;
        bool c=false;
        vector<int>arr(1000001,-1);
        
        for(int i=0;i<cards.size();i++){
            
            if(arr[cards[i]]==-1){
                arr[cards[i]]=i;
            }else{
                
                int check=i-arr[cards[i]]+1;
                mini=min(check,mini);
                arr[cards[i]]=i;
                c=true;
                
            }
            
        }
        if(c==true){
            return mini;
        }
        
        
   return -1;
        
    }
};
*/