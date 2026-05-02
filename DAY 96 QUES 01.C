#include <stdio.h>

void removeElement(int arr[], int *n, int key){
    int j=0;
    for(int i=0;i<*n;i++){
        if(arr[i]!=key)
            arr[j++] = arr[i];
    }
    *n = j;
}

int main(){
    int arr[]={1,2,3,2,4};
    int n=5;
    removeElement(arr,&n,2);
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}