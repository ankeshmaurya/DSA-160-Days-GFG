#include<iostream>
#include<algorithm>
using namespace std;

int Second(int arr[], int n){
    sort(arr,arr+n);
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1])
            return arr[i];
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Second(arr,n);
}