#pragma warning(disable : 4996)

#include<stdio.h>
#include<CoreWindow.h>
#include<string.h>
#include<time.h>
#if 0
int DigitSum(int n)
{

	if (0<=n<=9)
	{
		return n;
	}
	return n % 10 + n / 10;
	
}

int main()
{

	int res =  DigitSum(1729);
	printf("%d\n", res);
	system("pause");
	return 0;
}
#endif
#if 0
void reverse_string(char * string)
{
	string++;

	if (*string != '\0')

	{

		reverse_string(string);

	}

	string--;

	printf("%c", *string);
}
int main()
{
	char * p = "abc";
	
	reverse_string(p);
	system("pause");
	return 0;
}
#endif
//int fac(int n)
//{   
//	int i = 1;
//	int sum = 0;
//	for (; i<=n; n++)
//	{
//		sum *= n;
//		return sum;
//	}
//}
//int main()
//{
//	int res = fac(3);
//	printf("%d\n", res);
//	system("pause");
//	return 0;
//
#if 0
void print(int n)
{
	if (n > 9)
	{
		printf("%d\n", n / 10);
	}
	printf("%d\n", n %10);
}
int main()
{
	Sleep(1000);
	int num = 1234;
	print(num);
	printf("\n");
	system("pause");
	return 0;
}
#endif
int main()
{
	printf("c:\\code\\test.c\n");
	system("pause");
	return 0;
}