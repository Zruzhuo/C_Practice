//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//void Game()
//{
//	int num = 0;
//	int input = 0;
//	printf("*********** 游戏 开始 ***********\n");
//	srand((unsigned)time(NULL));
//	num = rand() % 100;
//	while (1)
//	{
//		printf("请输入你猜的数字：");
//		scanf("%d", &input);
//		if (input < num)
//		{
//			printf("你猜小了\n");
//		}
//		else 
//		{
//			if (input > num)
//			{
//				printf("你猜大了\n");
//			}
//			else
//			{
//				printf("恭喜你，猜对了！！！");
//				Sleep(1000);
//				break;
//			}
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("*********************************\n");
//	printf("******** 输入1：开始游戏 ********\n");
//	printf("******** 输入0：退出游戏 ********\n");
//	printf("*********************************\n");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//	{
//		Game();
//	}
//	case 0:
//	{
//		return 0;
//	}
//	default:
//	{
//		printf("选择错误");
//		break;
//	}
//	}
//	system("pause");
//	return 0;
//}