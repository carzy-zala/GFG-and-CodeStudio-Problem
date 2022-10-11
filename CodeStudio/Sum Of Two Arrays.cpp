#include <bits/stdc++.h> 

vector<int> reverse(vector<int> x){
    
    int s=0;
    int e=x.size()-1;
    
    while(s<e){
        swap(x[s++],x[e--]);
    }
    
    return x;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    
    int i=n-1;
    int j=m-1;
    
    int carry=0;
    int val;
    
    vector<int> ans;
    
    while(i>=0 && j>=0){
        int sum=a[i]+b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    while(i>-1){
       int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    
    while(j>-1){
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    
    if(carry){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }

    
    return reverse(ans);
}