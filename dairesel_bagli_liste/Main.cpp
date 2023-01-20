#include<stdio.h>
#include<stdlib.h>

typedef struct Dugum
{
	char *adi;
	int numara,vize,final;
	Dugum *sonraki;
}Dugum;

FILE *dosya=fopen("ogrenci.txt","r");

Dugum *ilkDugum=NULL;
Dugum *geciciDugum=NULL;
Dugum *oncekiDugum=ilkDugum;
char*format="\n %d\t  %s \t \t %d\t \t %d  \t \t \t \t \t";
	int numara,vize,final,index=0,i=1,ilerle;
	char adi[20];

	
listele()
{
	geciciDugum=ilkDugum;
	do
	{
		printf(format,geciciDugum->numara,geciciDugum->adi,geciciDugum->vize,geciciDugum->final);
		geciciDugum=geciciDugum->sonraki;
	}while(geciciDugum!=ilkDugum);
}

listeyeekle()
{
rewind(dosya);
	
	while(!feof(dosya))
	{
		fscanf(dosya,format,&numara,&adi,&vize,&final);
		Dugum *yeniDugum=(Dugum*) malloc(sizeof(Dugum));
		yeniDugum->numara=numara;
		yeniDugum->adi=adi;
		yeniDugum->vize=vize;
		yeniDugum->final=final;
		
		if(ilkDugum==NULL)
		{
			ilkDugum=yeniDugum;
			ilkDugum->sonraki=ilkDugum;
		}
		else
		{
			geciciDugum->sonraki=yeniDugum;
			yeniDugum->sonraki=ilkDugum;
		}
		geciciDugum=yeniDugum;
		index++;
	}	
}

OyuncuCikar()
{
	while(i!=index)
	{
		printf("\n \n");
		
		for(int k=0;k<ilerle;k++)
		{
			oncekiDugum=geciciDugum;
			geciciDugum=geciciDugum->sonraki;
		}
	
		if(ilkDugum==geciciDugum)
		{	
		ilkDugum=ilkDugum->sonraki;
		ilerle=(geciciDugum->numara)%10;
		free(oncekiDugum);
	    }
	    
	    else
	    {
	    	oncekiDugum->sonraki=geciciDugum->sonraki;
	    	ilerle=(geciciDugum->numara)%10;
	    	free(geciciDugum);
		}
		listele();
		i++;
	}
}

int main()
{	
	if(dosya==0)
	{
		printf("dosya bulunamadi");
	}
	listeyeekle();
	listele();
	
	geciciDugum=ilkDugum;
	ilerle=(geciciDugum->numara)%10;
	
	OyuncuCikar();
	
	printf("\n \n yarismayi %d  %s  %d  %d kazanmistir.",ilkDugum->numara,ilkDugum->adi,ilkDugum->vize,ilkDugum->final);
	
	return 0;
}


