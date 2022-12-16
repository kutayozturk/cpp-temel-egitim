// DİZİLER

/* 

	Şimdiye kadar hep tek değişken oluşturduk.
	Bazı durumlarda birden fazla veri girmemiz gerekebilir.

	Örneğin 100 öğrenci için not girelecek ise
	100 tane öğrenci için 100 tane değişken oluşturmanız gerekiyor.
	Bunu yerine DİZİ adı verilen birden fazla veri girişi yapabileceğimiz
	yapılar söz konusudur. Biz bu yapılara DİZİ diyoruz.

	DİZİLER: Aynı adla birden fazla değerin gösterildiği veri yapılarıdır.

GENEL TANIMLAMASI

veritipi dizi_adi [eleman_sayisi] = { dizi_elemanları }

	NOT: Dizinin elemanları ardışık olarak hafızada tutulur.

	NOT: dizi elamanları indis ile ifade edilir.
		indis değeri 0'dan başlar.
		
	Yani 5 elemanlı bir dizinin elemanları 

	0	1	2	3	4	olur.

		UYARI: HAFIZA HATASI
			int d[5]; olsun eğer siz,	
			d[5]; i görüntülemeye çalışırsanız, dizinin son
			indis değeri 4 olduğundan DİZİYE AİT OLMAYAN bir alanı
			çağırmış olursunuz. O alanda ram'deki rastgelelikten dolayı
			farklı bir değer var ise, farkında olmadan o değeri
			değiştirmiş olursunuz. Bu hatayı bulmak inanın
			çok ama çok zordur.
			Biz bu hataya HAFIZA HATASI adını veriyoruz.
		
	ÖRNEK KOD
	
*/

#include <iostream>
using namespace std;

int main(){
	//Kod içerisine atanmış 5 elemanlı bir dizi tanımlayalım

	int dizi[5] = {10,20,30,40,50};

	for (int i=0;i<5;i++){
		cout << "Dizinin " << i+1 <<". elemani = " << dizi[i] << endl;
	}
}

/* EKRAN ÇIKTISI

Dizinin 1. elemani = 10
Dizinin 2. elemani = 20
Dizinin 3. elemani = 30
Dizinin 4. elemani = 40
Dizinin 5. elemani = 50

*/