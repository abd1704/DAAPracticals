#include<bits/stdc++.h>
using  namespace std;
int binary(int arr[],int l,int h,int target){
    int mid=(l+h)/2;
    if(target==arr[mid]){
        return mid;
    }
 else if(target>arr[mid]){
    l=mid+1;
    
   return binary(arr,l,h,target);   
 }
 else {
    h=mid;
   return binary(arr,l,h,9);}
}
int main(){
    int arr[] ={3,5,7,9,11};
    int n=5;
    int l=0;
    int h=n-1;
    int target=9;
    cout<<binary(arr,l,h,target);
}