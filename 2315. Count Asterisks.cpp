#include<iostream>
#include<string.h>
#include<map>
#include<vector>
using namespace std;
int count=0;
  vector<int>temp;
int countAsterisks(string s) {
for(int i=0;i<s.length();i++){
      if(s[i]=='|'){
     
        temp.push_back(i);
      }

      if(s[i]=='*'){
        count++;
           }
}

if(temp.size()==0){return count;}





int i=0,j=1,check=0;
while(j<=temp.size()-1){
        for(int k=temp[i]+1;k<=temp[j]-1;k++){
          
            if(s[k]=='*'){check++;}
        }

    i=i+2;
j=j+2;

}



       return count-check; 
    }




int main(){
   string s={"iamprogrammer"}   ; 
    
    cout<<countAsterisks(s);



     return 0;
}