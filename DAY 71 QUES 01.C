#include <stdio.h>

int sumEven(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++)
        if(arr[i]%2==0) sum+=arr[i];
    return sum;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    printf("%d", sumEven(arr,6));
    return 0;
}