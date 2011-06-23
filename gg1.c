#include <stdio.h>

int main(){
	int n, m;
	printf("구구단 프로그램입니다.\n");
	printf("입력한 두 숫자의 곱이 출력됩니다.\n");
	printf("숫자를 입력해 주세요: ");
	scanf("%d %d", &n, &m);
	printf("두 숫자의 곱은 %d 입니다.", n*m);
	return 0;
}

