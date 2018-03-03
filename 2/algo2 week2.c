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
printf("The address of %p\n", &x);       //x'in adresine erişti
printf("The value of p %p\n", p);        //p değerinin x'in adresine erişmesini istemiştik
printf("The value of x is %d\n",x);      //x'in değeri
printf("The value of x is %d accessed by dereferencing \n ",*p);       //p değeri x'in adresine erişmişti.Xin adresine gittiğimizde x'in değerini buluruz */

/* float a,b,r;
float *pa=&a, *pb=&b;
float *pr=&r;
scanf(" %f",pa);               //scanf'in içine bi şey yazılmaz!
scanf(" %f",pb);

*pr=*pa+*pb;                   //a ve b değerlerinin toplamıdır.

printf("%f\n",*pr);
printf("%f\n",r);    */

/* char c='A';
char *pc=&c;
double d=5.43;
double *pd1,*pd2;

printf(" c is %c\n d is %f\n",c,d);
printf(" pc is %c\n",*pc);
pd1=&d;                 
*pc='B';               //Artık c gördüğümüz yerlere B yazıcaz.
pd2=pd1;               //pd2 d'nin adresine eşit oldu.
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

 /* void exchange(int *x,int *y)
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
	return 0;*/
	
	
	int main()
	{
	
	
	int buffer[3]={3,4,5};
	int *pbuffer1, *pbuffer2, *pbuffer3, *pbuffer4, *pbuffer5;
	
	pbuffer3=buffer;
	pbuffer4=&buffer[0];
	pbuffer1=buffer;
	pbuffer2=buffer+2;
	pbuffer5=&buffer[2];
	
	
	printf("buffer[0] is %d\t buffer[2] is %d\n" ,buffer[0], buffer[2]);
	printf("Using pointer as an array name pbuffer1[1]=%d\n" ,pbuffer1[1]);
	printf("Using array namae as pointer *(buffer+2)=%d\n" ,*(buffer+2));
	printf("pbuffer is %d\t *pbuffer2 is %d\n\n\n" ,*pbuffer1, *pbuffer2);
	printf("pbuffer4 is %d\n",pbuffer4);
	printf("pbuffer5 is %d\n",pbuffer5);
	
	
	
return 0;	
}


                                           








                   









