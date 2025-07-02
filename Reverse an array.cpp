#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[1000000];

    for(int i=0;i<N;i++){
            cin>>arr[i];
    }
    for(int i=0;i<N/2;i++){
        swap(arr[i],arr[N-1-i]);
    }
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    //return 0;




}
