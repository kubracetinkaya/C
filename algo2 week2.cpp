#include <stdio.h>

/*int main ()
{
	int a;
	a=10;
	int b;
	b=eft(a);
	printf("\n son a %d",b);
    printf("\n ilk a %d" ,a);

	
	return 0;
}

int eft(int a)
{
   a*=2;
   printf("\n fonksiyon ici %d",a);
   return a;	
} */

/*int main(void)
{
int x = 5;
int *p;

p = &x;
printf("The address of %p\n", &x);       //x'in adresine eri�ti
printf("The value of p %p\n", p);        //p de�erinin x'in adresine eri�mesini istemi�tik
printf("The value of x is %d\n",x);      //x'in de�eri
printf("The value of x is %d accessed by dereferencing \n ",*p);       //p de�eri x'in adresine eri�mi�ti.Xin adresine gitti�imizde x'in de�erini buluruz */

/* float a,b,r;
float *pa=&a, *pb=&b;
float *pr=&r;
scanf(" %f",pa);               //scanf'in i�ine bi �ey yaz�lmaz!
scanf(" %f",pb);

*pr=*pa+*pb;                   //a ve b de�erlerinin toplam�d�r.

printf("%f\n",*pr);
printf("%f\n",r);    */

/* char c='A';
char *pc=&c;
double d=5.43;
double *pd1,*pd2;

printf(" c is %c\n d is %f\n",c,d);
printf(" pc is %c\n",*pc);
pd1=&d;                 
*pc='B';               //Art�k c g�rd���m�z yerlere B yaz�caz.
pd2=pd1;               //pd2 d'nin adresine e�it oldu.
*pd1=*pd2*0.2;         //d=5.43*0.2
printf(" After \n");
printf(" c is %c\n d is %f\n *pd1 is %f\n *pd2 is %f\n",c,d,*pd1,*pd2);
printf(" pd1 and pd2 %p %p \n",pd1,pd2);
}
*/

//MINI QUIZ//
/* int a,b,c;
int *p,*r,*q;
a=6;
b=2;
p=&b;
q=p;
r=&c;
p=&a;
*q=8;
*r=*p;
*r=a+*q+*&c;
printf("%d %d %d \n",a,b,c);
printf("%d %d %d \n",*p,*q,*r); */

 void exchange(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
	
	
}

 
int main()
{
	int a=5, b=7;
	exchange(&a,&b);
	printf("a=%d b=%d\n",a,b);
	return 0;
	
}

                                           









