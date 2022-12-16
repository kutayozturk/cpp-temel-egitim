/*POİNTERLARA GİRİŞ

Pointer (Göstericiler) Kavramı*/

#include <iostream>
using namespace std;

int main(){

	int a = 20;

	int *ptr = &a; // & işareti ile a'nın adresi değerini ptr'ye atamış olduk
	cout << "Degiskenin Adresi : " << &a << endl; // adres değerine erişim
    cout << "Degiskenin Adresi : " << ptr << endl; // adres değerine erişim

    cout << "Degiskenin Degeri : " << *ptr << endl;

    *ptr = 15;
    cout << "Degiskenin Yeni Degeri : " << a << endl;

	return 0;
}
