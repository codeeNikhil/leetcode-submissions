/*
class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double t=0;
        int p=0;
        for(int i=0;i<brackets.size();i++){
            int r=min(income,brackets[i][0]);
            t+=(double)(r-p)*(double)(brackets[i][1])/100;
            p=brackets[i][0];
            if(income<=brackets[i][0]){break;}
        }
        return t;
    }
};


*/