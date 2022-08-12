class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
       sort(arr,arr+n);
       
       for(int i=0;i<n;i++){
           int l=i+1;
           int r=n-1;
           while(l<r){
               int sum=arr[i]+arr[r]+arr[l];
               if(sum==0){return true;}
               if(sum>0){r--;}else{l++;}
           }
       }
       return false;
    }
};