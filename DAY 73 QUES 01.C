#include <stdio.h>

int duplicate(int arr[], int n){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]==arr[j]) return arr[i];
    return -1;
}

int main(){
    int arr[]={1,3,4,2,2};
    printf("%d", duplicate(arr,5));
    return 0;
}