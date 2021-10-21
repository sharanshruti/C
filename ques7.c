#include<stdio.h>


struct s{
	int x;
	struct p{
		char y;
		union u{
			char w;
			float t;
		}u;
	}p;
};

int main()
{
	struct s s;
	scanf("%d\n",&s.x);
	scanf("%c\n",&s.p.y);
	scanf("%c",&s.p.u.w);
	printf("%d\n",s.x);
	printf("%c\n",s.p.y);
	printf("%c\n",s.p.u.w);
	scanf("%f",&s.p.u.t);
	printf("%f\n",s.p.u.t);	

	return 0; 

}