/*class Solution {
public:
    string greatestLetter(string s) {
        vector<int >l(26,0),h(26,0); //create empty vector 
        for(auto i: s){
            if('A'<=i and 'Z'>=i){h[i-'A']++;}else if('a'<=i and 'z'>=i){
                l[i-'a']++;
                
                
            }
        }
        
        
        string res="";
        for(int i=25;i>=0;i--){
            if(l[i]>=1 and h[i]>=1){
                res+=('A'+i);
                return res;
            }
        }
        return "";
    }
};
*/