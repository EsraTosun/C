#include<stdio.h>
#include<conio.h>

char donusturme(char dizi[]);

int main()
{
	char dizi[1000];
	
	printf("diziyi giriniz:");
	gets(dizi);
	
	printf("\n dizinin ilk hali:%s",dizi);
	
	//DÝZÝLERDE %c YERÝNE %s kullanýlýr
	
	donusturme(dizi);
	
	getch();
	return 0;
}

char donusturme(char dizi[])
{
	int i=0;
	
	while(dizi[i]!='\0')
	{
		if(dizi[i]>=65 && dizi[i]<=90)
		dizi[i]+=32;
		
	i++;	
	}
	
	printf("\n dizinin son hali:%s",dizi);
	
}
