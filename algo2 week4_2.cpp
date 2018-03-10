#include <stdio.h>
#include<stdlib.h>               //dinamik bellek kütüphanesi

int main()
{
int* p,* ary;
	int i;
		
	p=(int*)malloc(sizeof(int));              //dizinin boyutunu istediðimiz gibi deðiþtirmek için malloc kullanýrýz.         
	
	if(!p)
	 exit(-1);
	 
	 *p=34;
	 
   
	printf("%d\n",*p);
	
	int a;
	printf("istediginiz sayiyi girin\n");
	scanf("%d\n",&a);
	
	ary=(int*)calloc(10,sizeof(int)*a);                               //calloc malloctan farklý olarak iki parametre alýr
	if(!ary)
	  exit(-1);	
	for(i=0; i<10; i++)
	{
		ary[i]=i*5;
			printf("ary[%d]=%d \n",i,i*5);
	}

	
	
	ary=(int*)realloc(ary,sizeof(int)*20);                     //daha önce oluþturduðumuz calloc fonksiyonunu geniþletmek için realloc kullandýk
	
		if(!ary)
	  exit(-1);
	  
	
	
	                                               
	free(p);                           //dinamik deðiþkenlerimizi ram'e iade ettik.
	free(ary);
	
   /*	int *p,i;                     
	p=(int*)malloc(4*sizeof(int));
	
	if(!p)
	  exit(100);
	  
	for(i=0; i<4; i++)
	{
		scanf("%d",p);                           //kullanýcýdan 4 sayý isteyecek ve her bir sayýyý 4 ile çarpýp yazdýrýcak.
		*p=4*(*p);
		printf("%d\n",*p);
		p++;
		
	}
	
	p=p-4;
	free(p);*/
	
	
/*	char *p;
	int k;
	printf("How many character you will input\n");
	scanf("%d",&k);
	p=(char*)calloc(k+1,sizeof(char));     //stringi bitirmek için \0 komutunu kullanýcak. Bu yüzden bir eleman fazla dizi oluþturmasýný istedim(k+1)
	
	if(!p)
	 exit(-1);
	 
	 
	 
   printf("Enter a word with size \n");
   scanf("%s",p);
   printf("You entered\n");
   printf("%s\n",p);                 //%s kullandýðýn için *p yazmana gerek yok p yazman yeterli
   
   
   free(p);*/
   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
