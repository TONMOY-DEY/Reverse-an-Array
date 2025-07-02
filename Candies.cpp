#include<iostream>
using namespace std;

int main(){
    int N;
    int Candies[1000000];
    cin>>N;

    for(int i=0;i<N;i++){
        cin>>Candies[i];
    }
    int A,B;
    cin>>A,B;

    int sum=0;
    for(int i=A;i<=B;i++){
        sum=sum+Candies[i];
    }
    cout<<sum<<endl;

}
