#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[]={7,8,1,3,2};
        for(int i=1;i<sizeof(arr);i++){
            int current =i;
            int j=i-1;
            while(j>=0 &&current<arr[j]){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=current;
        }
        for(int i=0;i<sizeof(arr);i++){
            cout<<arr[i]<<endl;
        }

}