class Solution {
    private:
    
    int getmax(vector<vector<int>>& grid,int ii,int jj){
        
        int maxi=0;
        
          for(int i=ii;i<ii+3;i++)
        {
            for(int j=jj;j<jj+3;j++){
                maxi=max(grid[i][j],maxi);
            }
        } 
        return maxi;
    }
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>> ans( c-2 , vector<int> (r-2, 0));
        
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[0].size();j++){
                ans[i][j]=getmax(grid,i,j);
            }
        } 
      return ans;
    }
};