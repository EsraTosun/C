#include<stdio.h>

void hanoi(int n, char kaynak, char hedef, char aralik)
{
	if (n == 1)
	{
	printf("\n1 aDiskler %d kaynaktan %c Hedef: %c",n,kaynak,hedef);
		return;
	}
	//printf("\t %d",n);
	hanoi(n - 1, kaynak, aralik, hedef);
	//	printf("\t2 %d",n);

	printf("\n3 Diskler %d kaynaktan %c Hedef: %c",n,kaynak,hedef);
	hanoi(n - 1, aralik, hedef, kaynak);
}
int main()
{
	int sayi;
	printf("Bir sayi degeri giriniz: ");
	scanf("%d",&sayi);
    hanoi(sayi, 'A', 'C', 'B');
	return 0;
}

