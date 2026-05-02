#include <stdio.h>

int lastOccurrence(int arr[], int n, int key){
    for(int i=n-1;i>=0;i--)
        if(arr[i]==key) return i;
    return -1;
}

int main(){
    int arr[]={1,2,3,2,4};
    printf("%d", lastOccurrence(arr,5,2));
    return 0;
}