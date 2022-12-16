// RASTGELE SAYI ÜRETME srand

#include <iostream>
#include <time.h> // time kütüphanesini ekliyoruz
using namespace std;

int main(){

	// Genel Yazılışı
	// srand(saat);
/*
NOT: time.h kütüphanesinin eklenme nedeni nedir?
srand komutu bir başlangıç değerine ihtiyaç duyar.
yani srand komutunu beslememiz gerekir.
bu sebep ile rastgele sayıyı üretirken
üretilecek değeri saate bağluyoruz.
saat değeri sürekli değişkenlik gösterdiği için
(zaman akıp gidiyor) sürekli farklı değerler
üretebiliyoruz.
*/

srand(0); // başlangıç değeri sürekli 0 olur ise sayı yine sabit olur.
int a=rand();
cout << a << endl;

srand(time(NULL));
int b=rand();
cout << b << endl;

// örnek

// 1 ile 20 arasında rastgele sayı oluşturmak

srand(time(NULL));
// min + rand()%20
int sayi = 1 + rand()%20;
cout << sayi << endl;

// 20 ile 30 arasında
srand(time(NULL));

int sayi2 = 20 + rand()%11; // 11 olma sebebi 30 sayısınında dahil olmasıdır.
cout << sayi2 << endl;
}
