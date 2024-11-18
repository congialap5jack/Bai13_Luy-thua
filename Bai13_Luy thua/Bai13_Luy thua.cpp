// bai13_LuyThua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "TINH LUY THUA" << endl;

    int so, mu, luythua =1;
    cout << "Nhap so: "; cin >> so;
    cout << "Nhap so: "; cin >> mu;
    for ( int i = 0; i < mu; i++)
    {
        luythua *= so;
    }
    
    cout << so << " ^ " << mu << " = " << luythua;
   

    return 0;
}