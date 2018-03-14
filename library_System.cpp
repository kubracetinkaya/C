#include <stdio.h>
#include <stdlib.h>

void save(char **author,char **title,int *year,int count)
{
	int len;
	printf("The length of the author name:\n");
	scanf("%d",&len);
	while(getchar() != '\n');                                       //Enter fonksiyonunu okumas�n diye yapt�k.
	author[count]=(char*)calloc(len+1,sizeof(char));
	printf("The length of the title:\n");
	scanf("%d",&len);
	title[count]=(char*)calloc(len+1,sizeof(char));
	printf("Enter author name and title\n");
	gets(author[count]);                                  //gets'le ald�k ki bo�luklar� alg�lamas�n.
	gets(title[count]);
	printf("Enter the year\n");
	scanf("%d",year);
	
}


void list(char **author,char **title,int *year,int count)
{
	int i;
	for(i=0; i<count; i++)
	{
		printf("%s %s %d\n",author[i],title[i],year[i]);        
	}
}

int main()
{
	int *year;
	char **author;              
	char **title;                 //author ve title i�in 2 pointer kulland�k ��nk� kullan�c� farkl� uzunluklarda metin girebilir
	int menu;                    //Yani kendi i�inde geni�lettik diye d���nebiliriz.
	int count=0,i;
	
	year=(int*)malloc(sizeof(int));
	title=(char**)malloc(sizeof(char*));          
	author=(char**)malloc(sizeof(char*));
	
	
while(1)
	{
		printf("John'slibrary system:\n");
		printf("1-- Save\n");
		printf("2-- List\n");
		printf("3-- Exit\n");
		scanf("%d",&menu);
			

switch(menu)
	{
	   case 1: save(author,title,(year+count),count);
	   
				count++;
	
	year=(int*)realloc(year,sizeof(int)*count+1);             //yeni de�erlere g�re tek tek geni�letme yap�yor.
	title=(char**)realloc(title,sizeof(char)*count+1);
	author=(char**)realloc(author,sizeof(char)*count+1);
     break;
		case 2: list(author,title,year,count);
		break;
		
		case 3: for(i=0;i<count;i++)
		{
			free(title[i]);                          //kulland���m�z dinamik bellekleri rame geri iade ettik.
			free(author[i]);		
		}
		    free(title);
		    free(author);
		    free(year);
		    exit(0);
		break;
	}	
	}
	return 0;
}
