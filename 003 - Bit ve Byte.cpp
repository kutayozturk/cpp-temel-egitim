Bit ve Byte Kavramları

Bilgisayarda veriler 0 ve 1'ler halindedir.
Bu 0 ve 1'lerin her birine Bit adı verilir.

veri olarak bit çok küçük bir birimdir.
8 bit yanyana geldiğinde ise Byte oluşur.

ÖRNEK:
	1 1 1 0 1 0 1 1 (8 Bit yani Byte) bu değeri 10'luk sisteme çevirelim.
	
	Dönüşüm işlemi
	
		1 * 2^0 = 1
		1 * 2^1 = 2
		1 * 2^2 = 0
		1 * 2^3 = 8
		1 * 2^4 = 0
		1 * 2^5 = 32
		1 * 2^6 = 64
		1 * 2^7 = 128
						+	
	---------------------
	Hepisinin Toplamı: 235	
	
	
	0 0 0 0 0 0 0 0 = 0
	1 1 1 1 1 1 1 1 = 255
	
	Byte içinde sığdırabildiğimiz en küçük değerin 0, en büyük değerin 255 olduğunu görürüz.
	
	// ÖNEMLİ NOT
		8 bitten oluşan 1 byte'nin ilk değeri bize sayının işaretini söyler.
			
			0 : Pozitif
			1 : Negatif
			
		anlamına gelir.
		
		0 1 2 3 4 5 6 7 : Burada 0'ıncı alana tekabül eden değer sayının Pozitif olduğunu bize söylüyor
		1 0 0 1 0 1 1 1
		
		NOT
			Signed hem pozitif hemde negatif değerler barındıran tiptir.
			Unsigned ise sadece 0 ile alabildiği maksimum pozitif değer barındıran tiptir.
		
	
O ZAMAN İNCELEYELİM

	Byte		:	   8 Bit
	Kilobyte	:	1024 Byte
	Megabyte	:	1024 KB
	Gigabyte	:	1024 MB
	Terabyte	: 	1024 GB
	Petabyte	:	1024 TB
	Exabyte		:	1024 PB
	
/*		EV ÇALIŞMASI

	2'lik taban ve 10'luk taban dönüşümlerine çalışınız.
	Diğer dönüşümlere göz atınız.
*/

