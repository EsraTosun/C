#include<stdio.h>
#include<conio.h>

int sesliharfsilen(char);

int main()
{
	char s[100],t[100];
	int n=0;
	
	printf("metini giriniz:");
	gets(t);
	
	for(int d=0;t[d]!='\0';d++)
	{
		if(sesliharfsilen(t[d])==0)
		{
			s[n]=t[d];
			n++;
		}
	}
	
	s[n]='\0';

     printf("sesli harf silindikten sonra dizi: %s ",s);
	
	getch();
	return 0;
}

int sesliharfsilen(char d)
{
	if(d=='a' || d=='A' || d=='e' || d=='E' || d=='i' || d=='I' || d=='o' || d=='O'|| d=='u' || d=='U' )
	return 1;
	
	else
	return 0;
	
}
