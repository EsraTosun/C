#include<stdio.h>
#include<conio.h>

int main()                                            //    bo�luk say�s�     y�ld�z say�s�
{                                                          
	int i,j;                                              //      0                5  
	int satir;                                            //      1                4
	                                                     //       2                3
	printf("Lutfen ucgenin satir sayisini giriniz");     //       3                2
	scanf("%d",&satir);                                  //       4                1       
	
	for(i=satir;i>=0;i--)                        // ters ��gen oldu�u i�in ��gen sa�a do�ru olmal�
	  {                                          // bu y�zden ilk bo�uk konulmal�dr
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
