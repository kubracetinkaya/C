#include <stdio.h>

int main()

{
	char ch;
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp))                            //end of file olmad�kca
	{		
	    ch=getc(fp);
	    printf("%c\n",ch);                     //out.txt dosyas�n�n icinde ne varsa karakter karakter yaz�cak
	}
	
	
	
	
	
	
}



