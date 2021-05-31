#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;


int  income;
double tax;




int main()
{
    tax = 0;
	cin>>income;
    if(income>=0 && income<=10000 ){
        tax=  0.1*income;
    }
    else if(income>10000 && income<=30000 ){
        tax= 10000*.1 + 0.15*(income-10000);
    }
    else if(income>30000 && income<=50000 ){
        tax= 0.15*30000+0.2*(income-30000);
    }
    else if(income>50000){
        tax= .2*50000 + 0.25*(income-50000);
    }
    cout<<tax;
	return 0;
}
