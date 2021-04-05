#include<iostream>
#include<string>
using namespace std;
int main() {
	char BUKVA = 'M';
	char BUKVA3 = 'A';
	char BUKVA4 = 'I';
	char BUKVA5 = 'P';
	int CHISLO = 23;
	float CHISLO2 = 23.3123f;
	bool EDINITSA = true;
	string TEXT;
	cout << BUKVA << endl;
	cout << CHISLO << endl;
	cout << CHISLO2 << endl;
	cout << EDINITSA << endl;
	cout << "==========================================" << endl;
	cout << BUKVA << endl;
	cout << BUKVA3 << endl;
	cout << BUKVA4 << endl;
	cout << BUKVA5 << endl;
	TEXT = TEXT + BUKVA + BUKVA3 + BUKVA + BUKVA3 + BUKVA4 + BUKVA5 + BUKVA3 + BUKVA5 + BUKVA3;
	cout << TEXT;
	return 0;
}