#include<stdio.h>
int main()
{
	int n=12;
	for (int i=1;i<n;i++)
	{
		int x=0;
		for(int j=2;j<1;j++)
		{
			if(i%j!=0)
				printf("%d\n",i);
		}	

	}	
	
	return 0;

}