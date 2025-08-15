//problem : 1099
#include<iostream>
using namespace std;
int main(){
    int i,j,t,temp,a,b,x=0;
    cin>>t;
    for(i=0;i<t;i++){
            cin>>a>>b;
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        if(a%2 == 0){
            a--;
        }
        a+=2;
        for(j=a;j<b;j+=2){
            x+=j;
        }
        cout<<x<<endl;
        x = 0;
    }
    return 0;}
