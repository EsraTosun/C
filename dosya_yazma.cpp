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
//   printf("\n m=%d ",m-2);       m deðeri ismin kaç harf olduðu gösterir,bize döngüden çýkan m'nin iki eskiði harf sayýsýný verir;
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
	{                  // önceki ve sonraki isim ayný olma durumunda indexse 1 eklediðimiz için,adet sayýsýndan fazla bir k deðeri çýkarsa
		k=k-adet;       // diye kontrol ediyorum.
	}
	
	if(n==k)     // 1 arttýrýlan k deðeri adet-1 sayisinden  büyük olursa yeni bulduðumuz k önceki k'a deðerine eþit olabilir
	{            // -1 olmasýnýn nedeni indeximizi 0 dan baþlatmamýz
	k+=1;	     // bu yüzden tekrar kontrol ettim.
	}  
	
}

}
