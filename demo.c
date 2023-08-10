#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, delta, x1, x2;
	printf("nhap he so a bat ki: ");
	scanf("%d, &a");
	printf("nhap vao he so b bat ki: ");
	scanf("%d, &b");
	printf("nhap he so c bat ki: ");
	scanf("%d", &c);
	if(a==0) 
	{
		printf("he so a phai # 0 !");
	}else
	{
		delta = pow(b, 2)-4*a*c;
		if(delta > 0)
		{
			x1 = (-b-sqrt(delta))/(2*a);
			x2 = (-b+sqrt(delta))/(2*a);
			printf("\npt co nghiem x1 = ", x1);
			printf("\npt co nghiem x2 = ", x2);
		}else if(delta == 0)
		{
			x1 = -b/(2*a);
			printf("\npt co nghiem kep x1 = x2: ", x1);
		}else
		{
			printf("pt vo nghiem");
		}
	}
  return 0;
}