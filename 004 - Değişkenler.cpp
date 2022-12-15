Değişken Nedir?

Değişkenler
	Değişkenler, program içersinde değeri değiştirilebilen verilerdir.

Sabitler
	Sabitler, tanımlandıktan sonra değeri değiştirilemeyen verilerdir.

Global Değişkenler
	Global değişkenler, programın “main fonksiyonundan” önce tanımlanırlar.

UYARI: Global değişkenler, program açılışında çalışmaya başlarlar ve kullanıcı programı kapatana dek çalışmayı sürdürürler.
Bu sebep ile mümkün olduğunca az sayıda Global Değişken kullanılmalıdır.

NOT:	Global değişkenlere bir değer atanmaz ise, otomatik olarak değeri 0 kabul edilir.
Lokal Değişkenler
Değişken Tanımlama
	Değişkenler tanımlaması yapılırken büyük-küçük harfe duyarlı olduğunu bilmemiz önemlidir. 
	Örneğin; değişken ve Değişken ifadeleri aynı şeyler değildir.

Bir değişken tanımlama esnasında değer alabilir. Örneğin; a=5 gibi

Ancak, tanımlama esnasında bir değişkene değer atamak zorunlu değildir.

Değişken Tanımlama Kuralları
	- Değişkenlerin isimleri alfabede bulunan karakterlerle başlamalı. Ama ilk harf hariç diğer karakterler sayı olabilir.
	- C++ büyük ve küçük harf duyarlıdır. Yani Sayi, sayi ve SAYI hepsi ayrı değişken olarak algınalırlar.
	- Değişken isimleri birden fazla kelime olduğu zaman; kelimelerin arasına boşluk konmaz. 
	  Bu tür değişkenleri ya kelimeleri birleştirerek veya kelimeler arasına _ (alt çizgi) karakteri koyararak isimlendiririz.
	- Değişkenlerin isimleri !, ?, {, ] gibi karakterler içeremezler.
	- C++’ın anahtar kelimelerini de değişken isimleri olarak kullanamayız.
	
ÖNEMLİ NOT: Değişkenler kullanılmadan önce mutlaka tanımlanmalıdırlar.