#include <stdio.h>
int* func()
{
	static int t=5;
	t++;
	return &t;
}
int main(void)
{
/*	int *k;
	k=func();
	*k=34;
	k=func();
	printf("k=%d\n" ,*k);
	
	
	int a,*p,**q,***r;
	p=&a;
	q=&p;
	r=&q;
	printf("p points to address of a= %p\n",p);
	printf("q points to address of p= %p\n",q);
	printf("r points to address of q= %p\n",r);
	
	printf("Enter a number > a:\n");
	scanf("%d",&a);
	printf("a=%d\n",a);
	
	printf("Enter a number > p:\n");
	scanf("%d",p);
	printf("a=%d\n",a);
	
	printf("Enter a number > *q:\n");
	scanf("%d",*q);
	printf("a=%d\n",a);
	
	printf("Enter a number > **r:\n");
	scanf("%d",**r);
	printf("a=%d\n",a); */
	
	
	
	void *p;                                          //pointer'ýmýzý void olarak oluþturduk çünkü generic pointer kullanýcaz.
	int i=7;
	float f=23.4;                                       
	p=&i;
	printf("i=%d\n",*((int*)p));                     //baþta pointera bi tip vermedik. Burda int olmasýný istiyoruz. Gösterim bu þekilde.
	*(int*)p=i+5;
	printf("i=%d\n",*((int*)p));
	p=&f;
	*(float*)p=365.5;
	printf("f=%f\n",*(float*)p);                       //Þimdiyse ayný pointer'ýn float olmasýný istiyoruz
	printf("i is %d\n",i);
	
	
	double val=9.7;
	double array[]={3.2,4.3,5.4};
	double *pdbl[2];               //2 elemanlý double pointer tutan bir dizi
	int a[][4]={{9,8,7,6},{13,15,17,19},{21,23,25,27}};
	int *pa[3],(*pb)[4];          //pa 3 elemanlý int  pointer tutan dizi,pb 4 elemanlý dizi tutan pointer
	pdbl[0]=&val;
	pdbl[1]=array+1;           //array dediðimizde dizinin ilk elemanýný alýr çünkü dizi oluþturmak aslýnda ilk elemanýn adresini tutup arka arkaya sýralamaktýr.
	printf("*pdbl[0]=%lf\t *pdbl[1]=%lf\n\n",*pdbl[0],*pdbl[1]);
	
	pa[0]=a[1];                
    printf("*pa[0]=%d\t *(pa[0]+1)=%d\t pa[0][2]=%d\t (*pa)[2]=%d\t (*pa)[3]=%d\n\n",*pa[0],*(pa[0]+1), pa[0][2], (*pa)[2], (*pa)[3]);
    
    pb=&a[1];
    printf("*pb[0]=%d\t *pb[1]=%d\n   *(pb[0]+3)=%d\t  *(pb[0]+6)=%d\t pb[0][2]=%d\n)",*pb[0],*pb[1], *(pb[0]+3), *(pb[0]+6), pb[0][2]);
    

	
	return 0;
	
	
	
	
	
	
	
}
