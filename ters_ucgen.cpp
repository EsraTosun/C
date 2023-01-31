#include<stdio.h>
#include<conio.h>

int main()                                            //    boþluk sayýsý     yýldýz sayýsý
{                                                          
	int i,j;                                              //      0                5  
	int satir;                                            //      1                4
	                                                     //       2                3
	printf("Lutfen ucgenin satir sayisini giriniz");     //       3                2
	scanf("%d",&satir);                                  //       4                1       
	
	for(i=satir;i>=0;i--)                        // ters üçgen olduðu için üçgen saða doðru olmalý
	  {                                          // bu yüzden ilk boþuk konulmalýdr
	  	for(j=0;j<satir-i;j++)
	  	  {
	  	  	printf(" ");
		  }
		  
		for(j=0;j<=i;j++)
		  {
		  	printf("*");
		  }
		  
		  printf("\n");  
		}  
	
	getch();
	return 0;
}
