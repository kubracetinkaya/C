#include <stdio.h>

int main()
{
	/*
	int x=4;
	printf("%d\n",x);
	printf("%d\n",x<<=1);         //<< sola kayd�r demek yani 2 ile �arpmak demek.= anlam� da de�eri kayd�r�lan de�er olsun demek.
	printf("%d\n",x);
	printf("%d\n",x>>1);
	
	*/
	
	int x=3;
	int y=8;
	int z=5;
	printf("%d\n",x&y);   //bit bit &leme i�lemi yap�yor
	printf("%d\n",x|y);
	printf("%d\n",x^y);
	printf("%d\n",x^y|z);       //i�lem �nceli�i ^ & |
	printf("%d\n",x|y&z);
	printf("%d\n",x^y&z|x);
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
