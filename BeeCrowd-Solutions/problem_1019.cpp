//problem : 1019
#include<iostream>
using namespace std;
int main(){

    int s,hour,minute,second,vagshesh;
    cin>>s;
    //hour
    hour = s/3600;
    vagshesh = s%3600;

    //minute
    minute = vagshesh/60;
    vagshesh = vagshesh % 60;

    //second
    second = vagshesh / 1;

    cout<<hour<<":"<<minute<<":"<<second<<endl;




return 0;
}
