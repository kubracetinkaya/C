#include <stdio.h>

int main()

{
	char ch;
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp))                            //end of file olmadıkca
	{		
	    ch=getc(fp);
	    printf("%c\n",ch);                     //out.txt dosyasının icinde ne varsa karakter karakter yazıcak
	}
	
	
	
	
	
	
}



