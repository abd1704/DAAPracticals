#include<bits/stdc++.h>
using namespace std;
int linear(int arr[],int t){
    for(int i=0;i<sizeof(arr);i++){
      if(arr[i]==t){
        return i;
      }
    }
    return -1;
};
int main(){
    int arr[]={2,4,5,7};
    int t=4;
    cout<<linear(arr,4);

}