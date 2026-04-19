#include <stdio.h>

int maxSubarray(int arr[], int n){
    int max=arr[0], curr=arr[0];
    for(int i=1;i<n;i++){
        curr = (curr+arr[i] > arr[i]) ? curr+arr[i] : arr[i];
        if(curr>max) max=curr;
    }
    return max;
}

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    printf("%d", maxSubarray(arr,9));
    return 0;
}