class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
      int sum=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                sum+=grid[i][j];
            }
           if(grid[i][i]<=0){return false;}
           sum-=grid[i][i];
            
        }
        
        
        int n=grid.size()-1;
        for(int i=0;i<grid.size();i++){
           
            if(grid[n-i][i]<=0){return false;}
            
            sum-=grid[n-i][i];
        }
        if(grid.size()%2==1){
        sum=sum+grid[n/2][n/2];
        }
        
      
        
        if(sum==0){
            return true;
        }
        
        return false;
    }
};