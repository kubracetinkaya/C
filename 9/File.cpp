#include <stdio.h>

int main()

{
	/*char ch;
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp))                            //end of file olmad�kca
	{		
	    ch=getc(fp);                            //getc ile karakter ald�k.
	    printf("%c\n",ch);                     //out.txt dosyas�n�n icinde ne varsa karakter karakter yaz�cak
	}
	
	*/
	/*int i=12;
	float x=2.356;
	char ch='k';
	FILE *fp;
	fp=fopen("kubra.txt","w");               //kubra.txt dosyas�na 12,2.356 ve k yazd�r�cak
	fprintf(fp,"%d %f %c",i,x,ch);
	*/
	
	/*FILE *outfile,*infile;
	int b=5,f;
	float a=13.72,c=6.68,e,g;
	outfile=fopen("testdata.txt","w");
	fprintf(outfile,"%f %d %f",a,b,c);          //testdata dosyas�na 13.72,5,6.68 yaz�cak
	fclose(outfile);                            //dosyay� kapatt�k.
	
	infile=fopen("testdata.txt","r");
	fscanf(infile,"%f %d %f",&e,&f,&g);        // e f g yi dosyadan okumas�n� istedik.
	printf("%f %d %f\n",a,b,c);
	printf("%f %d %f\n",e,f,g);
	*/
	
	/*FILE *f;
	char buffer[11];
	if(f=fopen("out.txt","r"));
	{
		fread(buffer,1,10,f);               
		buffer[10]=0;
		fclose(f);
		printf("dosyanin ilk on karakteri:%s\n",buffer);    //out txt dosyas�n�n ilk on karakterini yaz�cak
		
	}
	

	*/
	
/*	char a[10]={'1','2','3','4','5','6','7','8','9','k'};
	FILE *fp;
	fp=fopen("project.txt","w");
	fwrite(a,1,5,fp);        //project.txt dosyas�na yukar�daki dizinin ilk 5 eleman�n� yazd�.
	fclose(fp);
	return 0;
	
	*/
	
/*	FILE *fp;
	fp=fopen("myfile.txt","w");
	fputs("fatmacetinkaya",fp);                               //5 elemandan sonra fatma yaz�p devam edicek
	fseek(fp,5,SEEK_SET);              
	fputs("kubra",fp);
	fclose(fp);
	return 0;
	
*/
   FILE *stream;
   stream=fopen("tell.txt","w");
   fprintf(stream,"kubra cetinkaya");
   printf("dosyadaki konum:%ld\n",ftell(stream));        //15 karakterli bir sey yazd�g�m icin 15 yaz�cak
   fclose(stream);
   return 0;





}



