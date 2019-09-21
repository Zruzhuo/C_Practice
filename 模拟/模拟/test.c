 #define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<malloc.h>
//////
//////自定义结构体
////
//////struct Student
//////{
////	//char _name[20];
////	//int _age;
////	//char _tel[15];//这些不是定义（开了空间），而是声明（没开空间）,不能赋值
//////}stu3//结构体变量,stu4[20]//结构体数组,*stu5//结构体指针;
////int main()
////{
////	struct Student stu1;
////	struct Student stu2;//定义结构体变量stu1和stu2
////	//stu1._name = "peter";错误
////	strcpy(stu1._name, "peter");
////	stu1._age = 18;
////	strcpy(stu1._tel, "111111");
////	memcpy(&stu2, &stu1, sizeof(struct Student));
////
////	system("pause");
////	return 0;
////}
////#include<stdio.h>
////#include<stdlib.h>
////void test()
////{
////	printf("*************************\n");
////	printf("  1:add           2:sub  \n");
////	printf("  3:mul           4:div  \n");
////	printf("*************************\n");
////}
////int main()
////{
////	void(*p)() = test;
////	printf("%p\n", &test);
////	printf("%p", p);
////	system("pause");
////	return 0;
////}
////#define _CRT_SECURE_NO_WARNINGS 1
////
////#include<stdio.h>
////#include<stdlib.h>
////void menu()
////{
////	printf("*************************\n");
////	printf("  1:add           2:sub  \n");
////	printf("  3:mul           4:div  \n");
////	printf("*************************\n");
////}
////int _add(int a, int b)
////{
////	return a + b;
////}
////int _sub(int a, int b)
////{
////	return a - b;
////}
////int _mul(int a, int b)
////{
////	return a * b;
////}
////int _div(int a, int b)
////{
////	return a / b;
////}
////int main()
////{
////	int a = 0, b = 0;
////	int input = 0;
////	int ret = 0;
////	int(*p[5])() = { 0, _add, _sub, _mul, _div };
////	while (1)
////	{
////		menu();
////		printf("请选择：>");
////		scanf("%d", &input);
////		if (input <= 4 && input >= 1)
////		{
////			printf("请输入操作数：>");
////			scanf("%d%d", &a, &b);
////			ret = (*p[input])(a, b);
////		}
////		else
////		{
////			printf("输入有误！\n");
////		}
////		printf("ret = %d\n", ret);
////	}
////	system("pause");
////	return 0;
////}
////void test(const char* str)
////{
////	printf("%s\n",str);
////}
////int main()
////{
////	void(*p)(const char* str);//函数指针
////	void(*pa[4])(const char* str);//函数指针数组
////	void(*(*paa)[4])(const char* str);//指向函数指针数组的指针
////	p = &test;
//// 	pa[0] = p;
////	paa = &pa;
////	return 0;
////}
////#include <stdio.h>
////#include<stdlib.h>
////
////int int_cmp(const void * p1, const void * p2) 
////{ 
////	return (*( int *)p1 > *(int *) p2); 
////}
//// 
////void swap(void *p1, void * p2, int size) 
////{ 
////	int i = 0;
////	for (i = 0; i < size; i++)
////	{
////		char tmp = *((char *)p1 + i);
////		*((char *)p1 + i) = *((char *)p2 + i);
////		*((char *)p2 + i) = tmp;
////	}
////}
//// 
////void bubble(void* arr, int count , int size, int(*cmp)(void *, void *)) 
////{ 
////	int i = 0;
////	int j = 0;
////	for (i = 0; i < count - 1; i++)
////	{
////		for (j = 0; j < count - i - 1; j++)
////		{
////			if (cmp((char *)arr + j * size, (char *)arr + (j + 1)*size) > 0)
////			{
////				swap((char *)arr + j * size, (char *)arr + (j + 1)*size, size);
////			}
////		}
////	}
////} 
////int main()
////{
////	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
////	int i = 0;
////	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
////	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	printf("\n");
////	system("pause");
////	return 0;
////}
//#include<conio.h>
//#include<stdio.h>
//#include<stdlib.h>
//struct JC_type
//{
//	int pid;
//	int youxian;
//	int daxiao;
//	int msg;
//	int live;
//};
//struct JC_type neicun[20];
//struct JC_type waicun[20];
//int shumu = 0;
//int pid = 1;
//int waicunnuber = 0;
//int create()
//{
//	printf("正在创建进程\n");
//	if (shumu > 20)
//	{
//		printf("\n 请先结束或换出进程\n");
//	}
//	else 
//	{
//		printf("请输入新的进程pid :\n");
//		scanf("%d", &neicun[shumu].pid);
//		printf("请输入新的进程优先级 :\n");
//		scanf("%d", &neicun[shumu].youxian);
//		printf("请输入新的进程大小:\n");
//		scanf("%d", &neicun[shumu].daxiao);
//		printf("请输入新的进程消息 :");
//		scanf("%d", &neicun[shumu].msg);
//	}
//	neicun[shumu].live = 0;
//	shumu++;
//	return 0;
//}
//void viewrun()
//{
//	int vpid;
//	int i;
//	printf("正在查看进程\n");
//	printf("\n 请输入进程的pid\n");
//	scanf("%d", &vpid);
//	if (vpid >= 0)
//	{
//		for (i = 0; i < 20; i++)
//		{
//			if (vpid == neicun[i].pid)
//			{
//				printf("进程的pid是%d\n", neicun[i].pid);
//				printf("进程的优先级是%d\n", neicun[i].youxian);
//				printf("进程的大小是%d\n", neicun[i].daxiao);
//				printf("进程的消息是%d\n", neicun[i].msg);
//				printf("进程的状态是%d\n", neicun[i].live);
//				break;
//			}
//		}
//	}
//	else
//	{
//		printf("\n 所查看的进程不存在 \n");
//	}
//	printf("\n 请按回车退出查看\n");
//	vpid = getch();
//}
//void huanchu()
//{
//	int pid1 = -1;
//	int pid2 = -1;
//	int pid11, pid22;
//	int i;
//	char c;
//	printf("正在换出进程\n");
//	printf("\n 请输入要换出的进程的pid：\n");
//	scanf("%d", &pid11);
//	printf("\n 请输入要换入的进程的pid：\n");
//	scanf("%d", &pid22);
//	for (i = 0; i < 20; i++)
//	{
//		if (pid11 == neicun[i].pid)
//		{
//			pid1 = i;
//			break;
//		}
//	}
//	for (i = 0; i < 20; i++)
//	{
//		if (pid22 == neicun[i].pid)
//		{
//			pid2 = i;
//			break;
//		}
//	}
//	if (pid1 >= 0 && pid1 < 20) 
//	{
//		neicun[pid1].live = -1;
//		neicun[pid2].live = 0;
//		waicun[19].pid = neicun[pid1].pid;
//		waicun[19].youxian = neicun[pid1].youxian;
//		waicun[19].daxiao = neicun[pid1].daxiao;
//		waicun[19].msg = neicun[pid1].msg;
//		waicun[19].live = neicun[pid1].live;
//		printf("*****\n");
//		neicun[pid1].pid = neicun[pid2].pid;
//		neicun[pid1].youxian = neicun[pid2].youxian;
//		neicun[pid1].daxiao = neicun[pid2].daxiao;
//		neicun[pid1].msg = neicun[pid2].msg;
//		neicun[pid1].live = neicun[pid2].live;
//		neicun[pid2].pid = waicun[19].pid;
//		neicun[pid2].youxian = waicun[19].youxian;
//		neicun[pid2].daxiao = waicun[19].daxiao;
//		neicun[pid2].msg = waicun[19].msg;
//		neicun[pid2].live = waicun[19].live;
//		printf("换出的进程的pid是%d\n", waicun[19].pid);
//		printf("换出的进程的优先级是%d\n", waicun[19].youxian);
//		printf("换出的进程的大小是%d\n", waicun[19].daxiao);
//		printf("换出的进程的消息是%d\n", waicun[19].msg);
//	}
//	else
//	{
//		printf("要换出的进程不存在。\n");
//	}
//	printf("请输入回车键 退出换出作业。\n");
//	c = getch();
//}
//void kill() 
//{
//	int kpid;
//	int i;
//	char c;
//	printf("正在杀死进程\n");
//	printf("\n 请输入的进程的pid：\n");
//	scanf("%d", &kpid);
//	if (kpid >= 0 && kpid < 20)
//	{
//		for (i = 0; i < 20; i++)
//		{
//			if (kpid == neicun[i].pid)
//			{
//				neicun[i].live = -1;
//				printf("杀死成功\n");
//				break;
//			}
//		}
//		printf("杀死成功\n");
//	}
//	else 
//	{ 
//		printf("\n 没有该进程\n"); 
//	}
//	printf("请输入回车键 退出换出作业。\n");
//	c = getch();
//}
//void tongxin()
//{
//	int buffer;
//	int tpid1 = -1;
//	int tpid2 = -1;
//	int tpid11, tpid22;
//	int i;
//	char c;
//	printf("正在通信进程\n");
//	printf("\n 请输入通信源的进程的pid：\n");
//	scanf("%d", &tpid11);
//	printf("\n 请输入通信目的的进程的pid：\n");
//	scanf("%d", &tpid22);
//	for (i = 0; i < 20; i++)
//	{
//		if (tpid11 == neicun[i].pid)
//		{
//			tpid1 = i;
//			break;
//		}
//	}
//	for (i = 0; i < 20; i++)
//	{
//		if (tpid22 == neicun[i].pid)
//		{
//			tpid2 = i;
//			break;
//		}
//	}
//	if (tpid1 >= 0 && tpid1 < 20 && neicun[tpid1].live == 1)
//	{
//		buffer = neicun[tpid1].msg;
//		neicun[tpid1].msg = neicun[tpid2].msg;
//		neicun[tpid2].msg = buffer;
//		printf("\n 通信源的进程的消息是：%d\n", neicun[tpid2].msg);
//		printf("\n 通信目的的进程的消息是：%d\n", neicun[tpid1].msg);
//	}
//	else("\n所查看的进程不存在。\n");
//	printf("请输入回车键 退出换出作业。\n");
//	c = getch();
//}
//int main()
//{
//	int m, n, i;
//	char a;
//	n = 1;
//	int maxyouxian = 21;
//	int maxi = -1;
//	struct JC_type max;
//	for (i = 0; i < 20; i++)
//	{
//		neicun[i].live = -1;
//	}
//	while (n == 1) {
//		system("cls");
//		printf("***********************************");
//		printf("\n          进程演示系统           ");
//		printf("\n***********************************");
//		printf("\n 1 创建进程      2查看进程   ");
//		printf("\n 3 换出某个进程  4杀死进程   ");
//		printf("\n 5 进程之间通信  6退出           ");
//		printf("\n***********************************");
//		printf("\n 请选择(1~6)");
//		a = getch();
//		switch (a)
//		{
//		case'1':
//			create();
//			break;
//		case'2':
//			viewrun();
//			break;
//		case'3':
//			huanchu(); 
//			break;
//		case'4':
//			kill(); 
//			break;
//		case'5':
//			tongxin(); 
//			break;
//		case'6':
//			exit(0);
//			break;
//		default:
//			n = 0;
//		}
//		maxi = -1;
//		maxyouxian = 21;
//		for (i = 0; i < 20; i++)
//		{
//			if (maxyouxian > neicun[i].youxian && neicun[i].live == 0)
//			{
//				maxi = i;
//				maxyouxian = neicun[i].youxian;
//			}
//		}
//		if (maxi != -1)
//		{
//			neicun[maxi].live = 1;
//		}
//	}
//	system("pause");
//	return 0;
//}


