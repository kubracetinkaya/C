#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NWORDS 5

/*
void func(char *str)
{
	int k=strlen(str),i;
	for(i=k-1;i>=0;i--)
	 printf("%c",str[i]);
}


int main()
{
   char **table;
   int leng,i;
   table=(char**)malloc(NWORDS*sizeof(char*));
   for(i=0;i<NWORDS;i++)
   {
   	printf("Enter the length:\n");
   	scanf("%d",&leng);
   	while(getchar() != '\n');
   	table[i]=(char*)malloc((leng+1)*sizeof(char));
   	fgets(table[i],(leng+1)*sizeof(char),stdin);  	
   }
   
   func(*(table+3));
     for(i=0;i<NWORDS;i++)
     {
     	free(table[i]);
	 }
	 free(table);*/

typedef struct                                        
    {
    	char id[11];
    	char name[10];                               //Bir struct oluþturdum ve adý STUDENT
    	int grade;
	}
	STUDENT;
    

int main()
{
STUDENT *spointer;          //STUDENT tipinde bi struct oluþturduk. int char gibi düþün.Ve bu yapý
/*spointer=&std1;                                                                    //içinde farklý tipte deðiþkenler tutuyor.
printf("%s %s %d\n",(*spointer).id,(*spointer).name,(*spointer).grade);           //  .ile eriþmek istiyorsan pointer'ý yýldýzla göster.
printf("%s %s %d\n",spointer->id,spointer->name,spointer->grade);                 //-> ile eriþmek istiyorsan *a gerek yok.
*/	
	int std2,i;
	printf("How many students:\n");
	scanf("%d",&std2);
	while(getchar() != '\n');
	
	spointer=(STUDENT*)calloc(std2,sizeof(STUDENT));
	
	for(i=0;i<std2;i++)
	{
		printf("Enter id name grade:\n");
		fgets(spointer->id,11*sizeof(char),stdin);         
		fgets(spointer->name,10*sizeof(char),stdin);
		scanf("%d",&spointer->grade);
		while(getchar() != '\n');
		spointer++;
	}
	
	spointer=spointer-std2;
   
   
   for(i=0;i<std2;i++)
   {
   	printf("%s %d %s\n",spointer->id,spointer->grade,spointer->name);
   	spointer++;
   }
   
   spointer=spointer-std2;

   free(spointer);
 return 0;


}

































