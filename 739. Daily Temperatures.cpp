class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int>temp; // used to compare temp form back
        vector<int>ans;
        
        
        for(int i=temperatures.size()-1;i>=0;i--){
            
            if(temp.empty()){    //agr empty hai to zero dal do or index stack me push 
                ans.push_back(0);
                temp.push(i);
            }else{
                
                while(!temp.empty() && temperatures[temp.top()]<=temperatures[i]){    
                    temp.pop();
                }
                if(temp.empty()){
                    ans.push_back(0);
                temp.push(i);
                }else{
                    ans.push_back(temp.top()-i);
                    temp.push(i);
                }
                
            }
            
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};