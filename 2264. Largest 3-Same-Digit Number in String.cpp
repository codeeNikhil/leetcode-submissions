/*class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string>s;
        int tempstore=-1;
        for(int i=0;i<num.length()-2;i++){
            
            
            if((num[i]==num[i+1])&&(num[i+1]==num[i+2])){
                  
                int val=num[i]-'0';
                if(val>tempstore){
                    tempstore=val;
                }
                
                }
        }
         string ans="";
     if(tempstore==-1){
        
         return ans;
     }else{
         char ch=tempstore+'0';
         ans.push_back(ch);
          ans.push_back(ch);
          ans.push_back(ch);
         return  ans;
     }
         return ans;
    }
};
*/