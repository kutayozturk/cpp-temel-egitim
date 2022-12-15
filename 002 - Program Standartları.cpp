//	Program Standartları

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello world!" << endl;
	return 0;	
}

/*
Bütün porgramlama dillerinde include, import vb bir mantık vardır.
Bir programlama dili kullanılmadan önce nelere ihtiyaç duyuyorsak örneğin matematiksel
fonksiyonlar, bu konu ile alakalı bilgileri programımıza tanıtmalıyız. Bu tanıtma ve
tanışma işini yapan dosyalara biz KÜTÜPHANE dosyaları diyoruz.

Kütüphanelerimizin uzantıları *.h olacak şekilde belirlenmiştir.

include ile kütüphane eklemenin en temel nedeni, kullanacağın özellikleri
projene eklemektir.

	C ve C++'da include
	C# ve Java gibi dillerde import olarak geçer
	temelde aynı şeydir.

*/

//	Yukarıdaki kodları inceleyelim

/* iostream
	<iostream>  input ve output icin include edilen header. 
				Yani kullaniciya bir yazi gosterecegimiz zaman yada 
				kullanicidan bir yazi alacagimiz zaman kullaniriz.
*/

/*	using namespace std: 

		Kod içerisinde eğer fazlasıysa std namespace içerisinde yer alan 
		komut kullanılıyorsa, buna kolaylık sağlamak amacıyla kullanılan 
		isim uzayıdır. 
			Örneğin; cout komutu std::cout şeklinde yazılıyorsa 
			ve program kodu içerisinde çokça cout komutu kullanılacaksa, 
			std ad uzayını kullanmak mantıklıdır. 
			
			Buradan anlaşılacağı üzere std::cout olarak da çıktı sağlayabiliriz.
			
			Aslında include mantığına benzerdir.
*/

/*		NOT
	İnternette bulduğunuz kodlar içerisinde 
	
		using namespace std;

		int main()
	aralığında farklı ifadeler yer alabilir. Ne demek istiyoruz.


			using namespace std;

				struct
				typedef

			int main

	gibi kavramlar.
	
		Demekki programlama dillerinin alternatif kullanımları varmış. 
		Bu aklımızda şimdilik bir NOT olarak dursun.
		
		C++ dilinde Fonksiyon diye geçen kavram Java programlama dilinde 
		Metot olarak karşımıza çıkamaktadır.
		Ancak her ikiside aynı şeydir.
*/

/* 	Programın Genel Yapısına Tekrar Dönelim

		int main() fonksiyonu
		Binlerce fonksiyon yazabilirsin ama program main'de çalışır.
		
		Yani main fonksiyonu Vektörel Bilişimin giriş kapısıdır.
		İçeride bir sürü kapı vardır ama girebileceğin tek kapı vardır.
*/

/*	return 0; komutu

		return geriye değer döndürmeye yarar. Başlangıç aşamasında return 0 komutu
		kullanılmadan da programımız çalışır.
		
		return 0 ;' satırının genel kabul görmüş manası da 
		"Program hatasız sonlandırıldı" demek oluyor. 
		Eğer program sonlandırıldıktan sonra geri dönüş değeri önemliyse 
		duruma göre başka değerler de istenirse döndürülebilinir.
*/

/* Blok Kavramı

	{ komut aralığı }
	
	komutun başlangıç ve bitiş bloğudur.
	
*/
