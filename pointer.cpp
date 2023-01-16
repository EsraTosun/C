#include<stdio.h>
#include<stdlib.h>

int *pointer,adet;

int kontrol(int a,int i,int dizi[])
{
	int k=1;
	
	while(k!=0)
{
	k=0;
	
	for(int j=0;j<i;j++)
	{
		if(dizi[j]==a)
		{
			a=rand()%98+1;
			k++;
		}
	} 
}

     return a;
}

void kucuktenbuyuge(int *pointer,int adet)
{
	
	int dizi2[100];
	
	for(int i=0;i<adet;i++)
	{
		dizi2[i]=*(pointer+i);
		printf("%d ",*(pointer+i));
	}
	
	printf("\n");
	
	for(int i=0;i<adet;i++)
	{
		printf("%d ",*(pointer+i));
	}
	
	int yedek,minidex,*ptr;
	ptr=dizi2;
	
	for(int i=0;i<adet-1;i++)
	   {
	   	minidex=i;
	   	
	   	for(int j=i+1;j<adet;j++)
	   	{
	   		if (*(ptr+j)<*(ptr+minidex))
	   		 minidex=j;
	    }
		   
		   yedek=*(ptr+i);
		   *(ptr+i)=*(ptr+minidex);
		   *(ptr+minidex)=yedek;
		   
		   } 
		   
		   printf("\n");
		   for(int i=0;i<adet;i++)
	{
		printf("%d ",*(ptr+i));
	}
	
	printf("\n");
	
	for(int i=0;i<adet;i++)
	{
		printf("%d ",*(pointer+i));
	}
}

void buyuktenkucuge(int *pointer,int adet)
{
	int dizi2[100];
	
	for(int i=0;i<adet;i++)
	{
		dizi2[i]=*(pointer+i);
			printf("%d ",*(pointer+i));
	}
	
	printf("\n");
	
	for(int i=0;i<adet;i++)
	{
		printf("%d ",*(pointer+i));
	}
	
	int yedek,maximum,*ptr;
	ptr=dizi2;
	
for(int i=0;i<adet-1;i++)
	   {
	   	maximum=i;
	   	
	   	for(int j=i+1;j<adet;j++)
	   	{
	   		if (*(ptr+j)>*(ptr+maximum))
	   		 maximum=j;
		   }
		   
		   yedek=*(ptr+i);
		   *(ptr+i)=*(ptr+maximum);
		   *(ptr+maximum)=yedek;
		   
		   } 
		   printf("\n");
		   
		   for(int i=0;i<adet;i++)
	{
		printf("%d ",*(ptr+i));
	}	
	
	printf("\n");
	
	for(int i=0;i<adet;i++)
	{
		printf("%d ",*(pointer+i));
	}
}


int yenidiziolusturma()
{
	int dizi1[1000],a;
	
		printf("dizinizde kac eleman olmasini istersiniz=");
	        scanf("%d",&adet);
	        
	        if(adet<2 || adet>99)
	{
		printf("dizinizin eleman sayisi 99 dan fazla veya 2 den az olamaz.Cunku diziniz 0 ve 100 arasi farkli degerler alacak ve siralama yapilacak ");
		return 0;
	}
	
	for (int i=0;i<adet;i++)
	{
		dizi1[i]=rand()%98+1;  //0 ve 100 arasýnda olmasý için %98 alýrýz ve 0 olmamasý için 1 eklenir
		a=dizi1[i];
		
		dizi1[i]=kontrol(a,i,dizi1);
		
		printf("\n dizinin %d. elemani = %d",i+1,dizi1[i]);
	}
	
	pointer=dizi1;
	
}

int main()
{
	int dizi[1000],a;
	
	printf("dizinizde kac eleman olmasini istersiniz=");
	scanf("%d",&adet);
	
	if(adet<2 || adet>99)
	{
		printf("dizinizin eleman sayisi 99 dan fazla veya 2 den az olamaz.Cunku diziniz 0 ve 100 arasi farkli degerler alacak ve siralama yapilacak ");
		return 0;
	}
	
	for (int i=0;i<adet;i++)
	{
		dizi[i]=rand()%98+1;  //0 ve 100 arasýnda olmasý için %98 alýrýz ve 0 olmamasý için 1 eklenir
		a=dizi[i];
		
		dizi[i]=kontrol(a,i,dizi);

		printf("\n dizinin %d. elemani = %d",i+1,dizi[i]);
	}
	
	pointer=dizi;
	
	
	while(1)
	{
	
	int islem,yedek,minidex,maximum;
	
	printf("\n \n \n \n ISLEM SECINIZ: \n");
	    printf("0- cikis yapilacak\n");	
		printf("1- diziyi kucukten buyuge siralama \n");
		printf("2- diziyi buyukten kucuge siralama\n");
		printf("3- yeni bir dizi olusturulacak\n");	
		scanf("%d",&islem);
		
		switch(islem)
	
	{
		case 0:
	     	return 0;
		break;	
		
		case 1:
	        	kucuktenbuyuge(pointer,adet);
		break;
		
		case 2:
		     	buyuktenkucuge(pointer,adet);
		break;
		
		case 3:
			yenidiziolusturma();
	    break;
	  
	  default:
	  printf("\n Hatali islem girdiniz tekrar deneyiniz.");		
	    
			
	}
		
    }
	
	
	return 0;
}
