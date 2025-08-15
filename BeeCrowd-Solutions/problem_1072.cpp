//problem : 1072
#include<iostream>
using namespace std;
int main(){
    int t,i,a=0,b=0,n;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        if(n>=10&&n<=20){
            a++;
        }
        else{
            b++;
        }
    }
    cout<<a<<" in"<<endl;
    cout<<b<<" out"<<endl;



    return 0;}
