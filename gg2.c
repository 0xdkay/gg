#include <stdio.h>


int main(){
	int n,i;
	printf("This program will show your input nubmer's times table\n");
	printf("input the number: ");
	scanf("%d", &n);
	for(i=1; i<10; i++){
		printf("%d * %i = %d\n", n, i, n*i);
	}
}

