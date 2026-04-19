#include <stdio.h>

int minSubarray(int arr[], int n){
    int min=arr[0], curr=arr[0];
    for(int i=1;i<n;i++){
        curr = (curr+arr[i] < arr[i]) ? curr+arr[i] : arr[i];
        if(curr<min) min=curr;
    }
    return min;
}

int main(){
    int arr[]={3,-4,2,-3,-1,7,-5};
    printf("%d", minSubarray(arr,7));
    return 0;
}