//struct ListNode {
//    int val;
//    struct ListNode *next;
//};
// 
//
//
//struct ListNode* removeElements(struct ListNode* head, int val) {
//	assert(head);
//	struct ListNode* ser = head;
//	struct ListNode* cur = head;
//	while (cur != NULL)
//	{
//		if (cur->val == val)
//		{
//			if (ser == cur)
//			{
//				head = cur->next;
//			}
//			ser = cur;
//			cur = cur->next;
//			free(ser);
//		}
//		else
//		{
//			cur = cur->next;
//		}
//	}
//	return head;
//}
//int main()
//{
//
//	system("pause");
//	return 0;
//}
//bool hasCycle(ListNode* head)
//{
//	ListNode* slow = head;
//	ListNode* fast = head;
//	while (fast && fast -> next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast)
//		{
//			return true;
//		}
//	}
//	return false;
//}
/*
判断是否带环？
在这里快慢指针只能一个指针走一步，一个指针走两步，因为这样slow和fast的距离差是以
k - 1的速率减少的，那么slow和fast走下去必定相等，而以k - 2或者更大的速率减少时
slow和fast可能会错过，造成一直在环内循环。
求环的长度？
求环的入口？
*/



/*
复杂链表的拷贝
1.拷贝插入节点   2.置random      3.拆解-链接 
*/

