//problem : 1020
#include<iostream>
using namespace std;
int main(){

    int N,year,month,day,vagshesh;
    cin>>N;

    //year
    year = N/365;
    vagshesh = N%365;

    //month
    month = vagshesh/30;
    vagshesh = vagshesh%30;

    //day
    day = vagshesh/1;

    cout<<year<<" ano(s)"<<endl;
    cout<<month<<" mes(es)"<<endl;
    cout<<day<<" dia(s)"<<endl;

return 0;
}
