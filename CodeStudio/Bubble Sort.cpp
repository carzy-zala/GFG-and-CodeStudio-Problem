void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    bool swaps;
    for(int i=1;i<n;i++){
        swaps=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps=true;
            }
        }
        if(swaps==false){
            break;
        }
    }
}
