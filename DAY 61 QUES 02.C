#include <stdio.h>

void reverseArr(int arr[], int n) {
    int i=0,j=n-1;
    while(i<j){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;j--;
    }
}

int main() {
    int arr[]={1,2,3,4,5};
    reverseArr(arr,5);
    for(int i=0;i<5;i++) printf("%d ",arr[i]);
    return 0;
}