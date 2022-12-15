/*
İlk programımız

Her C++ programı, gerekli işlevleri yürütme yeteneği sağlayan kitaplıkları kullanır. Örneğin ekrana yazdıran 'cout' adlı en temel fonksiyon "iostream" başlık dosyasında tanımlanmıştır.

Komutu programımıza çalıştırma yeteneği eklemek için cout, kodun ilk satırına aşağıdaki include yönergesini eklemeliyiz:

	#include <iostream>
	using namespace std;
Kodun ikinci kısmı, yazacağımız asıl koddur. Çalıştırılacak ilk kod her zaman main fonksiyonu içerisinde bulunmalıdır.

	int main() {
	  ... kodumuz buraya gelecek
	}
  
int sözcüğü, main fonksiyonun bir tamsayı - basit bir sayı - döndüreceğini belirtir. Fonksiyonun döndüreceği sayı yazdığımız programın doğru çalışıp çalışmadığını gösterir. Kodumuzun başarıyla çalıştırıldığını söylemek istiyorsak, 0 sayısını döndürürüz. 0'dan büyük bir sayı, yazdığımız programın başarısız olduğu anlamına gelir.

Bu öğretici için, programımızın başarılı olduğunu belirtmek için 0 değerini döndüreceğiz:

	return 0;
Derleyicinin yeni bir satırın başladığını bilmesi için C++'daki her satırın noktalı virgülle ";" bitmesi gerektiğine dikkat edin.

cout komutu, cümlemizi ekrana yazdırmak için kullandığımız hazır bir fonksiyondur.

cout: Consol Output anlamına gelmektedir.

Örnek Program:
*/

	#include <iostream>
	using namespace std;

	int main() {

	  cout << "Hello World!" << endl;

	  return 0;
	}

// Hello World!

//Ekran çıktısı yukarıdaki gibi olacaktır.
