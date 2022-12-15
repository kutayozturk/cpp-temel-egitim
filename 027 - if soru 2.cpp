/* İF SORUSU

Soru: Çekilecek para miktarını girsin. 5'in katı değilse uyarı versin.

int cpm; //cpm: Çekilecek Para Miktarı
cout << "Cekilecek tutari giriniz: ";
cin >> cpm;

if(cpm%5 != 0)
	cout << "Para miktarı 5 ve 5'in katı olmalıdır" << endl;

else{
	
	// kaç tane 200, kaç tane 100 .... kaç tane 5 TL
	int a200 = cmp/200;
	cpm -= a200 * 200; // cpm = cpm - a200 * 200;
	
	int a100 = cmp/100;
	cpm = cpm - a100 * 100;
	
	int a50 = cmp/50;
	cpm = cpm - a50 * 50;
	
	int a20 = cmp/20;
	cpm = cpm - a20 * 20;
	
	int a10 = cmp/10;
	cpm = cpm - a10 * 10;
	
	
	// cpm'de en son 5 TL miktarı kaldı
	
	cout << "200 TL'lik " << a200 << "adet << endl;
	cout << "100 TL'lik " << a100 << "adet << endl;
	cout << "50 TL'lik " << a50 << "adet << endl;
	cout << "20 TL'lik " << a20 << "adet << endl;
	cout << "10 TL'lik " << a10 << "adet << endl;
	cout << "5 TL'lik " << cpm/5 << "adet << endl;

}