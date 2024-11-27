// You are using GCC
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100
unsigned int hash(int key, int tableSize) {
    unsigned int square=key*key;
    unsigned int middle=(square/10)%tableSize;
    return middle;
}

int getOddOccurrence(int arr[], int size) {
    //Type your code here
    int h[100]={0};
    for(int i=0;i<size;i++){
        int index=hash(arr[i],MAX_SIZE);
        h[index]++;
    }
    for(int i=0;i<size;i++){
        int index=hash(arr[i],MAX_SIZE);
        if(h[index]%2!=0){
            return arr[i];
        }
    }
    return -1;
    
}
int main() {
    int n;
    scanf("%d", &n);

    int arr[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", getOddOccurrence(arr, n));

    return 0;
}