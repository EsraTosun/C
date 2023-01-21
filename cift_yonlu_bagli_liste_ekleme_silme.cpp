#include<stdio.h>
#include<stdlib.h>


typedef struct Dugum
{
	int sayi;
	struct Dugum*sonraki;
	struct Dugum*onceki;//cift yonlu oldugu için
}Dugum;

Dugum*ilk=NULL; //global tanýmlamak icin
Dugum*son=NULL;
Dugum*gecici=NULL;

struct Dugum*dugumolustur(int veri)
{
	struct Dugum*yeni=(Dugum*)malloc(sizeof(Dugum));
	yeni->sayi=veri;
	yeni->sonraki=NULL;
	yeni->onceki=NULL;
	
	return yeni;
}




void sonaekle(int veri){
	Dugum*sona=dugumolustur(veri);


	 if(ilk==NULL){
        	ilk=sona;
        	
		}
		
		else
		{
			gecici=ilk;
			while(gecici->sonraki!=NULL){
				gecici=gecici->sonraki;
			}
			
			sona->onceki=gecici;
			gecici->sonraki=sona;
		}
		
		
}

void basaekle(int veri){
	Dugum*basa=dugumolustur(veri);
	
	 if(ilk==NULL)
        {
        ilk=basa;
		return;	
		}
		
		
        	ilk->onceki=basa;
        	basa->sonraki=ilk;
        	ilk=basa;
		
}

void arayaekle(int onune,int ekle){
	Dugum*araya=dugumolustur(ekle);
	gecici=ilk;
	Dugum*once=NULL;
	if(ilk==NULL){
		ilk=araya;
	}
	
	else if(ilk->sayi==onune){
		basaekle(ekle);
	}
	else{


	while(gecici->sonraki!=NULL){
		if(gecici->sayi==onune)
		{
			once=gecici->onceki;
			break;
		}
		gecici=gecici->sonraki;
	}
	gecici->onceki=araya;
	araya->sonraki=gecici;
	araya->onceki=once;
	once->sonraki=araya;
}

}


void bastansil(){
	
	if(ilk==NULL){
	printf("Liste zaten bos.");
	return ;
	}	
	
	if(ilk->sonraki==NULL){
		free(ilk);
		ilk=NULL;
		return ;
	}
	
	struct Dugum*ikinci=ilk->sonraki;
	free(ilk);
	ikinci->onceki=NULL;
	ilk=ikinci;
	
}

sondansil(){
	
	if(ilk->sonraki==NULL){
	bastansil();
		return 0;
	}

	
	gecici=ilk;
	while(gecici->sonraki!=NULL){
		gecici=gecici->sonraki;
	}
	Dugum*oncesi=gecici->onceki;
	free(gecici);
	oncesi->sonraki=NULL;
	
}


aradansil(int silinecek){
	gecici=ilk;
	while(gecici->sonraki!=NULL){
		if(gecici->sayi==silinecek){
			break;
		}
		gecici=gecici->sonraki;
	}
	
	Dugum*sonrasi=gecici->sonraki;
	Dugum*oncesi=gecici->onceki;
	
	free(gecici);
	oncesi->sonraki=sonrasi;
	sonrasi->onceki=oncesi;
	
}




void yazdir(){
	Dugum*gecici=ilk;
	while(gecici!=NULL)
	{
		printf(" %d  ",gecici->sayi);
		gecici=gecici->sonraki;
	}
}


int main()
{
    int i,secim,sayi,sayi2;
    
    while(1){
    	printf("\n1-sona ekleme \n 2-basa ekleme\n 3-araya ekleme\n4-bastan sil\n5-sondansil\n6-aradan sil");
    	printf("\n Secim : ");
    	scanf("%d",&secim);
    	
    	switch(secim){
    		
	
    	case 1:
	    printf("\nEklenecek sayi : ");
    	scanf("%d",&sayi);
		sonaekle(sayi);	
		yazdir();
		break;
		
		case 2:
	    printf("\nEklenecek sayi : ");
    	scanf("%d",&sayi);
		basaekle(sayi);	
		yazdir();
		break;
		
		case 3:
		printf("\n hangi elemanin onune : ");
    	scanf("%d",&sayi2);	
			
	    printf("\nEklenecek sayi : ");
    	scanf("%d",&sayi);
		arayaekle(sayi2,sayi);	
		yazdir();
		break;
		
		case 4:
		
		bastansil();	
		yazdir();
		break;
		
		
		case 5:
		sondansil();	
		yazdir();
		break;
		
		
		case 6:
			
	    printf("\nsilinecek sayi : ");
    	scanf("%d",&sayi);
		aradansil(sayi);	
		yazdir();
		break;
	}
	}
		
	return 0;
}
