// 1. satırda 5, 2. satırda 4 ... olacak şekilde yıldız yazdır

#include <iostream>
using namespace std;

int main(){

	int i,j;
	for (i=1;i<=5;i++){
		for (j=5;j>=i;j--){
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
