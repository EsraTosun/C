#include<stdio.h>

int *pointer;

void kosegenlerToplami()
{
		int m=0,*ptr1,dizi[10],toplam=0;
		ptr1=dizi;

		for(int i=0;i<10*10;i++)
	{
		if(i%11==0 ) //1. köþegen
		{
			*(ptr1+m)=*(pointer+i);
			toplam+=*(pointer+i);
			m++;
		}
		
	}
	printf("\n kosegenin elemanlari:");
	for(int i=0;i<10;i++)
	{
		printf(" %d ",*(ptr1+i));
	}
	printf("\n kosegenin sayilarinin toplami: %d ",toplam);
	
}

void kosegenlerCarpimi()
{
		int carpim=1;

		for(int i=0;i<10*10;i++)
	{
		if(i%11==0 ) //1. köþegen
		{
			carpim*=*(pointer+i);
		}
		
	}
	
	printf("\n kosegenin sayilarinin carpimi: %d ",carpim);
	
}

void matrisiKucuktenBuyugeSiralama()
{
	int yedek,minidex;
	
	for(int i=0;i<10*10-1;i++)
	   {
	   	minidex=i;
	   	
	   	for(int j=i+1;j<10*10;j++)
	   	{
	   		if (*(pointer+j)<*(pointer+minidex))
	   		 minidex=j;
	    }
		   
		   yedek=*(pointer+i);
		   *(pointer+i)=*(pointer+minidex);
		   *(pointer+minidex)=yedek;
		   
		   } 
		   
		   for(int i=0;i<10*10;i++)
	{
		printf("%d ",*(pointer+i));
	}
}

int main()
{
	int matris[10][10]={{3,128,-7,178,271,-999,33,1,9,15},{58,0,11,7,21,57,30,20,12,555},{-383,5,63,99,2,6,10,-10,31,41},
	{8,32,73,4,94,86,79,184,370,-275},{44,1234,531,663,193,6418,3190,-3478,1298,6519},{-17342,3467,16,6901,81,21,95,25,125,64},
	{999,921,9735,-9999,100,130,300,-100,4848,1212},{7676,9898,8989,5454,4545,9136,-64278,-4545,-5454,-9898},
    {-121212,121212,43241,7547,9543,55555,1000,2000,-12345,-9876},{3232,13,26,39,101,155,103,171,721,149}
	};
	int k=0;
	
	pointer=&matris[0][0];
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			
			printf("  %d",*(pointer+k));
			k++;

		}
		printf("\n");
	}  
	
	kosegenlerToplami();	
	kosegenlerCarpimi();
	
	
	printf("\n \n");
	
	matrisiKucuktenBuyugeSiralama();
	
	return 0;
}
