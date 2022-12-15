/* do-while döngüsü
aslında temel olarak while döngüsü ile aynıdır ve aynı şekilde düşünebiliriz.
ANCAK en belirgin farkı:
ŞART'A BAKILMAKSIZIN BİR KERE ÇALIŞMASIDIR ve sonra şart kontrolünün yapılmasıdır.
Gelin do-while döngüsünün yazım kuralına bir bakalım.

do {
	
	işlemler
	
}

while(KOŞUL);

HATIRLATMA: Bir program her zaman yukarıdan aşağıya çalışır.
Bu durumda önce "işlemler" yapılır ve sonra KOŞUL kontrol edilmiş olur.

Bir örnek yapalım.
*/


int n=0;
do {
	
	cout << n << "\n";
	n--; //-1 -2 -3 ...
}
while(n > 0);
	
/*
yukarıdaki örnekte "n" değeri "0"'dır.
printf komutu çalışır ve ekrana "n" değeri yazdırılır.
sonra koşul'a bakılır ve döngüder çıkar.

NOT:
	Eğer koşul doğru ise döngü devam eder.
	Eğer koşul yanlış ise döngüden çıkılır.
*/

/*do-while döngüsünün genel kullanım alanı

Yazmış olduğunuz program parçacıklarını yada programın tümünü
test etmeye ihtiyaç duyduduğunuz noktada, do-while döngüsü
imdadımıza yetişir.

HATIRLAYIM
	true (Doğru) yani 1 değeridir.
	false (Yanlış) yani 0 değeridir.
	
	NOT: 0 haricinde girilen tüm değerler (rakamlar) 1 anlamı taşırlar.
		 Yani true anlamına gelir.
		 
Yazdığımız kod bloğunu test etmek istediğimizde

    do{
		
        işlemler (ilgili kod parçası)
		
    }
    while(1); 

ÖNEMLİ NOT: Bu kullanım döngümüzü SONSUZ DÖNGÜYE sokacaktır.
