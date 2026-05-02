#include <stdio.h>

int firstOccurrence(int arr[], int n, int key){
    for(int i=0;i<n;i++)
        if(arr[i]==key) return i;
    return -1;
}

int main(){
    int arr[]={1,2,3,2,4};
    printf("%d", firstOccurrence(arr,5,2));
    return 0;
}