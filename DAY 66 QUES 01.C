#include <stdio.h>

int secondLargest(int arr[], int n){
    int first=arr[0], second=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
            second=arr[i];
    }
    return second;
}

int main(){
    int arr[]={10,20,4,45,99};
    printf("%d", secondLargest(arr,5));
    return 0;
}