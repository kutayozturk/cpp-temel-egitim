/*	Koşul Yapısı
	if koşul komutudur
	
	Genel Yazılışı
	
	if (koşul) {
		evet_işlemşleri;
	}
	else {
		hayır_işlemleri;		
	}

*/

/*

ÖNEMLİ NOT: Her koşulda ELSE olmak zorunda DEĞİLDİR!...

Koşul İşleçleri

== 	Eşit midir
!= 	Eşit Değil midir (Farklı mı)
<  	Küçük mü
<=	Küçük VEYA Eşit mi
>	Büyük mü
>=	Büyük VEYA Eşit mi

Koşul Bağlaçları

!	Not (Değil)
&&	And (Ve)
||	Or	(Veya)


Bir koşul içerisinde her üç durumda var ise, yukarıdaki sıra ile öncelik verilir.


ÖNEMLİ
	0 Her zaman HAYIR anlamına gelir.
	0'dan farklı tüm sayılar her zaman evet anlamına gelir.

*/

/*
int a=123;

if (a) k=0;
else k=1;

yukarıdaki önreğin kullanımını pek tercih etmesemde böyle kodlar ile karşılaşacaksınız.
if (a) ifadesi herhangi birşey sormuyor.... a bilmöem kaçtan büyük mü küçük mü diye sormuyor.
direkt olarak a verilmiş. a kaç 123 o zaman bu işlemin sonucu EVET anlamına gelir ve k=0 işlemi gerçekleştirilir.

*/
 
/* 
 
 int main()
 {
	int x=2345;
	int k=43;
	
	if (x){
		k=0;
	}
	else{
		k=1;
	}
	
	cout << "k = " << k << endl;
	return 0;
	 
 }
 // Ekran Çıktısı
 k = 0;
 
 */
 
 