//void QueuePop(Queue* pq)
//{
//	assert(pq && pq->_front != NULL);
//	QueueNode* next = pq->_front->_next;
//	free(pq->_front);
//	pq->_front = next;
//	if (pq->_front == NULL)
//	{
//		pq->tail = NULL;
//	}
//}
//
//void minStackPush(minStack* obj, int x)
//{
//	assert(obj);
//	minStack* s = (minStack*)malloc(sizeof(minStack));
//	s->st = x;
//}
//void myCircularQueueDeQueue(MyCircularQueue* obj)
//{
//	assert(obj);
//	if (myCircularQueueFull(obj))
//	{
//		return false;
//	}
//
//}

//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	double a[2][3] = {1, 2, 3, 4, 5, 6};
//	int b[3] = { 1, 2, 3};
//	printf("%p\n", a[0]);
//	printf("%p\n", a[0] + 1);
//	system("pause");
//	return 0;
//}
/*int numJewelsInStones(char * J, char * S) {
	int count = 0;
	int i = 0;
	int j = 0;
	for (; &J[i] != NULL; i++)
	{
		for (; &S[j] != NULL; j++)
		{
			if (J[i] == S[j])
			{
				count++;
			}
		}
		if (j > 50)
		{
			return 0;
		}
	}
	if (i > 50)
	{
		return 0;
	}
	return count;
}
int main()
{
	char* J = "aA";
	char* S = "aAAbbbb";
	printf("%d",numJewelsInStones(J, S));
	system("pause");
}

      */   
