class FindSumPairs {
public:
    unordered_map<int,int>mp2;
    unordered_map<int,int>count1, count2;
    
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0; i<nums1.size(); i++){
            count1[nums1[i]]++;
        }
        
        for(int i = 0; i<nums2.size(); i++){
            mp2[i] = nums2[i];
            count2[nums2[i]]++;
        }
    }
    
    void add(int index, int val) {
        count2[mp2[index]]--;
        mp2[index]+=val;
        count2[mp2[index]]++;
    }
    
    int count(int tot) {
        int ans = 0;
        for(auto x: count1){
            if(count2[tot-x.first]){
                ans+=(x.second * count2[tot-x.first]);
            }
        }
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */