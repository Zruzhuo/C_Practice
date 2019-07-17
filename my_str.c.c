#define _CRT_SECURE_NO_WARNINGS 1

#include<assert.h>
#include<stdio.h>
#include<stdlib.h>

char* my_strcpy(char* dest,const char* src)//�ַ�������
{
	assert((dest != NULL) && (src != NULL));
	char* str = dest;
	while ((*str++ = *src++) != '\0');
	return dest;
}

char* my_strcat(char* dest, const char* src)//�ַ�������
{	
	assert((dest != NULL) && (src != NULL));
	char* str = dest;
	while (*str)
	{
		str++;
	}
	while ((*str++ = *src++) != '\0');
	return dest;
}

char* my_strstr(const char* dest, const char* src)//�Ա��ַ���src�Ƿ��ǵ�dest���Ӵ�
{
	assert(dest && src);
	while (*dest)
	{
		const char* str1 = dest;
		const char* str2 = src;
		while (*str2 == *str1 && *str1)
		{
			++str1;
			++str2;
			if (*str2 == '\0')
			{
				return dest;
			}
		}
		dest++;
	}
	return NULL;
}

char* my_strchr(const char* dest, char c)//�����ַ���dest���״γ����ַ�c��λ��
{
	assert(dest != '\0');
	while ((*dest != '\0') && (*dest != c))
	{
		++dest;
	}
	return *dest == c ? dest : NULL;
}

int my_strcmp(const char* dest, const char* src)//�Ƚ������ַ�������ͬ����0��dest����src����������destС��src���ظ���
{
	assert(dest && src);
	while ((unsigned char*)*dest == (unsigned char*)*src)
	{
		if (*dest == '\0')
		{
			return 0;
		}
		dest++;
		src++;
	}
	return *dest - *src;
}

void* my_memcpy(void* dest, const void* src, size_t n)
{
	assert(dest && src);
	char* str1 = (char*)dest;
	char* str2 = (char*)src;
	while (n--)
	{
		*str1++ = *str2++;
	}
	return dest;
}
int main()
{
	char* src = "hello";
	char* dest = "word";
	char c = 'e';
	/*printf("%s\n", my_strcpy(dest, src));
	printf("%s\n", my_strcat(dest, src));*/
	printf("%p\n", my_strstr(dest, src));
	/*printf("%s\n", my_strchr(dest, c));
	printf("%d\n", my_strcmp(dest, src));*/
	/*printf("%s\n", my_memcpy(dest, src, 4));*/
	system("pause");
	return 0;
}