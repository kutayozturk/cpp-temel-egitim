/* FONKİSYIONLAR
	Bilgisayar programlama dillerinde bir veya birden çok eylemi
	gerçekleştirmek için yazılan ve ana programa parametre ve
	fonksiyon dönüş değeri ile bağlı olan alt programdır.

Fonksiyonlar modüler program yazmak için kullandığımız bir yöntemdir.
Bu yöntem ile sorunları küçültmüş oluruz, aynı kod parçasını
lazım olan noktalarda çağırarak, işlem yaptırabiliriz.

İki türlü fonksiyon vardır.
1. Adıyla geriye değer gönderen fonksiyonlar (retrun eden)
2. Adıyla geriye değer göndermeyen fonksiyonlar (void fonksiyonlar)

1. Adıyla geriye değer retrun eden fonksiyonlar
	
	veritip1 fonksiyonadi (veritipi2 parametreadi1, ....) {
		yerel tanımlar (sadece bu fonksiyon için geçerli)
		komutlar
		EN AZ BİR TANE RETURN 
			(if else durumuna göre birden fazla
			farklı değer döndürülebilir.)
			
			NOT: Geriye bir tane return dönecektir ama
			kod içersinden birden fazal return kullanabilirim.
	}

	return: Üretilen değeri çağıran yere geri gönderdirir.
	NOR: Çağıran yer: main fonksiyon çağırdığı gibi, başka bir fonksiyonda
	yine bir fonksiyon çağırabilir.
	

*/

	veritipi1: fonksiyonun üreteceği sonucun veri tipidir.
	fonksiyonadi: çağırma aşamasında kullanılan isim
	veritipi2: parametredeki değişkenin veri tipidir
	parametreadi: fonksiyonun çalışması için gereken değerleri KARŞILAYAN değişkenlerdir.+
	
	BU FONKSİYONLARIN ÇAĞRILIŞI
	
	Adıyla geriye değer gönderen fonksiyonlar,
	ancak ve ancak bir başka komutun içinden çağrılırlar.
	
	Örneğin;
		double sonuc = sqrt (9);
		
	Örnekler:
	1. bir sayının faktöryelini bulan...
	2. bir sayının asal olup olmadığını bulan...
	3. n elemanlı bir dizinin ortalamasını bulan...
	
	Yanlış Örnekler:
	1. ikinci dereceden denklemin köklerini bulan...
	2. Ekrana "Naber" yazan...
	3. Bir dizinin en küçük değerini ve indisini bulan...
	