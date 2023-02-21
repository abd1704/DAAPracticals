#include<bits/stdc++.h>
using namespace std;
int divide(int arr[],int start, int end){
    int pivot = arr[start];
    int count =0;
     for(int i=start+i;i<=end;i++){
        arr[i]<=pivot;
        count++;
    }
    int pivotindx=start+count;
    swap(arr[pivotindx],arr[start]);
    int i=start;
    int j=end; 
    while(i<pivotindx && j>pivotindx){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindx && j>pivotindx){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindx;
}
void quicksort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int p=divide(arr,start,end);
    divide(arr,start,p-1);
    divide(arr,p+1,end);
}
int main(){
    int arr[]= {5,4,2,1};
     int n=4;
    quicksort(arr,0,n-1);
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}