#include <stdio.h>

void removeDuplicates(int arr[], int *n){
    int temp[100], j=0;

    for(int i=0;i<*n;i++){
        int found=0;
        for(int k=0;k<j;k++){
            if(arr[i]==temp[k]){
                found=1; break;
            }
        }
        if(!found)
            temp[j++] = arr[i];
    }

    for(int i=0;i<j;i++)
        arr[i]=temp[i];

    *n=j;
}

int main(){
    int arr[]={1,2,2,3,3,4};
    int n=6;
    removeDuplicates(arr,&n);
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}