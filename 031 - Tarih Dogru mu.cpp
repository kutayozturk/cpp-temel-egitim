// Soru: Gün, Ay ve Yil gir, tarih doğru mu kontrol et

#include <iostream>

using namespace std;

int main()
{
    int gun, ay, yil;
	cout << "Gun, ay ve yil giriniz: ";
	cin >> gun >> ay >> yil;
	
	if (gun<1 || gun>31 || ay<1 || ay>12 || yil<1)
		cout << "Hatali giris yaptiniz." << endl;
	// standart hata yok
	
	else{
		// 31 Nisan hatalıdır
		// Hangi aylar 31 olamaz...
		// parmak sayma yöntemini hatırlayınız
		if ((ay==2 || ay==4 || ay==6 || ay==9 || ay==11) && gun==31)
			cout << "31 olmayan ay hatası" << endl;
		else {
			//şubat kaldı
			if (ay==2 && gun<29)
				cout << "Subat ayi hatasi-1" << endl;
			else{
				// Subat 29 kontrolu
				if (ay==2 && gun==29 && yil%4!=0)
				cout << "29 subat hatasi" << endl;
			else cout << "Dogru tarih" << endl;
			} 
		}
		
		
	}
	
	
	
	
}
