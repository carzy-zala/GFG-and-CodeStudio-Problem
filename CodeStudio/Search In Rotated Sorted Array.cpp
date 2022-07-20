int pivots(vector<int> a,int size){

    int start = 0 ;
    int end = size - 1 ;
    int mid = start + (end-start)/2;

    while(start<end){
        if(a[mid]>=a[0]){
            start = mid + 1;
        }
        else{
            end = mid ;
        }
   
        mid = start + (end-start)/2;
    }

    return start;  
}

int  Bsearch(vector<int> a,int s,int e,int key){

    int start = s ;
    int end = e;
    int mid = start + (end - start)/2;  
  

    while(start<=end){
        if(a[mid] == key ){
      
            return mid ;
        }
        else {
               if(a[mid]>key){
               end = mid - 1 ;
               }

               else{
               start = mid + 1 ;
            }
        }
        

        mid = start + (end - start)/2 ;
     }

     return -1 ;
}

int findPosition(vector<int>& arr, int n, int k)
{  
    int pivot = pivots(arr,n);
    
    if(arr[pivot]<=k && k<=arr[n-1]){
        return Bsearch(arr,pivot,n-1,k);
    }
    else{
        return Bsearch(arr,0,pivot-1,k);
    }
}

