/* FOR DÖNGÜSÜ

	Başlangıcı belirli, bitiş koşulu belirli, periyodik artışı/azalışı
	belirli işlem(ler) topluluğunu yapan döngüdür.
	
	Genel Yazılışı
	
	for (döngü_başlangıç_değeri;devam_koşulu;artış_değeri){
		d_i_işlemler
	}
	
	Örnek Döngü
	
	for (int i=1; i<=5; i+=2){
		d_i_işlemler
	}
	
	Program Akışı for'a geldiğinde döngü değişkeni (i) başlangıç
	değerini alır (i=1 olur).
		NOT: int ifadesi sadece bu for döngüsü için tanımlanmıştır.
		Döngü bittiği zaman ram'den silinir.
	Doğrudan DEVAM KOŞULUNA (i<=5 mi) bakılır. 1<=5 olduğu için 
	döngü içine girilir. Döngü sonundan for'a geri DÖNÜLÜRKEN (dönme aşamasında)
	döngü değişkeninin değeri artış değeri kadar (i+=2) arttırılır ve i'nin yeni
	değeri 3 olur. 
	3<=5 olduğu için döngü içine girilir. Dönüşte i 2 arttırılır ve 5 olur.
	5<=5 olduğu için döngü içi işlemler yapılır. Döngü sonundan for'a dönülürlen
	i+=2 ile i değeri 7 olur. 7<=5 mi HAYIR olduğu için döngüden çıkılır ve program
	devam eder.
	
	NOT: Tüm döngüler için geçerli olmak üzere 
	break: En yakın döngüden çık demektir.
	continue: En yakın döngünün başına dön demektir.
			  Döngüyü başa sarmak anlamına gelmez.
			  Aradan bi yerden geri döndürmek gibi
			  düşünebiliriz.
*/
	
	