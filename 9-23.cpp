#include<bits/stdc++.h>
using namespace std;

int count_cow(int arr[],int i)
{
	if(i < 5)
	{
		arr[i] = i;
		return arr[i];
	}
	if(arr[i] == 0)
	{
		arr[i] = count_cow(arr,i - 1) + count_cow(arr,i - 3);
		return arr[i];
	}
	else return arr[i];
}

int main()
{
	int day,arr[100];
	while(true)
	{
	arr[100]={0};
	scanf("%d",&day);
	if(0 == day) break;
	printf("%d\n",count_cow(arr,day));		
	}
	return 0;
}

