#include <stdio.h>
#include <windows.h>
void menu()
{
	printf("***********************************************\n");
	printf("****** 1.>>>>>进行游戏   0.>>>>> 退出游戏******\n");
	printf("***********************************************\n");
}
void text()
{
	int num=0;
	
	do
	{
		menu();
		printf("请选择:>>>");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			break;
		case 0:
			break;
		default:
			printf(">>>>>>>>>>>>无法识别:%d", num);
			break;
		}
	} while (num);
	
	
}
int main()
{
	test();
	return 0;
}