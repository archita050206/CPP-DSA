// You are using GCC
#include <iostream>
#include <string>

using namespace std;

int partition(string names[], int heights[], int low, int high) {
    
    //Type your code here
    int pivot=heights[low];
    int count=0;
    for(int i=low+1;i<=high;i++){
        if(heights[i]>=pivot)count++;
    }
    int pivotIndex=low+count;
    swap(heights[low],heights[pivotIndex]);
    swap(names[low],names[pivotIndex]);
    int i=low;
    int j=high;
    while(i<pivotIndex && j>pivotIndex){
        while(heights[i]>pivot)i++;
        while(heights[j]<pivot)j--;
        
        swap(heights[i++],heights[j--]);
        swap(names[i++],names[j--]);
        
    }
    return pivotIndex;
}

void quickSort(string names[], int heights[], int low, int high) {
    
    //Type your code here
    if(low<high){
        int p=partition(names,heights,low,high);
        quickSort(names,heights,low,p-1);
        quickSort(names,heights,p+1,high);
    }
    
    
}

int main() {
    int n;
    cin >> n;

    string *names = new string[n];
    int *heights = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> names[i] >> heights[i];
    }

    quickSort(names, heights, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }

    delete[] names;
    delete[] heights;
    return 0;
}