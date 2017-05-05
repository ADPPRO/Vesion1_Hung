// giai_pt_bac2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{

	double a, b, c, del;
	cout << "nhap vao so a" << endl;
	cin >> a;
	cout << "nhap vao so b" << endl;
	cin >> b;
	cout << "nhap vao so c" << endl;
	cin >> c;
	if (a == 0 && b == 0 && c == 0) cout << "phuong tring co vo so nghiem"<<endl;
	if (a == 0 && b == 0 && c != 0) cout << " phuong trinh vo nghiem"<<endl;
	if (a == 0 && b != 0 && c != 0) cout << "phuong trinh co 1 nghiem: " << -c / b<<endl;
	if (a != 0) {
		del = b*b - 4 * a*c;
		if (del < 0) cout << "phuong trinh vo nghiem."<<endl;
		if (del == 0) cout << "phuong trinh co 1 nghiem duy nhat: " << -b / 2 * a;
		if (del > 0) cout << "phuong trinh co 2 nghiem phan biet " << endl << "x1= " << (-b + sqrt(del)) / (2 * a) << endl << "x2= " << (-b - sqrt(del)) / (2 * a)<<endl;
	}sss
	return 0; 
}

