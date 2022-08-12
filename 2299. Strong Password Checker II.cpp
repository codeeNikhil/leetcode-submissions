/*
class Solution {
public:
 bool lower=false;
     bool upper=false;
     bool digit=false;
    bool special=false;
    
    
     void check(char ch){
         if(ch=='!'||ch=='@'||ch=='#'|| ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*'|| ch=='('||ch==')'||ch=='-'||ch=='+'){special=true;}
         
         else if (isupper(ch))
         upper=true;
 
    else if (islower(ch))
       lower=true;
 
    else{
        
        digit=true;
    }
        
         
         
     }
    
    
    bool strongPasswordCheckerII(string password) {
        
        if(password.length()<8){return false;}
        
        for(int i=0;i<password.length();i++){
            if(i+1<password.length() && password[i]==password[i+1]){return false;}
            
            check(password[i]);
            
        }
        
        
        if(lower==true && upper==true&&special==true&&digit==true){
            return true;
        }else{
            return false;
        }
        
        
        
    }
};

*/