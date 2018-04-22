#include <stdio.h>

int main()
{
	int id,rank;
	char name[20],team[20];
//	FILE *fp=fopen("deneme.txt","w");
		
	FILE *fp=fopen("deneme.txt","r");
	
	
/*
	while(1)
	{
		printf("enter id,name,team and rank\n");
		scanf("%d%s%s%d",&id,&name,&team,&rank);
		
		fprintf(fp,"%d %s %s %d\n",id,name,team,rank);                 //ne girersek dosyaya yazýcak.
		fflush(fp);
		
	}
	
*/	
	

	while(!feof(fp))
	{
		printf("%d--%s--%s--%d\n",id,name,team,rank);
		fscanf(fp,"%d %s %s %d",&id,&name,&team,&rank);
	}
	
	
	
	
	
	
	
	return 0;
}
