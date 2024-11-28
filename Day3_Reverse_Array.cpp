#include<iostream>
using namespace std;

void Reverse(int arr[], int n){
    int a=n/2;
    for(int i=0;i<a;i++){
        int temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Reverse(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}