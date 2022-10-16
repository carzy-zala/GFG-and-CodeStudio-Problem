#include <bits/stdc++.h> 

long long int sumOrProduct(long long int n, long long int q)
{
	// Write your code here.
    
    if(q==1){
        long long sum=0;
        
        for(int i=1;i<=n;i++){
            sum=sum+i;
        }
        return sum;
    }
    else{
        long long m=1000000007;
        long long p=1;
        for(int i=1;i<=n;i++){
            p=(p*i) % m;
        }
        
      
        return p;
    }
}