/* ARTTIRMA VE AZALTMA OPERATÖRLERİ

	C ve C++ programlama dillerinde sırasıyla arttırma ve azaltma (aritmetik) operatörleri vardır. Bu operatörler ++ ve — olarak kullanılırlar.

	++ ilgili değeri 1 arttırır.

	— ilgili değeri 1 azaltır.


	int sayi = 5;

	// arttırma operatörü
	++sayi;  // 6
	Yukarıdaki örnektede görüldüğü gibi 5 değerini 1 arttırarak 6 sonucuna ulaşılmıştır.

	Prefix ve Postfix Kavramları
	Programlamada (Java, C, C++, JavaScript vb.), artırma operatörü ++bir değişkenin değerini 1 arttırır. Benzer şekilde, azaltma operatörü --de bir değişkenin değerini 1 azaltır.


	a= 5
	++a; // a 6 olur
	a++; // a 7 olur
	--a; // a 6 olur
	a--; // a 5 olur
	++ ve – – operatör Prefix ve Postfix olarak (sağda veya solda olması durumu)
	++ Operatörü ++a şeklinde olduğu gibi (prefix) olarak kullanırsanız, (yani sol tarafta) önce a değeri arttırılır ve değer döndürülür.
	++ Operatörü a++ şeklinde olduğu gibi (postfix) olarak kullanırsanız, öncelikle a’nın kendi değeri üzerinden işlem yapılır, sonra değer 1 arttılır.

*/

	#include <iostream>

	using namespace std;

	int main() {
	   int a = 5, b = 5;

	   cout << a++ << endl;
	   // Ekrana 5 yazar
	   // sonra değeri 1 arttırılır.

	   cout << ++b << endl;
	   // değer bir arttırılır
	   //ekrana 6 yazar

	   return 0;
	}

