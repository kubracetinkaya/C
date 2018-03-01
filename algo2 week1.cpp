#include <stdio.h>

/*int main ()
{
	int table1[3][2]={{10,30},{22,55},{56,67}};
	double table2[][4]={{10.12,30.32},{22.15,55.72,77.84},{48,69,34,23}};
	char table3[][9]={"CEN","116","LECTURES"};
    int i,j;
    for(i=0; i<3; i++)  
    {
    	printf("STRINGS: \n");                                                          //en baþtaki for'un süslü parantezine dikkat!
    	printf("%s\n" ,table3[i]);
    	printf("TABLE1\n");
    	
    for(j=0; j<2; j++)
    {
        printf("Table1[%d][%d]=%d\n",i,j, table1[i][j]);
	}
    printf("TABLE2\n");
    
    for(j=0; j<4; j++)
    {
    	printf("Table2[%d][%d]=%.1lf\n",i,j, table2[i][j]);
	}
	
	}
    return 0; 
} */
    
void fillMatrix(int table[][3],int row,int col)
{
	int i,j;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(i<j)
			table[i][j]=-1;
			else if(i==j)
			table[i][j]=0;                  //Yalnýzca j deðerleri artar çünkü henüz j fonksiyondan çýkmadý.
			else
			table[i][j]=1;
		}
	}
}

void printingMatrix(int table[][3], int row,int col)
{
	int i,j;                                            //Bu ksýýmda sadece yazdýrma iþlemini yaptýk
	for(i=0; i<row; i++)
	{
	  for(j=0; j<col; j++)
	  {
	  	printf("%d\t",table[i][j]);
      }	
        printf("\n");                   //Alt alta yazdýrmak için kullandýk.
	}
}


int main(void)
{
	int matrix[3][3];
	fillMatrix(matrix,3,3);
	printingMatrix(matrix,3,3);
	return 0;
}
    




	
	
	
	
	
	
	
	
	
	
	

