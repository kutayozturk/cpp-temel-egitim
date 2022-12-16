#include <iostream>

using namespace std;

int factor (int n){ //bana bir n değeri verildi. Faktöryelini bulacağım.
	int f=1;
	for (int i=1;i<=n;i++){
	f=f*i;
	}
	return f;

}



int main (){

	int n=5;
	cout << "n! = " << factor (n) << endl;
				// sana n değerini gönderiyorum,
				//	bana faktöreyelini bul gönder

	/*NOT: Önce tanımla, sonra kullan.
	O zaman önce fonksiyonumuzu tanımlayalım.*/

	cout << "6! = " << factor (6) << endl << endl;

	for (int i=1;i<=7;i++){
		cout << i << "!= " << factor (i) << endl;
	}
}
