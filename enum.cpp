#include <stdio.h>
#include <stdlib.h>

typedef enum                     //enum yap�s� asl�nda int de�relerdir
{
	bay,   //0
	bayan  //1
}cinsiyet;

typedef enum                //enum yapisi ��kt�da int de�rler olarak g�r�n�r.
{
	pazartesi,  //0
	sali,       //1
	carsamba,   //2
	persembe,   //3
	cuma,       //4 
	cumartesi,  //5
	pazar       //6
}gunler;

typedef struct
{
     int yas;
	 char *isim;
	 cinsiyet c;
	 gunler tatil;	
}insan;


int emeklimi(insan *birey)
{
	 if(birey->c==bay && birey->yas>55)
	      return 1;
	 else if(birey->c==bayan && birey->yas>50)
	     return 1;
	 return 0;
}
int main()
{
	insan ali;
	insan *veli;
	veli=(insan*)malloc(sizeof(insan));
	veli->yas=56;
	ali.yas=30;
	ali.c=bay;
	ali.tatil=pazartesi;
	printf("alinin yasi: %d enum cinsiyet: %u enum tatil:%u\n",ali.yas,ali.c,ali.tatil);  //enum yapisi �zel olarak %u ile �a��r�labilir.
	printf("velinin yasi: %d\n",veli->yas);
	printf("ali emekli mi %d\n",emeklimi(&ali));    //ali pointer olmadigi icin adres olarak �a��rd�m
	printf("veli emekli mi %d\n",emeklimi(veli));
	

	
	return 0;
}

