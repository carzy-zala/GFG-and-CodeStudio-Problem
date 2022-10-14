#include <bits/stdc++.h> 

char toLower(char x){
  if(( x>='a' && x<='z' ) || (x>='0' && x<='9')){
      return x;
  }
  else{
      char temp = x-'A'+'a';
      return temp ;
  }
}

bool isValid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
      return 1;
    }
    else{
        return 0;
    }
}

bool checkPalindrome(string s)
{
    // Write your code here.
    string temp="";
    
    //removing faltu character
    for(int i=0;i<s.length();i++){
        if(isValid(s[i])){

            temp.push_back(toLower(s[i]));
        }
    }
    cout<<endl;
    
    int st=0;
    int e=temp.length()-1;
    
    while(st<e){
//         cout<<temp[st]<<" "<<temp[e];
       if(temp[st]!=temp[e]){
           return false;
       }
        st++;
        e--;
    }
    
    return true;
}