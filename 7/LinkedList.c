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
	node *root;                                    //root node* tipinde bir pointer.kutu olusturmak gibi düsün
	root=(node*)malloc(sizeof(node));              
	root->x=10;                                    //ilk kutunun datasına 10 yaz
	root->next=(node*)malloc(sizeof(node));        //deger atamadan önce hafızada yer ayırmayı unutma!
	root->next->x=20;                              
	root->next->next=(node*)malloc(sizeof(node));
	root->next->next->x=30;
	root->next->next->next=NULL;                  //linkedlistin sonuncu elemanının null olmasını istiyoruz cünkü bellekte o alan boş olmayabilir.
	node *iter;                                  //nextleri cok kullanmamak icin başka bir pointer kullandık.iter kutular arasında dolansın diye.
	iter=root;                                   
    printf("%d\n",iter->x);
    iter=iter->next;
    printf("%d\n",iter->x);
    iter=root;                                //iteri ilk elemana aldık
    int i=0;                                  
   /* while(iter!=NULL)                         
    {
        i++;                                                      
    	printf("%d inci eleman: %d\n",i,iter->x);             //linkedlist elemanlarını sırayla yazdırdım.
    	iter=iter->next;
	}*/
	  while(iter->next!=NULL)                      //linked listin sonuna eleman eklemek istiyorum. İterden sonrasi bos olmasin dedim
	{ 
	    i++;                                                    
    	printf("%d inci eleman: %d\n",i,iter->x);            
    	iter=iter->next;
	}
	for(i=0;i<5;i++)                                         //5 tane kutu ekledik
	{
		iter->next=(node*)malloc(sizeof(node));
		iter=iter->next;
		iter->x=i*10;                                     //sırayla 0 10 20 30 40 yazıcak kutularda
		iter->next=NULL;
	}
	yazdir(root);
	
	return 0;
}


