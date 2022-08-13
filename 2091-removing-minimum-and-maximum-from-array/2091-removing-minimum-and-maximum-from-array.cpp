class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int index1=-1;
        int index2=-1;
        
          int max3 = *max_element(nums.begin(), nums.end());
          int min3 = *min_element(nums.begin(), nums.end());
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==max3){index1=i;}
            if(nums[i]==min3){index2=i;}
        }
        int max1=max(index1,index2);
        int min2=min(index1,index2);
       
        int l1=min2+1;
        int l2=max1+1;
        int l3=nums.size()-min2;
        int l4=nums.size()-max1;
            int l5=l4+l1;
        
        int res1=min(l2,l3);
        return min(res1,l5);
        
       
        
        
    }
};