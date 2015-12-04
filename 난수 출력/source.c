#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a = 0;

	srand(time(NULL)); // srand함수의 시드를 현재시간(time(NULL))로 설정
	for (;;)
	{
		printf("%d\n", rand() % 6 + 1); //1~6범위 내에서 난수 출력
		getch();
	}


	return 0;

}