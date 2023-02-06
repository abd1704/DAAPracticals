#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={7,3,4,3};
    int n=4;
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minidx];
        arr[minidx]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}