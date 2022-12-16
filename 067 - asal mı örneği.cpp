// 1'den 100'e kadar asal sayıların listesi

#include <iostream>

using namespace std;

bool asalMi(int x);

int main() {

	for (int i=1;i<=100;i++){
	if(asalMi(i)==true)
		cout << i << " ";
    }
    cout << endl;

	return 0;
}

// Fonksiyonun kendisi
bool asalMi(int x) {
	for (int i=2; i<=x/2; i++){
	if(x%i==0)
	return false;
	}
	return true;
}
