#include<stdio.h>
#include<conio.h>
#include<math.h>

void hesapla(long long int sayi)
{
	long long int dizi[100000],j=0,i,sonuc;
	
	while(sayi>0)
	{
	    sonuc=sayi&1;
		dizi[j]=sonuc;
		sayi=sayi>>1;
		j++;
	}
	
	for( i=j-1;i>=0;i--)
	{
		printf("%d",dizi[i]);
	}
	
	
}

void geridonusum(long long int sayi)
{
	long long int sonuc1=0,sonuc2=0,i=0;

	while(sayi>0)
	{	
		sonuc1=sayi&1;
		sonuc2+=sonuc1*pow(2,i);
		sayi>>=1;
		i++;
	}
	
	printf("  10'luk tabanda karsiligi= %d'dir.\n ",sonuc2);
}

void indexbulma(int eleman,int sayi,int i)
{
	int dizi1[100000],dizi2[100000],j=0,k=0,m=0,sonuc,d;
	
	d=eleman;
	
	while(sayi>0)
	{
	    sonuc=sayi&1;
		dizi1[j]=sonuc;
		sayi=sayi>>1;
		j++;
	}
	
	while(eleman>0)
	{
	    sonuc=eleman&1;
		dizi2[k]=sonuc;
		eleman=eleman>>1;
		k++;
	}
	if(j==k)
	{
	for(int n=0;n<j-1;n++)
	{
		if(dizi1[n]==dizi2[n])
		m++;
	}
	
	if(m==j-1)
	printf("\n %d sayisi %d'inci siradadir",d,i+1);
	
    }
}


int main()
{
	int dizi[]={2,1,4000,50000,6000,3,4,8,12,10,30000,5,50,60,90,100};
	long int sayi1=0,sayi2=0;
	long long int sayi3=0,c,deger,eleman,arasayi;
	long int a=0,b;
	
	for(int i=0;i<16;i++)
	{
		if(dizi[i]<16)
		{
			printf("\n %d sayisinin binary karsiligi=",dizi[i]);
			hesapla(dizi[i]);
			sayi1+=dizi[i];
			printf("\n birlesmis hali=");
			hesapla(sayi1);
			a=sayi1;
			sayi1<<=4;
		
		}
	}
	
	printf("\n \n 4'luk bitlerin birlestirilmis hali=");
	hesapla(a);
	
	printf("\n");
	
	while(a>0)
	{
		printf("\n");
		deger=a&15;
		hesapla(deger);
		geridonusum(deger);
		a>>=4;
	}
	
	printf("\n \n \n");
	
	for(int i=0;i<16;i++)
	{
		if(15<dizi[i] && dizi[i]<256)
		{
		    printf("\n %d sayisinin binary karsiligi=",dizi[i]);
			hesapla(dizi[i]);
			sayi2+=dizi[i];
			printf("\n birlesmis hali=");
			hesapla(sayi2);
			b=sayi2;
			sayi2<<=8;	
		}
	}
	
	printf("\n \n 8'luk bitlerin birlestirilmis hali=");
	hesapla(b);
	
		printf("\n");
	
	while(b>0)
	{
		printf("\n");
		deger=b&255;
		hesapla(deger);
		geridonusum(deger);
		b>>=8;
	}
	
	printf("\n \n \n");
	
		for(int i=0;i<16;i++)
	{
		if(255<dizi[i] && dizi[i]<65536)
		{
			printf("\n %d sayisinin binary karsiligi=",dizi[i]);
			hesapla(dizi[i]);
			sayi3+=dizi[i];
			printf("\n birlesmis hali=");
			hesapla(sayi3);
			c=sayi3;
			sayi3<<=16;
		}
	}
	
	printf("\n \n 16'lik bitlerin birlestirilmis hali=");
	hesapla(c);
	
	printf("\n");
	
	while(c>0)
	{
		printf("\n");
		deger=c&65535;
		hesapla(deger);
		geridonusum(deger);
		c>>=16;
	}

      printf("\n \n hangi elemaninin sirasini bulmak istersiniz:");
      scanf("%d",&eleman);
      
      for(int i=0;i<16;i++)
    {
      	arasayi=dizi[i];
      	indexbulma(eleman,arasayi,i);
    }
	
	getch();
	return 0;
}
