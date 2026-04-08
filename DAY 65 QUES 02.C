#include <stdio.h>

int countOdd(int arr[], int n){
    int c=0;
    for(int i=0;i<n;i++)
        if(arr[i]%2!=0) c++;
    return c;
}

int main(){
    int arr[]={1,2,3,4,6};
    printf("%d", countOdd(arr,5));
    return 0;
}