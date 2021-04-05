#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string NAME;
	string YEAR;
	cout << "¬ведите им€:" << endl;
	cin >> NAME;
	cout << "¬ведите дату рождени€:" << endl;
	cin >> YEAR;
	cout << "=======================" << endl;
	cout << "1-  ";
	cout << NAME;
	cout << YEAR << endl;
	cout << "2-  ";
	cout << YEAR;
	cout << NAME << endl;
	cout << "3-  "; 
	cout << NAME;
	cout << "_";
	cout << YEAR << endl;
	cout << "4-  ";
	cout << YEAR;
	cout << "_";
	cout << NAME; 
	return 0;
}