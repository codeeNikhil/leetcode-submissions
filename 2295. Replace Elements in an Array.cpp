/*

class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        
        
        map<int ,int >indexpos;
        for(int i=0;i<nums.size();i++){
            indexpos[nums[i]]=i;
            
        }
        
        for(int i=0;i<operations.size();i++){
            int pos=operations[i][0];
            int val=operations[i][1];
            
            int positionindex=indexpos[pos];
            nums[positionindex]=val;
            indexpos.erase(pos);
            indexpos[val]=positionindex;
            
            
        }
        
        
        
        return nums;
        
        
    }
};

*/