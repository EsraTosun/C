#include<stdio.h>
#include<conio.h>

int main()
{
	char dizi1[100],dizi2[100],secenek;
	int i,kopya;

	
	printf("metni giriniz:");
	gets(dizi1);
	
	printf("metnin tamamini mi kopyalamak istersiniz? evet ise e,hayir ise h yi seciniz:");
	scanf("%c",&secenek);
	
	if(secenek=='e')
	{
		for(i=0;dizi1[i]!='\0';i++)
		dizi2[i]=dizi1[i];
		
		dizi2[i]='\0';
		
		// sonlandýrý karakteri koymayý UNUTMA
		
		printf("\n");
		
		printf("orjinal metin:%s \n kopyalanmýþ metin:%s",dizi1,dizi2);
		printf("kopyalanan karakter sayisi:%d \n",i);
	}
	
	else if(secenek=='h')
 {
 	printf("kopyalamak istediðiniz karakter sayisini giriniz:");
 	scanf("%d",&kopya);
 	
 	for(i=0;i<kopya;i++)
 	dizi2[i]=dizi1[i];
 	
 	dizi2[i]='\0';
 
 	printf("\n");
 	printf("orjinal metin:%s \n kopya metin:%s \n",dizi1,dizi2);
 	printf("kopyalanan karakter sayisi:%d \n",i);
 }
 
 	
	getch();
	return 0;
}
