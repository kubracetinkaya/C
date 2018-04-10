#include <stdio.h>
#include <stdlib.h>

typedef struct n
{
	int x;
	n* next;
}node;


void yazdir(node* r )
{
	while(r!=NULL)
	   {
	   	   printf("%d ",r->x);
	   	   r=r->next;
	   }
}

int main()
{
	node *root;                                    //root node* tipinde bir pointer.kutu olusturmak gibi d�s�n
	root=(node*)malloc(sizeof(node));              
	root->x=10;                                    //ilk kutunun datas�na 10 yaz
	root->next=(node*)malloc(sizeof(node));        //deger atamadan �nce haf�zada yer ay�rmay� unutma!
	root->next->x=20;                              
	root->next->next=(node*)malloc(sizeof(node));
	root->next->next->x=30;
	root->next->next->next=NULL;                  //linkedlistin sonuncu eleman�n�n null olmas�n� istiyoruz c�nk� bellekte o alan bo� olmayabilir.
	node *iter;                                  //nextleri cok kullanmamak icin ba�ka bir pointer kulland�k.iter kutular aras�nda dolans�n diye.
	iter=root;                                   
    printf("%d\n",iter->x);
    iter=iter->next;
    printf("%d\n",iter->x);
    iter=root;                                //iteri ilk elemana ald�k
    int i=0;                                  
   /* while(iter!=NULL)                         
    {
        i++;                                                      
    	printf("%d inci eleman: %d\n",i,iter->x);             //linkedlist elemanlar�n� s�rayla yazd�rd�m.
    	iter=iter->next;
	}*/
	  while(iter->next!=NULL)                      //linked listin sonuna eleman eklemek istiyorum. �terden sonrasi bos olmasin dedim
	{ 
	    i++;                                                    
    	printf("%d inci eleman: %d\n",i,iter->x);            
    	iter=iter->next;
	}
	for(i=0;i<5;i++)                                         //5 tane kutu ekledik
	{
		iter->next=(node*)malloc(sizeof(node));
		iter=iter->next;
		iter->x=i*10;                                     //s�rayla 0 10 20 30 40 yaz�cak kutularda
		iter->next=NULL;
	}
	yazdir(root);
	
	return 0;
}


