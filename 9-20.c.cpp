#include<bits/stdc++.h>
#include<string.h>
using namespace std;

//int main()
//{
//	int a,b,c,max,min,mid;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a>=b)
//	{
//		max=a>c?a:c;
//		min=b>c?c:b;
//		mid=a+b+c-max-min;
//		printf("%d %d %d\n",min,mid,max);
//	}
//	else
//	{
//		max=b>c?b:c;
//		min=a>c?c:a;
//		mid=a+b+c-max-min;
//		printf("%d %d %d\n",min,mid,max);
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d",&a);
//	switch(a/10)
//	{
//		case 10:
//		case 9:
//			puts("A\n");
//			break;
//		case 8:
//			puts("B\n");
//			break;
//		case 7:
//			puts("C\n");
//			break;	
//		case 6:		
//			puts("D\n");
//			break;	
//		default:
//			puts("E\n");
//	
//		 
//			
//		
//		
//	}
//	
//	return 0;
// } 

int is_palindrome(char a[],int len)
{
	int i;
	for(i = 0;i <= (len+1)/2;i++)
	{
		//if(*(a+i)!= *(a+len-1-i)) return 0;
		if(strcmp(a+i,a+len-1-i)!=0) break;return 0;
	}
	return 1;
}

int main()
{
	char a[20];
	scanf("%c",&a);
	int len = strlen(a);
	if(is_palindrome(a,len)==1) 
	{
		printf("Yes\n");
	}
	else printf("No\n");
	return 0;
} 
