#include <stdio.h>

int main()

{
	/*char ch;
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp))                            //end of file olmadıkca
	{		
	    ch=getc(fp);                            //getc ile karakter aldık.
	    printf("%c\n",ch);                     //out.txt dosyasının icinde ne varsa karakter karakter yazıcak
	}
	
	*/
	/*int i=12;
	float x=2.356;
	char ch='k';
	FILE *fp;
	fp=fopen("kubra.txt","w");               //kubra.txt dosyasına 12,2.356 ve k yazdırıcak
	fprintf(fp,"%d %f %c",i,x,ch);
	*/
	
	/*FILE *outfile,*infile;
	int b=5,f;
	float a=13.72,c=6.68,e,g;
	outfile=fopen("testdata.txt","w");
	fprintf(outfile,"%f %d %f",a,b,c);          //testdata dosyasına 13.72,5,6.68 yazıcak
	fclose(outfile);                            //dosyayı kapattık.
	
	infile=fopen("testdata.txt","r");
	fscanf(infile,"%f %d %f",&e,&f,&g);        // e f g yi dosyadan okumasını istedik.
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
		printf("dosyanin ilk on karakteri:%s\n",buffer);    //out txt dosyasının ilk on karakterini yazıcak
		
	}
	

	*/
	
/*	char a[10]={'1','2','3','4','5','6','7','8','9','k'};
	FILE *fp;
	fp=fopen("project.txt","w");
	fwrite(a,1,5,fp);        //project.txt dosyasına yukarıdaki dizinin ilk 5 elemanını yazdı.
	fclose(fp);
	return 0;
	
	*/
	
/*	FILE *fp;
	fp=fopen("myfile.txt","w");
	fputs("fatmacetinkaya",fp);                               //5 elemandan sonra fatma yazıp devam edicek
	fseek(fp,5,SEEK_SET);              
	fputs("kubra",fp);
	fclose(fp);
	return 0;
	
*/
   FILE *stream;
   stream=fopen("tell.txt","w");
   fprintf(stream,"kubra cetinkaya");
   printf("dosyadaki konum:%ld\n",ftell(stream));        //15 karakterli bir sey yazdıgım icin 15 yazıcak
   fclose(stream);
   return 0;





}



