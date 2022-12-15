/* İF SORUSU

Soru: Sayı oku. Sayı 3 basamaklı mı?

int sayi;
cout << "Bir sayi giriniz: ";
cin >> sayi;

if (sayi<100) cout << "uc basamakli degil" << endl;
else if (sayi>999) cout "uc basamakli degil" << endl;
else cout << "sayi 3 basamaklidir" << endl;
	
*/

Yukarıdaki program doğru çalışır
Ancak daha iyi bir yazım şeklide vardır.
yukarıdaki çözümde 2 kez "uc basamakli degildir" ifadesi kullanılmıştır.

BİRLEŞİK KOŞUL YAZABİLİRİZ
|| (pipe-boru işareti)

if (sayi<100 || sayi>999) cout << "uc basamakli degil" << endl;
else cout << "Eyvallah" << endl;

Neden || işareti kullanılmıştır da && işareti kullanılmamıştır?

	if (sayi<100 || sayi>999) cout << "uc basamakli degil" << endl;
	else cout << "Eyvallah" << endl;

Böyle bir sayı yoktur!  Herkese Eyvallah der.