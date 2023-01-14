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
	
	//Deðiþkenler int main den hemen sonra ya da önce gösterilir(int ile kullanýlýr ve noktalý virgül gelir sonuna)
	
	
	printf("MUSTERI NUMARASI GIRINIZ:");
	scanf("%d",&musterinumarasi);
	
	if(musterinumarasi==12){
		printf("ISLEM SECINIZ: \n");
		printf("1-PARA CEKME \n");
		printf("2-PARA YATIRMA\n");
		printf("3-BAKIYE SORGULAMA \n");
		printf("4-KART IADESI \n");
		scanf("%d",&islem);
		
		// if koþul ifadesi demek eðer þart saðlanmýyorsa gerçekleþmez
		// if de birden fazla satýr olduðunda süslü parantez kullanýr {} if deki yapýlýcak iþlem parantesiz içine yazýlýr.
	
	switch(islem)
	
	   //switch yapýsý þýklýdýr.Yukarýda seçtiðin iþleme göre o iþlemin yapýlmasýný saðlar.
	   // Þýklarda case ifadesi kullanýlýr ve sonuna iki nokta gelir.
	   //her case ve if ifadesinin sonuna break gelir. Sonuna da ; gelir (break;) 
	   //switch ifadesinin sonuna default ifadesi gelir ve sonuna da : gelir (default:)
	   
	{
	case 1:
		printf("BAKIYENIZ:%d\n",bakiye);
		printf("CEKILECEK TUTARI GIRINIZ:");
		scanf("%d",&tutar);
		
	if (tutar>bakiye)
	{   printf("YETERLÝ BAKÝYENÝZ YOK");
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
		
		//Else yapýsý if den sonra gelir. Eðer ifadedeki if koþulu saðlanmýyorsa elsedeki iþlem gerçekleþir 
		
		
	getch();
	return 0;

}
