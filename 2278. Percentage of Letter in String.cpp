class Solution {
public:
    int percentageLetter(string s, char letter) {
        int total=s.length();
        int count=0;
        
        
        for(int i=0;i<total;i++){
            if(s[i]==letter){
                count++;
            }
        }
        return (count*100)/total;
    }
};