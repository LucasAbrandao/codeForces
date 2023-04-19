#include <bits/stdc++.h>

using namespace std;


int main (){

    int initialPrice,initialMoney,numBananas;

    cin >> initialPrice; 
    cin >> initialMoney;
    cin >> numBananas;

    int payPrice=0;

    for (int i=1; i <= numBananas; i++){
        
        payPrice += initialPrice * i;

    } 

    if (initialMoney >= payPrice){

        cout << "0"<< endl;

    }else{

        int borrowMoney = payPrice - initialMoney;
        cout << borrowMoney << endl;

    }

    return 0;
}