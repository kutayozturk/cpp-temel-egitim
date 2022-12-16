//RASTGELE SAYI ÜRETME rand()

#include <iostream>
using namespace std;

int main(){
	
	/* rand() komutu
	Rastgele sayı üretmeye yarar ancak, 
	üretilen sayı her program açıldığında aynı olacaktır.
	
	rand komutunun kullanım alanı analiz işlemlerinde çok kullanılır.
	
	Örneğin, bir program 1000 adet sayı girmemizi istiyor.
	1000 adet sayıyı elle girmek yerine rastgele olarak üreterek
	programımıza giriş yaptırabiliriz.
	Sonrasında aynı sayılar ile programda değişlikler yaptıktan sonra
	programımızı test etmek ve karşılaştırma yapmak istiyorsak
	rand komutu ile işimiz epey kolaylaşır.
	
	NOT: radn komutu 0 ile max int arasında bir sayı üretir.
	*/
	
	int a = rand();
	cout << a << endl;

	int b = rand();
	cout << b << endl;

	int c = rand();
	cout << c << endl;

	
}
