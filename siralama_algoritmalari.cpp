#include<stdio.h>
#include<stdlib.h>

int dizi[100000],adet,*pointer,bas,orta,son;

insertionSort()
{
    int dizi2[100],j,mevcut;
	
	for(int i=0;i<adet;i++)
	{
		dizi2[i]=*(pointer+i);
	}
 
 for (int i=1;i<adet;i++) 
 {
      mevcut= dizi2[i];
      j =i-1;
        while (j>=0 && dizi2[j]>mevcut) 
     {
        dizi2[j + 1] = dizi2[j];
        j =j --;
     }
    dizi2[j+1]=mevcut;
 }
 
 for(int i=0;i<adet;i++)
	{
		printf("%d ",dizi2[i]);
	}
}

birlestir(int bas,int orta,int son)
{
	int i,j,k,dizi2[100000];
	
	for(i=bas;i<=son;i++)
		dizi2[i]=dizi[i];
		
		i=bas;
		j=orta+1;
		k=bas;
		
		while(i<=orta && j<=son)
		{
			if(dizi2[i]<=dizi[j])
			dizi[k++]=dizi2[i++];
			
			else
			dizi[k++]=dizi2[j++];
		}
		while(i<=orta)
		{
			dizi[k++]=dizi2[i++];
		}
	    
	
}

bol(int bas,int orta)
{
	if(bas<son)
	{
		orta=(bas+son)/2;
		bol(bas,orta);
		bol(orta+1,son);
		birlestir(bas,orta,son);
	}
}



selectionSort()
{
	int dizi2[100];
	
	for(int i=0;i<adet;i++)
	{
		dizi2[i]=*(pointer+i);
	}
	
	printf("\n");
	
	int yedek,minidex;
	
	for(int i=0;i<adet-1;i++)
	   {
	   	minidex=i;
	   	
	   	for(int j=i+1;j<adet;j++)
	   	{
	   		if ((dizi2[j])<(dizi2[minidex]))
	   		 minidex=j;
	    }
		   
		   yedek=dizi2[i];
		   dizi2[i]=dizi2[minidex];
		   dizi2[minidex]=yedek;
		   
		   } 
		   
		   for(int i=0;i<adet;i++)
	{
		printf("%d ",dizi2[i]);
	}
}

int main()
{
	printf("\n dizinizin kac elemanli olsun=");
	scanf("%d",&adet);
	
	for(int i=0;i<1000;i++)
	{
		dizi[i]=rand()%50;
	}
	
	pointer=dizi;
	
	selectionSort();
//	printf("\n \n");
//	insertionSort();
/*	
	bas=dizi[0];
	son=dizi[adet-1];   */
	
//	bol(bas,son);
	
	return 0;
}
