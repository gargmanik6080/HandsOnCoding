#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,10,4,3,1,2,8,7,6};
    int n=sizeof(arr)/ sizeof(int);
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}