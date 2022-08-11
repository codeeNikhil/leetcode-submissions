
  class Solution {
public:
    int rearrangeCharacters(string s, string t) {
        int cntT[26] = {}  , cntS[26] = {} , copies = INT_MAX ;
        for(auto &x : t) ++cntT[x-'a'] ;
        for(auto &x : s) ++ cntS[x-'a'] ;
        
        for(int i = 0 ; i < 26 ; ++i ){
            if(!cntT[i]) continue ;
            copies = min(copies , (cntS[i] / cntT[i])) ; 
        }
        return copies ;
    }
};
