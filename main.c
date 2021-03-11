#include <stdio.h>
#include<stdlib.h>

struct Personel{
	char isim[20];
	char soyisim[20];
	int personel_no;
};

int main() {

	struct Personel personel[3];                           //Burada kac tane personel girecegimizi belirttik.
	int i;

	for(i=0;i<3;i++)
	{
		printf("%d.personelin bilgilerini giriniz:(AD-SOYAD-PERSONEL NUMARASI)\n",i+1);
		scanf("%s %s %d",&personel[i].isim,&personel[i].soyisim,&personel[i].personel_no);
	}
	
	system("CLS");                                           //Bilgileri ekrana yazmadan daha once girilen bilgileri temizlemeye yarar.stdlib kutuphanesi icerisindedir.
	printf("*******************************PERSONEL BILGILERI**************************************\n");
		for(i=0;i<3;i++)
	{
		printf("%d.personelin bilgileri\nAd:%s\nSoyad:%s\nPersonel Numarasi:%d\n",i+1,personel[i].isim,personel[i].soyisim,personel[i].personel_no);
	}
    printf("****************************************************************************************");
	return 0;
}
/* Yapı (Struct) : Birbirleriyle ilişkili değişkenlerin, bir isim altında toplanmasına yapı adı verilir. 
Yapılar, değişik veri tiplerinde elemanlar içerebilirler. */
