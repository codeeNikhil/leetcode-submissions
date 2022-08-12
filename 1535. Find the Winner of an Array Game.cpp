class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int size=arr.size();
        map<int ,int>count; //count winning of particular value;
        int maxelement=*max_element(arr.begin(),arr.end()); // find max element of array
        int currentmax=arr[0]; // put first element as current max
        
        
        
        for(int i=1;i<arr.size();i++){
            
            if(arr[i]>currentmax){    // compare current max with ith value
                currentmax=arr[i];    //replace with current max
                count[arr[i]]+=1;  // and increase count of respective value
            }else{
                
                count[currentmax]++;    //increase currentmac count 
            }
            
            if(count[currentmax]==k){     // if currenet max count is equal to k then return  
                return currentmax;
            }
            
            if(currentmax==maxelement){    // if currentmax is equal to max then return 
                 break;
            }
            
        }
        
        return maxelement;
    }
};