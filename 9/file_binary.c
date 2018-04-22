#include <stdio.h>

typedef struct
{
	int id;
	char name[20];
	char team[20];
	int rank;
}player;

int main()
{
	player p1;
//	FILE *fp=fopen("team.txt","wb");
	FILE *fp=fopen("team.txt","rb");
	/*
	while(1)
	{
		printf("enter id name team rank\n");
		scanf("%d %s %s %d",&p1.id,&p1.name,&p1.team,&p1.rank);
		fwrite(&p1,sizeof(player),1,fp);            
		fflush(fp);
	}
	*/
	fread(&p1,sizeof(player),1,fp);
	while(!feof(fp))
	{
		printf("%d %s %s %d\n",p1.id,p1.name,p1.team,p1.rank);
		fread(&p1,sizeof(player),1,fp);          //p1in adresinde playerýn boyutu kadar yeri fpden oku
		
	}
	
	

	
	
	return 0;
}
