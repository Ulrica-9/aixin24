#include <stdio.h>
#include <windows.h>
void menu()
{
	printf("***********************************************\n");
	printf("****** 1.>>>>>������Ϸ   0.>>>>> �˳���Ϸ******\n");
	printf("***********************************************\n");
}
void text()
{
	int num=0;
	
	do
	{
		menu();
		printf("��ѡ��:>>>");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			break;
		case 0:
			break;
		default:
			printf(">>>>>>>>>>>>�޷�ʶ��:%d", num);
			break;
		}
	} while (num);
	
	
}
int main()
{
	test();
	return 0;
}