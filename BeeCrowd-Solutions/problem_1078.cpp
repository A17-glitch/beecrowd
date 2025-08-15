//problem : 1078
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    for(i=1;i<=10;i++){
        int mult = n*i;
        cout<<i<<" x "<<n<<" = "<<mult<<endl;
    }
    return 0;}
