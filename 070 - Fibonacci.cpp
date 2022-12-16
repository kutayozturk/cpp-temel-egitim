#include <stdio.h>

    //fibonacci sayıları oluşturma

    /*Fibonacci dizisi: her sayının kendinden önceki ile toplanması sonucu oluşan bir sayı dizisidir.
      Fibonacci dizisi 1 rakamı ile başlamak zorunda değildir. Herhangi bir rakam ile başlayabilir.
    */

void fibonacci(int N);

int main(void){
	int N;
	printf("Terim sayisi");
	scanf("%d",&N);
	fibonacci(N);
	return 0;
}

void fibonacci(int N){
	int i,T1=1,T2=1,T3;
	printf("%d\t%d\t",T1,T2);
	for(i=1;i<=N-2;i++){
		T3=T1+T2;
		printf("%d\t",T3);
		T1=T2;
		T2=T3;
	}
}
