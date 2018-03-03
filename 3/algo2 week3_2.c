#include <stdio.h>

void func()
{
	static int i=5;  //static olduðu için sadece bir kere tanýmlanýp çalýþýr.
	i++;
	printf("i= %d\n" ,i);
	
}


int* returnMyNumbers()
{
	int i;
	static int arr[]={0,100,1000};
	
	for(i=0; i<3; i++)
	{
		printf("Address of arr[%d] = %p, arr[%d] = %d\n",i,(arr+i),i,arr[i]);
	}
	   return arr;
}



int * smaller(int *px, int *py)
{
	if(*px<=*py)
	    return px;
	else
	    return py;
}
int main()
{
   	
	
	int j;
	for(j=0; j<3; j++)
	func();

	
	int *numbers;
	int i;
	numbers=returnMyNumbers();
	printf("\n\n");
	for(i=0; i<3; i++)
	{
		printf("Numbers=%p--arr[%d]=%d\n",numbers,i,*numbers);
		numbers++;
	}
	
	
	int *localp;
	int a=56, b=78;
	localp=smaller(&a,&b);
	printf("Address of the smallest element %p, the value %d\n",localp,*localp);
	return 0;
	
	
}





