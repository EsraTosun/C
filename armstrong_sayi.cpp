#include<stdio.h>
#include<conio.h>
#include<math.h>

int armstrong(int);

int main()
{
	int sayi;


 for(int i=0;i<9;i)
  {
	
	printf("Armstrong olup olmadigini ogrenmek istediginiz sayiyi giriniz:\n");
	scanf("%d",&sayi);
	

	if(armstrong(sayi)==1)
	    printf("armstrong sayidir. \n");
	    
	else
	    printf("armstrong sayi degildir. \n");    

	// armstrong bir sayý ise 1 olarak dönüþ yapar
	// armstron sayý deðil ise -1 olarak dönüþ yapar.
	
	printf("programdan cikmak istiyor musunuz? \n evet ise 9 hayir ise 7 ye basiniz \n");
	scanf("%d",&i);
	
  }

	
	getch();
	return 0;
}

int armstrong(int sayi)
{
	int toplam=0,rakam;
	int yedek,basamak=0;
	yedek=sayi;
	
	while(yedek>0)
	{
		yedek=yedek/10;
		basamak++;
	}
	
	yedek=sayi;
	
	while(yedek>0)
	{
		rakam=yedek%10;
		yedek=yedek/10;
		toplam=toplam+pow(rakam,basamak);
		
	}
   
	

	if(toplam==sayi)
	    return 1;
	    
	else
	    return -1;    
	
	
}
