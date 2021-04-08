#include<stdio.h>
#include<math.h>

int convert(int n); 
int main() 
{ 
    int num; 
	printf("Enter: "); 
	scanf("%d",&num);
	printf("%d in binary=%d in decimal", num, convert(num));
	return 0;
}

int convert(int n)
{
	int i=0,tot=0,rem;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		tot=tot+(rem*pow(2,i));
		i++;
	}
	return tot;
}
