#define _CRT_SECURE_NO_WARNINGS 1


#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct JC_type
{
	int pid;
	int youxian;
	int daxiao;
	int msg;
	int live;
};
struct JC_type neicun[20];
struct JC_type waicun[20];
int shumu = 0;
int pid = 1;
int waicunnuber = 0;
int create()
{
	printf("正在创建进程\n");
	if (shumu > 20)
	{
		printf("\n 请先结束或换出进程\n");
	}
	else
	{
		printf("请输入新的进程pid :\n");
		scanf("%d", &neicun[shumu].pid);
		printf("请输入新的进程优先级 :\n");
		scanf("%d", &neicun[shumu].youxian);
		printf("请输入新的进程大小:\n");
		scanf("%d", &neicun[shumu].daxiao);
		printf("请输入新的进程消息 :");
		scanf("%d", &neicun[shumu].msg);
	}
	neicun[shumu].live = 0;
	shumu++;
	return 0;
}
void viewrun()
{
	int vpid;
	int i;
	printf("正在查看进程\n");
	printf("\n 请输入进程的pid\n");
	scanf("%d", &vpid);
	if (vpid >= 0)
	{
		for (i = 0; i < 20; i++)
		{
			if (vpid == neicun[i].pid)
			{
				printf("进程的pid是%d\n", neicun[i].pid);
				printf("进程的优先级是%d\n", neicun[i].youxian);
				printf("进程的大小是%d\n", neicun[i].daxiao);
				printf("进程的消息是%d\n", neicun[i].msg);
				printf("进程的状态是%d\n", neicun[i].live);
				break;
			}
		}
	}
	else
	{
		printf("\n 所查看的进程不存在 \n");
	}
	printf("\n 请按回车退出查看\n");
}
void huanchu()
{
	int pid1 = -1;
	int pid2 = -1;
	int pid11, pid22;
	int i;
	char c;
	printf("正在换出进程\n");
	printf("\n 请输入要换出的进程的pid：\n");
	scanf("%d", &pid11);
	printf("\n 请输入要换入的进程的pid：\n");
	scanf("%d", &pid22);
	for (i = 0; i < 20; i++)
	{
		if (pid11 == neicun[i].pid)
		{
			pid1 = i;
			break;
		}
	}
	for (i = 0; i < 20; i++)
	{
		if (pid22 == neicun[i].pid)
		{
			pid2 = i;
			break;
		}
	}
	if (pid1 >= 0 && pid1 < 20)
	{
		neicun[pid1].live = -1;
		neicun[pid2].live = 0;
		waicun[19].pid = neicun[pid1].pid;
		waicun[19].youxian = neicun[pid1].youxian;
		waicun[19].daxiao = neicun[pid1].daxiao;
		waicun[19].msg = neicun[pid1].msg;
		waicun[19].live = neicun[pid1].live;
		printf("*****\n");
		neicun[pid1].pid = neicun[pid2].pid;
		neicun[pid1].youxian = neicun[pid2].youxian;
		neicun[pid1].daxiao = neicun[pid2].daxiao;
		neicun[pid1].msg = neicun[pid2].msg;
		neicun[pid1].live = neicun[pid2].live;
		neicun[pid2].pid = waicun[19].pid;
		neicun[pid2].youxian = waicun[19].youxian;
		neicun[pid2].daxiao = waicun[19].daxiao;
		neicun[pid2].msg = waicun[19].msg;
		neicun[pid2].live = waicun[19].live;
		printf("换出的进程的pid是%d\n", waicun[19].pid);
		printf("换出的进程的优先级是%d\n", waicun[19].youxian);
		printf("换出的进程的大小是%d\n", waicun[19].daxiao);
		printf("换出的进程的消息是%d\n", waicun[19].msg);
	}
	else
	{
		printf("要换出的进程不存在。\n");
	}
	printf("请输入回车键 退出换出作业。\n");
}
void kill()
{
	int kpid;
	int i;
	char c;
	printf("正在杀死进程\n");
	printf("\n 请输入的进程的pid：\n");
	scanf("%d", &kpid);
	if (kpid >= 0 && kpid < 20)
	{
		for (i = 0; i < 20; i++)
		{
			if (kpid == neicun[i].pid)
			{
				neicun[i].live = -1;
				printf("杀死成功\n");
				break;
			}
		}
		printf("杀死成功\n");
	}
	else
	{
		printf("\n 没有该进程\n");
	}
	printf("请输入回车键 退出换出作业。\n");
}
void tongxin()
{
	int buffer;
	int tpid1 = -1;
	int tpid2 = -1;
	int tpid11, tpid22;
	int i;
	char c;
	printf("正在通信进程\n");
	printf("\n 请输入通信源的进程的pid：\n");
	scanf("%d", &tpid11);
	printf("\n 请输入通信目的的进程的pid：\n");
	scanf("%d", &tpid22);
	for (i = 0; i < 20; i++)
	{
		if (tpid11 == neicun[i].pid)
		{
			tpid1 = i;
			break;
		}
	}
	for (i = 0; i < 20; i++)
	{
		if (tpid22 == neicun[i].pid)
		{
			tpid2 = i;
			break;
		}
	}
	if (tpid1 >= 0 && tpid1 < 20 && neicun[tpid1].live == 1)
	{
		buffer = neicun[tpid1].msg;
		neicun[tpid1].msg = neicun[tpid2].msg;
		neicun[tpid2].msg = buffer;
		printf("\n 通信源的进程的消息是：%d\n", neicun[tpid2].msg);
		printf("\n 通信目的的进程的消息是：%d\n", neicun[tpid1].msg);
	}
	else("\n所查看的进程不存在。\n");
	printf("请输入回车键 退出换出作业。\n");
}
int main()
{
	int m = 0;
	int	n = 1;
	int	i = 0;
	char a = '0';
	int maxyouxian = 21;
	int maxi = -1;
	struct JC_type max = 0;
	for (i = 0; i < 20; i++)
	{
		neicun[i].live = -1;
	}
	while (n == 1) {
		system("cls");
		printf("***********************************");
		printf("\n          进程演示系统           ");
		printf("\n***********************************");
		printf("\n 1 创建进程      2查看进程   ");
		printf("\n 3 换出某个进程  4杀死进程   ");
		printf("\n 5 进程之间通信  6退出           ");
		printf("\n***********************************");
		printf("\n 请选择(1~6)");
		switch (a)
		{
		case'1':
			create();
			break;
		case'2':
			viewrun();
			break;
		case'3':
			huanchu();
			break;
		case'4':
			kill();
			break;
		case'5':
			tongxin();
			break;
		case'6':
			exit(0);
			break;
		default:
			n = 0;
		}
		maxi = -1;
		maxyouxian = 21;
		for (i = 0; i < 20; i++)
		{
			if (maxyouxian > neicun[i].youxian && neicun[i].live == 0)
			{
				maxi = i;
				maxyouxian = neicun[i].youxian;
			}
		}
		if (maxi != -1)
		{
			neicun[maxi].live = 1;
		}
	}
	system("pause");
	return 0;
}