//#include<stdio.h>
//
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//	//&i为int*，然后将其强转为char*,然后再解引用，这时会发生截断，因为解引用后是个char类型，所以截取了后8位，然后整形提升为int进行返回
//}
//int main()
//{
//	int ret = check_sys();
//	(ret == 1) ? (printf("小端\n")) : (printf("大端\n"));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	const char arr1[4] = "abcd";
//	char* arr = (char*)malloc(sizeof(char) * 3);
//	strcpy(arr, arr1);
//	printf("%s", *arr);
//	system("pause");
//	return 0;
//}
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	char* str1 = str;
//	size_t len = 0;
//	while (*str1 != '\0')
//	{
//		++len;
//		++str1;
//	}
//	return len;
//}
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	char* str1 = str;
//	while (*str != '\0')
//	{
//		++str;
//	}
//	return str - str1;
//}
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* str = str1;
//	while (*str2 != '\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = '\0';
//	return str;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* str = dest;
//	while (*dest++ = *src++);
//	return str;
//}
//int main()
//{
//	char arr1[6] = "abcde";
//	char arr2[6] = "12345";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	printf("%s", arr2);
//	//printf("%d", my_strlen(arr1));
//	system("pause");
//	return 0;
//}
int Binary_Search(int* arr, int x, int len)
{
	int left, mid, right;
	left = 0;
	right = len - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (x < arr[mid])
		{
			right = mid - 1;
		}
		else if (x > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[5] = { 0,1,2,3,4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d", Binary_Search(arr, 5, len));
	system("pause");
	return 0;
}