/*	MANTIKSAL OPERATÖRLER
 
 != eşit değildir;
 || veya operatörü
 && ve operatörü
 <= küçük eşit operatörü
 >= büyük eşit operatörü
 ==  eşittir operatörü
 +  toplama operatörü
 -  çıkarma operatörü
 *  çarpma operatörü
 /  bölme operatörü
 %  mod alma operatörü. Bu ifadeye daha sonra değineceğiz.
 
*/
 
 int a,b;
 int toplam;
 
 toplam = a+b;
 
 ifadesi yazılabildiği gibi, toplam değişkeni oluşturulmadan, a ve b'yi toplamak ve sonucu b değişkenine 
 atamak istiyorsak.
 
 b = a + b;
 
 YADA
 
 b+=a;
 
 ifadesini kullanırız.
 
/*
 NOT:
	+=	-=	*=	/=	%= ifadeleride kullanılırlar.
	x /= 10; ifadesi x'i 10'a böl ve x'e eşitle anlamına gelir.
*/
 
 Bir arttır bir azalt işleçleri
 
	++	--
	Önemli: Değişken adının SOLUNDA ise ÖNCELİKLİDİR.
	ÖRNEK
	
	int a=5;
	
	a++;
	++a;
	
	yukarıda iki ifadede aynı işi yapar.
	
	int t;
	t = a++; işleminde ÖNCE t = a; 	SONRA a++ çalışır.
	
	AÇIKLAYALIM
	
		++i		i'yi bir arttır ve devam et demektir.

		i++		Eğer i üzerinde bir işlem varsa onu i üzerinden yap o işlem bittikten sonra i'yi bir arttır demektir.

		cout << ++i ile cout << i++ farklıdır.

		cout << ++i		örnek i=1 ise ekrana 2 yazar ve artık i değeri 2dir.
		cout << i++		ekrana 1 yazar ve artık i değeri 2dir.