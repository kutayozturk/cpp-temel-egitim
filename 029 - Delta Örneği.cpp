#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	// SORU: ax^2+bx+c=0 denklem köklerini bulan program
	// NOT: Delta Formulü: b^2-4ac
	
	int a,b,c;
	
	cout << "a b c katsayilarini giriniz: ";
	cin >> a >> b >> c;
	
	int delta = pow(b,2) - 4 * a * c; //pow(b,2) ifadesi b*b'dir yani b kare
	
	if (delta<0) cout << "Gercek kok yoktur" << endl;
	else if(delta==0){
		doube x = -b / (2*a);
		cout << "Tek kok var ve x = " << x << endl;		
	}
	else{
		//iki kok varmis
		double x1 = (-b + sqrt(delta)) / (2*a);
		double x1 = (-b - sqrt(delta)) / (2*a);
		cout << "x1 = " << x1 << "    x2 = " << x2 << endl;
	}
	
	
	
	
}	

/*
4 5 6 gerçek kök yoktur
1 4 -2 iki kökü vardır
1 4 4 tek kök vardır
*/