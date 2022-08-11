class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0;
        int index=-1;
        int pro=1;
        int s=nums.size();
        vector<int>ans(s,0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
                index=i;
                continue;
            }
            pro*=nums[i];
        }
        if(count>1){return ans;}
        
        
        
        if(count==1){
            ans[index]=pro;
        }else{
            
        
        
        
        for(int i=0;i<nums.size();i++){
            ans[i]=pro/nums[i];
        }
        }
        
        
        
        
        return ans;
    }
};
