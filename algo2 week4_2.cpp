#include <stdio.h>
#include<stdlib.h>               //dinamik bellek k�t�phanesi

int main()
{
int* p,* ary;
	int i;
		
	p=(int*)malloc(sizeof(int));              //dizinin boyutunu istedi�imiz gibi de�i�tirmek i�in malloc kullan�r�z.         
	
	if(!p)
	 exit(-1);
	 
	 *p=34;
	 
   
	printf("%d\n",*p);
	
	int a;
	printf("istediginiz sayiyi girin\n");
	scanf("%d\n",&a);
	
	ary=(int*)calloc(10,sizeof(int)*a);                               //calloc malloctan farkl� olarak iki parametre al�r
	if(!ary)
	  exit(-1);	
	for(i=0; i<10; i++)
	{
		ary[i]=i*5;
			printf("ary[%d]=%d \n",i,i*5);
	}

	
	
	ary=(int*)realloc(ary,sizeof(int)*20);                     //daha �nce olu�turdu�umuz calloc fonksiyonunu geni�letmek i�in realloc kulland�k
	
		if(!ary)
	  exit(-1);
	  
	
	
	                                               
	free(p);                           //dinamik de�i�kenlerimizi ram'e iade ettik.
	free(ary);
	
   /*	int *p,i;                     
	p=(int*)malloc(4*sizeof(int));
	
	if(!p)
	  exit(100);
	  
	for(i=0; i<4; i++)
	{
		scanf("%d",p);                           //kullan�c�dan 4 say� isteyecek ve her bir say�y� 4 ile �arp�p yazd�r�cak.
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
	p=(char*)calloc(k+1,sizeof(char));     //stringi bitirmek i�in \0 komutunu kullan�cak. Bu y�zden bir eleman fazla dizi olu�turmas�n� istedim(k+1)
	
	if(!p)
	 exit(-1);
	 
	 
	 
   printf("Enter a word with size \n");
   scanf("%s",p);
   printf("You entered\n");
   printf("%s\n",p);                 //%s kulland���n i�in *p yazmana gerek yok p yazman yeterli
   
   
   free(p);*/
   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
