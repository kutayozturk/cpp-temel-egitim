// DİZİ ÖRNEK-1

// Kullanıcıdan dizinin elemanlarını alan program
#include <iostream>
using namespace std;

int main(){

	int d[100]; // maks yüz elemanlı d dizisi
	int n=5;
	for (int i=0;i<n;i++){
		cout << "d[" << i+1 << "]=";
        cin >> d[i];
    }
}


