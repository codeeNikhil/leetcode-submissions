/*
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

        vector<long long int >ans;


        sort(potions.begin(),potions.end());

        for(int i=0;i<spells.size();i++){

            bool check=false;
           long long int count=0;
         int s=0;
            int e=potions.size()-1;
            int mid=s+(e-s)/2;

            while(s<=e){
                 long long po=potions[mid];
            long long sp=spells[i];
                long long int temp=po*sp;

                if(temp>=success){
                    check=true;
                    count=mid;
                    e=mid-1;
                }else{
                    s=mid+1;
                }


                   mid=s+(e-s)/2;


            }
            if(check==true){
                ans.push_back(potions.size()-s);

            }else{
                ans.push_back(0);
            }


        }


std::vector<int > ans2(ans.begin(), ans.end());

        return ans2;
    }
};


*/