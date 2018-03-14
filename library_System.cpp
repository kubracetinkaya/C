#include <stdio.h>
#include <stdlib.h>

void save(char **author,char **title,int *year,int count)
{
	int len;
	printf("The length of the author name:\n");
	scanf("%d",&len);
	while(getchar() != '\n');                                       //Enter fonksiyonunu okumasýn diye yaptýk.
	author[count]=(char*)calloc(len+1,sizeof(char));
	printf("The length of the title:\n");
	scanf("%d",&len);
	title[count]=(char*)calloc(len+1,sizeof(char));
	printf("Enter author name and title\n");
	gets(author[count]);                                  //gets'le aldýk ki boþluklarý algýlamasýn.
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
	char **title;                 //author ve title için 2 pointer kullandýk çünkü kullanýcý farklý uzunluklarda metin girebilir
	int menu;                    //Yani kendi içinde geniþlettik diye düþünebiliriz.
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
	
	year=(int*)realloc(year,sizeof(int)*count+1);             //yeni deðerlere göre tek tek geniþletme yapýyor.
	title=(char**)realloc(title,sizeof(char)*count+1);
	author=(char**)realloc(author,sizeof(char)*count+1);
     break;
		case 2: list(author,title,year,count);
		break;
		
		case 3: for(i=0;i<count;i++)
		{
			free(title[i]);                          //kullandýðýmýz dinamik bellekleri rame geri iade ettik.
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
