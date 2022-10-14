#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    
    vector<int> arr;
    
    int i=0;
    int j=0;
    
//     while(i<m && j<n){
//         if(arr1[i]>arr2[j]){
//             arr.push_back(arr[j++]);
//         }
//         else{
//             arr.push_back(arr[i++]);
//         }
//     }
    
//     while(i<m){
//         arr.push_back(arr1[i++]);
//     }
    
//     while(j<n){
//         arr.push_back(arr2[j++]);
//     }
    
         for(int i=0;i<n;i++) arr1[m+i] = arr2[i];
            sort(arr1.begin(),arr1.end());
    return arr1;
}