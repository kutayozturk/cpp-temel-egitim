/* DİZİ SORU

SORU: Kullanıcı tarafından atanan 10 elemanlı dizinin
elemanlarının toplamını ve ortalamasını bulaun programı
yazınız.

Ekran çıktısı böyle olacaktır.


0. indisli sayiyi giriniz = 1
1. indisli sayiyi giriniz = 2
2. indisli sayiyi giriniz = 3
3. indisli sayiyi giriniz = 4
4. indisli sayiyi giriniz = 5
5. indisli sayiyi giriniz = 6
6. indisli sayiyi giriniz = 7
7. indisli sayiyi giriniz = 8
8. indisli sayiyi giriniz = 9
9. indisli sayiyi giriniz = 10
Dizideki elemanları toplamı = 55
Dizideki elemanları ortalaması = 5.5
*/


#include <iostream>
using namespace std;

int main(){

	setlocale(LC_ALL,"Turkish");

	int dizi[10];

	float toplam=0;
	float ortalama=0;

	int i;
	for (i=0; i<10; i++){
        cout << i << ". indisli sayiyi giriniz = ";
        cin >> dizi[i];
	}
	int j;
	for(j=0; j<10; j++){
        toplam+=dizi[j];
	}

	ortalama = toplam / 10;
	cout << "Dizideki elemanları toplamı = " << toplam << endl;
	cout << "Dizideki elemanları ortalaması = " << ortalama << endl;

}

