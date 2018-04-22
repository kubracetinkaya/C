#include <stdio.h>

int main()

{
	char ch;
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp))                            //end of file olmadýkca
	{		
	    ch=getc(fp);
	    printf("%c\n",ch);                     //out.txt dosyasýnýn icinde ne varsa karakter karakter yazýcak
	}
	
	
	
	
	
	
}



