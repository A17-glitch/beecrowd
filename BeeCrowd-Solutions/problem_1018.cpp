//problem : 1018
#include<iostream>
using namespace std;
int main(){
    int N,vagshesh;
    cin>>N;
    cout<<N<<endl;

    //100 taka
    int note100 = N/100;
    cout<<note100<<" nota(s) de R$ 100,00"<<endl;
    vagshesh = N%100;
    //50 taka
    int note50 = vagshesh / 50;
    cout<<note50<<" nota(s) de R$ 50,00"<<endl;
    vagshesh = vagshesh%50;
    //20 taka
    int note20 = vagshesh / 20;
    cout<<note20<<" nota(s) de R$ 20,00"<<endl;
    vagshesh = vagshesh%20;
    //10 taka
    int note10 = vagshesh / 10;
    cout<<note10<<" nota(s) de R$ 10,00"<<endl;
    vagshesh = vagshesh%10;
    //5 taka
    int note5 = vagshesh / 5;
    cout<<note5<<" nota(s) de R$ 5,00"<<endl;
    vagshesh = vagshesh%5;
    //2 taka
    int note2 = vagshesh / 2;
    cout<<note2<<" nota(s) de R$ 2,00"<<endl;
    vagshesh = vagshesh%2;
    //1 taka
    int note1 = vagshesh / 1;
    cout<<note1<<" nota(s) de R$ 1,00"<<endl;



return 0;
}
