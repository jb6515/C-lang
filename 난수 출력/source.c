#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a = 0;

	srand(time(NULL)); // srand�Լ��� �õ带 ����ð�(time(NULL))�� ����
	for (;;)
	{
		printf("%d\n", rand() % 6 + 1); //1~6���� ������ ���� ���
		getch();
	}


	return 0;

}