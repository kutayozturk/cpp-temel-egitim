// Fonksiyon Çeşitleri ve Fonksiyon Oluşturma

/*
- Değer döndürmeyen ve parametre almayan fonksiyonlar
Bu tip fonksiyonlar dışarıdan herhangi bir parametre almazlar ve çağrıldıkları yere geri değer döndürmezler. Ayrıca bu fonksiyonlara dışarıdan parametre gönderilemediği için genellikle sabit bir işleve sahip olurlar.

- Değer döndürmeyen ve parametre alan fonksiyonlar
Bu tip fonksiyonlar çağrıldıkları yere değer döndürmezler ama dışarıdan parametre alırlar.
*/

#include <stdio.h>

    //faktoriyel hesaplama

    //Fonksiyon prototipini main() fonksiyonundan önce yazmalıyız
    //ya da fonksiyonumuzu main() fonksiyonundan önce tanımlamalıyız

void faktoriyel(int n);
int main(void)
{
	int n;
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	faktoriyel(n);
	//Fonksiyonu çağırırken adını ve parantez içinde göndereceğimiz parametreyi tanımlıyoruz.
	return 0;
}

    //Fonksiyon prototipini tanımlama işlemi
    //donus_tipi fonk_adi(parametre(ler))
    //Bizim fonksiyonumuz değer döndürmeyen ve parametre almayan bir fonksiyon olduğu için
    //donus_tipi yerine void yani boş dedik
    //fonksiyon adımın faktoriyel
    //aldığı parametre ise n değeri
    
void faktoriyel(int n){
	int i,faktoriyel=1;
	for(i=2;i<=n;i++)
		faktoriyel*=i;
	printf("\n%d faktoriyel %d dir",n,faktoriyel);
}

/*
Yukarıda değindiğim gibi fonksiyonları kullanırken dikkat etmemiz gerekenler:

Fonksiyonu tanımlama : donus_tipi fonksiyon_adi(parametreler) şeklinde olmalıdır.
					Biz değer döndürmeyen ve parametre alan fonksiyonları incelediğimiz için donus_tipi yerine
					void yazdık parametre kısmına ise n değerini yazdık.
Fonksiyon çağırma: fonksiyonu çağırırken ise fonksiyon adımızı ve parantez içinde göndereceğimiz parametreyi yazdık.
Fonksiyon prototipi: Bu konuda ise dikkat etmemiz gereken husus prototipimiz main() fonksiyonundan önce tanımlamalıyız
					ya da fonksiyonumuzu main() fonksiyonundan önce yazmalıyız.
*/