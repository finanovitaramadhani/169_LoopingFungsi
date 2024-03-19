// Prosedure dan Fungsi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int panjang, lebar;

void inputdata() {
	cout << "Masukan nilai panjang :";
	cin >> panjang;
	cout << "Masukan nilai lebar :";
	cin >> lebar;
}

int hitungluas() {
	return panjang * lebar;
}

void bebas() {
	cout << "Luasnya adalah :" << hitungluas() << endl;
}

int main()
{
	inputdata();
	bebas();
}
