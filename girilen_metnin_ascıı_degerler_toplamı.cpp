#include<stdio.h>
#include<conio.h>

char degerbulma(char dizi[]);

int main()
{
	char dizi[1000];
	
	printf("diziyi giriniz:");
	gets(dizi);
	
	degerbulma(dizi);
	
	getch();
	return 0;
}

char degerbulma(char dizi[])
{
	int i=0,toplam=0;
	
	while(dizi[i]!='\0')
	{
		printf("\n %c harfininin %d ASCII degerin sahiptir.",dizi[i],dizi[i]);
		toplam+=dizi[i];
		i++;
	}
	
	printf("\n dizinin ASCII deger toplami=%d",toplam);
	
}
