class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        char alpha[26]={0};
        int value;
        for(int i=0;i<str.length();i++){
              value=str[i]-'a';
           
            alpha[value]++;
        }
        
        int ans=0,maxi=-1;
        for(int j=0;j<26;j++){
            if(maxi<alpha[j]){
                maxi=alpha[j];
                ans=j;
            }
            
        }
        
        char finalAnswer=ans+'a';
        
        return finalAnswer;
    }

};