#include<iostream>
using namespace std;

void Reverse(int arr[], int n,int key){
    key%=n;
    int temp[n];
    for(int i=0;i<key-1;i++){
        temp[i]=arr[key+i];
    }
    for(int i=0;i<key;i++){
        temp[n-key+i]=arr[i];
    }
    for(int i=0;i<key-1;i++){
        arr[i]=temp[i];
    }
}

int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    Reverse(arr,n,key);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}