#include<stdio.h>

int main()
{
	FILE*dosya=fopen("Ogrenciler.txt","w");
	
	int adet,baslangic[2000],n;
	
	if(dosya==0)
	{
		printf("dosya bulunamadi");
	}
	
	char ad[20];
	
    printf(" \n kac adet ogrenci gireceksiniz=");
	scanf("%d",&adet);
	
	for(int i=0;i<adet;i++)
	{
		printf("\n %d. kisiyi giriniz=",i+1);
		scanf("%s",&ad);
		fprintf(dosya,"%s \n",ad);
	
		baslangic[i]=ftell(dosya);
	}	
	
	fclose(dosya);
	
	dosya=fopen("Ogrenciler.txt","r");
	
	int k=0,m,kelime,a=0;

	
	printf("\n ekrana kac kelime yazilmasini istersiniz=");
	scanf("%d",&kelime);
	
	rewind(dosya);
	
	while(a<kelime)
{
	
		fgets(ad,2000,dosya);

        fseek(dosya,baslangic[k],0);
		printf("\n %s",ad);

		a++;
		for( m=0;ad[m]!='\0';m++)          
     {
	 }   
//   printf("\n m=%d ",m-2);       m de�eri ismin ka� harf oldu�u g�sterir,bize d�ng�den ��kan m'nin iki eski�i harf say�s�n� verir;
     n=k;
	 k=k+m-2;
	 
	 

	if(k>adet-1)
	{
		k=k-adet;         
	}
		 
	if(n==k)
	{
	k+=1;	
	}

	if(k>adet-1)
	{                  // �nceki ve sonraki isim ayn� olma durumunda indexse 1 ekledi�imiz i�in,adet say�s�ndan fazla bir k de�eri ��karsa
		k=k-adet;       // diye kontrol ediyorum.
	}
	
	if(n==k)     // 1 artt�r�lan k de�eri adet-1 sayisinden  b�y�k olursa yeni buldu�umuz k �nceki k'a de�erine e�it olabilir
	{            // -1 olmas�n�n nedeni indeximizi 0 dan ba�latmam�z
	k+=1;	     // bu y�zden tekrar kontrol ettim.
	}  
	
}

}
