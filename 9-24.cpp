#include<bits/stdc++.h>
using namespace std;

//int main()
//{
//	int i,j;
//	for(i = 1;i<=9;i++)
//	{
//		for(j = 1;j<=9;j++)
//		{
//			int k = i*j;
//			if(j==1) printf("%d*%d=%-3d",i,j,k);
//			else printf("%d*%d=%-3d",i,j,k);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int t,a,i;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d",&a);
//		for(i = 2;i <= sqrt(a);i++)
//		{
//			if(0 == a%i) break;
//		}
//		if(2 == a) printf("yes\n");
//		else if(0 == a%i) printf("no\n");
//		else printf("yes\n");
//	}
//	return 0;
// } 


//int main()
//{
//	int t,a,sum;
//	double p1,p2;
//	scanf("%d",&t);
//	while(t--)
//	{
//		sum = 0;
//		scanf("%lf",&p1);
//		p2 = p1;
//		while(p1--)
//		{
//			scanf("%d",&a);
//			sum += a;
//		}
//		printf("%.2lf\n",sum/p2);
//	}
//	return 0;
//}

void divide(int a)
{
	divide(a/10);
	int num = 1;
	if(1 == num)
	{
		printf("%d",a%10);
		num++;
	}
	else printf(" %d",a%10);
}

int main()
{
	int line,a,num;
	scanf("%d",&line);
	while(line--)
	{
		scanf("%d",&a);
		if(a == 0) printf("0\n");
		else
		{
			divide(a);
			printf("\n");
		}
		
	}
	return 0;
}
