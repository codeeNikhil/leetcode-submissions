class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        
        vector<int> ans;
        
         vector<long long int> prefix(nums.size(),0);
        
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]+=nums[i] + prefix[i-1];
        }
        
        for(int i=0;i<nums.size();i++){
            
            if(i-k<0 || i+k>=nums.size()){
                ans.push_back(-1);
            }
            else{
                long long int sum=prefix[i+k];
                if(i-k-1>=0){
                    sum-=prefix[i-k-1];
                }
                ans.push_back(sum/(long long int)(2*k + 1));
            }
        }
        
        return ans;
    }
};