#include <stdio.h>

int main()
{
	/*
	int x=4;
	printf("%d\n",x);
	printf("%d\n",x<<=1);         //<< sola kaydýr demek yani 2 ile çarpmak demek.= anlamý da deðeri kaydýrýlan deðer olsun demek.
	printf("%d\n",x);
	printf("%d\n",x>>1);
	
	*/
	
	int x=3;
	int y=8;
	int z=5;
	printf("%d\n",x&y);   //bit bit &leme iþlemi yapýyor
	printf("%d\n",x|y);
	printf("%d\n",x^y);
	printf("%d\n",x^y|z);       //iþlem önceliði ^ & |
	printf("%d\n",x|y&z);
	printf("%d\n",x^y&z|x);
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
