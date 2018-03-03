#include <stdio.h>
 //buraya bir adet tanýmlayýý fonskiyon yazýyorsun!!!!!!!!!! (prototip)

void sorting (int*, int);
int searching (int *, int, int);


int main()
{
	int array1[]={100,220,3000,4,5,6,7,8,9};
	int array2[]={78,45,69};
	int *p1,*p2;
	int* p3=array1;    //p3=&100;       *p3=100   p3=&array1[1]       p3=&array1[0];
	int *p4=array1;
	int *p5=array1;
	printf("%d\n",*(++p4));
    printf("%d\n",*(++p5));
	printf("%d\n",*(++p3)); 
	
	p2=p3;
	printf("%d\n",*p2);       //p2'nin gösterdiði adrese gittiðimizde 220 yazdýrýr.
	p1=(array1+5);            //p1imiz 6nýn adresi
	*p2=*p1+23;               //yeni p2miz 29.
	printf("%d\n",*(array1+1));      //220 bir üst satýrda 29 olarak deðiþmiþti bu yüzden yeni deðerimiz 29.
	
	
	
	int myarray[]={345,125,889,126,54,145,0,14}, size=8, i=0, rtn;
	sorting(myarray,size);
	rtn=searching(myarray,size,345);     //345'i bulmasýný istiyoruz.
	if(rtn==-1)
	      printf("It is not in the list \n");
    else 
        printf("Index %d in sorted list \n");
        
   return 0;
}   


void sorting (int * arr, int size)
{
	int temp,i,j;
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(*(arr+i)>*(arr+j))
			{
				temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
			}
		}
}
}
int searching (int *arr, int size, int searched)            //sorting fonksiyonu yapýlmadan bu iþlem yapýlmaz.
{
	int *sp=arr, *lp=(arr+size-1);       //sp 0.indise eriþiyor, lp sonuncu indise eriþiyor.
	int *mid;
	while(sp<=lp)
	{                                      
		mid=sp+(lp-sp)/2;               //her zaman mid fonksiyonuna göre iþlem yapýyor. aradýðýmýz sayý mid'den büyükse ssað tarafta iþlem yapýyor,
		if(searched>*mid)                      //küçükse sol tarafta iþlem yapýyor.
			sp=mid+1;
		else if(searched<*mid)
			lp=mid-1;
		else
		return (mid-arr);
	}
	return -1;

}
