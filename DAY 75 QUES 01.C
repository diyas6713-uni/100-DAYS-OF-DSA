#include <stdio.h>

int pairSum(int arr[], int n, int k){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]+arr[j]==k)
                return 1;
    return 0;
}

int main(){
    int arr[]={1,4,45,6,10,8};
    printf("%d", pairSum(arr,6,16));
    return 0;
}