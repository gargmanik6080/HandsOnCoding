#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;}

void Selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        swap(&a[min],&a[i]);
    }
}

void BubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j+1],&a[j]);
            }
        }
    }
}
void InsertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}



void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={4,10,5,1,4,8,6,3,7,9};
    int n = sizeof(arr)/4;
    // Selection_sort(arr,n);
    // BubbleSort(arr,n);
    InsertionSort(arr,n);
    print(arr,n);
    cout<<endl;
}