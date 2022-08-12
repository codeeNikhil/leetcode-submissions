class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int>diff;
        
          int res=0;
        for(int i=0;i<capacity.size();i++){
            int dif=capacity[i]-rocks[i];
          
            diff.push_back(dif);
        }
        int j=0;
        sort(diff.begin(),diff.end());
      
        while(true){
          
            
            
            int val=diff[j];
            cout<<val;
            additionalRocks=additionalRocks-val;
            if(additionalRocks>=0){
                diff[j]=0;
                
                
            }else{break;}
            
        
            j++;
            if(j==diff.size()){break;}
            
        }
        for(int i=0;i<diff.size();i++){
            if(diff[i]==0){res++;}
            
            //cout<<diff[i];
        }
        
       
        return res;
        
    }
};