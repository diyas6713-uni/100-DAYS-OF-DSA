#include <stdio.h>

int minFreq(int arr[], int n){
    int minCount = n+1, element = arr[0];

    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]) count++;
        }
        if(count < minCount){
            minCount = count;
            element = arr[i];
        }
    }
    return element;
}

int main(){
    int arr[]={1,2,2,3,3,3,4};
    printf("%d", minFreq(arr,7));
    return 0;
}