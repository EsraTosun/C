#include<stdio.h>
#include<conio.h>

/*  int tutar;
	int bakiye=5000;
	int islem;
	int musterinumarasi;
	int ustlimit=2000;  */

int main(){
    
	int tutar;
	int bakiye=5000;
	int islem;
	int musterinumarasi;
	int ustlimit=2000;
	
	//De�i�kenler int main den hemen sonra ya da �nce g�sterilir(int ile kullan�l�r ve noktal� virg�l gelir sonuna)
	
	
	printf("MUSTERI NUMARASI GIRINIZ:");
	scanf("%d",&musterinumarasi);
	
	if(musterinumarasi==12){
		printf("ISLEM SECINIZ: \n");
		printf("1-PARA CEKME \n");
		printf("2-PARA YATIRMA\n");
		printf("3-BAKIYE SORGULAMA \n");
		printf("4-KART IADESI \n");
		scanf("%d",&islem);
		
		// if ko�ul ifadesi demek e�er �art sa�lanm�yorsa ger�ekle�mez
		// if de birden fazla sat�r oldu�unda s�sl� parantez kullan�r {} if deki yap�l�cak i�lem parantesiz i�ine yaz�l�r.
	
	switch(islem)
	
	   //switch yap�s� ��kl�d�r.Yukar�da se�ti�in i�leme g�re o i�lemin yap�lmas�n� sa�lar.
	   // ��klarda case ifadesi kullan�l�r ve sonuna iki nokta gelir.
	   //her case ve if ifadesinin sonuna break gelir. Sonuna da ; gelir (break;) 
	   //switch ifadesinin sonuna default ifadesi gelir ve sonuna da : gelir (default:)
	   
	{
	case 1:
		printf("BAKIYENIZ:%d\n",bakiye);
		printf("CEKILECEK TUTARI GIRINIZ:");
		scanf("%d",&tutar);
		
	if (tutar>bakiye)
	{   printf("YETERL� BAK�YEN�Z YOK");
	    break;
		}	
	if(tutar>ustlimit)
	{
		printf("UST LIMITI ASTINIZ! UST LIMIT:%d",ustlimit);
		break;
		}
		bakiye-=tutar;
		printf("YENI BAKIYENIZ:%d",bakiye);
		break;
	case 2:
		printf("BAKIYENIZ:%d\n",bakiye);
		printf("YATIRMAK ISTEDIGINIZ TUTARI GIRINIZ:");
		scanf("%d",&tutar);
		bakiye+=tutar;
		printf("YENI BAKIYENIZ:%d",bakiye);
		break;
	case 3:
		printf("BAKIYENIZ:%d",bakiye);
		break;
	case 4:
		printf("KARTINIZI ALMAYI UNUTMAYINIZ.\n ---IYI GUNLER---");
		break;
		
	 	default:
	 	printf("HATALI ISLEM, TEKRAR DENEYINIZ...");
	 	
		
	}
	}
	else
		printf("MUSTERI NUMARASINI HATALI GIRDINIZ		");
		
		//Else yap�s� if den sonra gelir. E�er ifadedeki if ko�ulu sa�lanm�yorsa elsedeki i�lem ger�ekle�ir 
		
		
	getch();
	return 0;

}
