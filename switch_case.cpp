#include<stdio.h>
#include<conio.h>

int main(){
    
	int tutar;
	int bakiye=5000;
	int islem;
	int musterinumarasi;
	int ustlimit=2000;
	
	//Değişkenler int main den hemen sonra ya da önce gösterilir(int ile kullanılır ve noktalı virgül gelir sonuna)
	
	
	printf("MUSTERI NUMARASI GIRINIZ:");
	scanf("%d",&musterinumarasi);
	
	if(musterinumarasi==12){
		printf("ISLEM SECINIZ: \n");
		printf("1-PARA CEKME \n");
		printf("2-PARA YATIRMA\n");
		printf("3-BAKIYE SORGULAMA \n");
		printf("4-KART IADESI \n");
		scanf("%d",&islem);
		
		// if koşul ifadesi demek eğer şart sağlanmıyorsa gerçekleşmez
		// if de birden fazla satır olduğunda süslü parantez kullanır {} if deki yapılıcak işlem parantesiz içine yazılır.
	
	switch(islem)
	
	   //switch yapısı şıklıdır.Yukarıda seçtiğin işleme göre o işlemin yapılmasını sağlar.
	   // Şıklarda case ifadesi kullanılır ve sonuna iki nokta gelir.
	   //her case ve if ifadesinin sonuna break gelir. Sonuna da ; gelir (break;) 
	   //switch ifadesinin sonuna default ifadesi gelir ve sonuna da : gelir (default:)
	   
	{
	case 1:
		printf("BAKIYENIZ:%d\n",bakiye);
		printf("CEKILECEK TUTARI GIRINIZ:");
		scanf("%d",&tutar);
		
	if (tutar>bakiye)
	{   printf("YETERLİ BAKİYENİZ YOK");
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
		
		//Else yapısı if den sonra gelir. Eğer ifadedeki if koşulu sağlanmıyorsa elsedeki işlem gerçekleşir 
		
		
	getch();
	return 0;

}
