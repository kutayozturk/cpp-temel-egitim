/*Soru 2: Saat, dakika ve saniye oku. Saniyeyi 1 arttır.

Kontroller
	1. Girişler doğru mu
	2. doğru değilse uyarı ver
	3. doğruysa saniyeyi 1 arttır ve yeni zamanı göster



	
12 23 34 girilirse
12 23 35 olur

23 59 59 girilirse
00 00 00 olur

*/

#include <iostream>

using namespace std;

int main()
{
    while(true){

	int saat,dakika,saniye;
	cout << "Saat, Dakika ve Saniyeyi giriniz: ";
	cin >> saat >> dakika >> saniye;
	if (saat<0 || saat >23 || dakika<0 || dakika>59 || saniye<0 || saniye>59)
		cout << "Girilen deger hatalidir." << endl;
	else{
		saniye++;
		if(saniye==60){
			saniye=0;
			dakika++;
			if(dakika==60){
				dakika=0;
				saat++;
				if(saat==24)
					saat=0;
			}
		}

	}

	cout << "Zaman: " << saat <<":"<< dakika <<":"<< saniye <<endl;
    }
}


// Ev Çalışması: C++ programlama dilinde formatlı görüntüleme nasıl yapılır	