#include<iostream>
#include<algorithm>
using namespace std;

void MoveAtEnd(int arr[], int n){
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
            arr[temp++]=arr[i];
    }
    for(int i=temp;i<n;i++){
        arr[i]=0;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MoveAtEnd(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}