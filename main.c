/*derslere bağlı kalmadan çalışma seansında bu repoyu buldum, minik değişiklik sırası
*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"


struct Personel{
	char isim[20];
	char soyisim[20];
	int personel_no;
	char unvan[8];
	int win;
};

int main() {
	int persay = 1;
	struct Personel personel[persay]; /*hardcoded sevmiyorum*/     //Burada kac tane personel girecegimizi belirttik.
	int *ptr = &personel;
	int i;

	for(i=0;i<persay;i++)
	{
		printf("%d.karakterinizin bilgilerini giriniz:(AD-SOYAD-oyun numarasi-nickname)\n",i+1);
		scanf("%s %s %d %s",&personel[i].isim,&personel[i].soyisim,&personel[i].personel_no,personel[i].unvan); /* araştırmam gereken bir şey var mesela burada scanf ile array için pointer lazım değil gibi gerekmediğine dair örnek gördüm */
			/*kesinlikle &personel[i].isim şeklinde yazmak gerekiyor program ilk inputu alıp sırra kadem basıyor */
			/* pointerlara bakayım sonra normal bir arrayde sorun olmuyor belki ama struct elemanında çalışmadı*/
	
	}
	oyuncuBilgileri(persay, ptr);
	
	while (1)
	{
		int secim1,secim2,secim3,secim4,secim5,secim6;
		printf("menu\n 1-Play game \n 2-exit \n 3-oyuncu bilgileri ");		
		scanf("%d",&secim1);
		if(secim1==1)
		{
			
			printf("welcome to zammınir rift\n");    /*printf yerine print yazmışım beynimden pythonu sökmek istiyorum  en azından yalandan da olsa diplomayı alana kadar */
			printf("press any key to start\n");
			system("pause");
			system("color fc");
			int randomNumba=43,elektrikSayaci; /*canım sıkılıyor haliyle içimi gunlugüme değil buraya döküyorum*/
			time_t taym1;
			printf("hello %s your first mission is guess the number \n",&personel[0].unvan);
			printf("psst its between 1-43\n");				
			srand ( (unsigned) time (&taym1));
			elektrikSayaci = rand()%43;
			printf("%d",elektrikSayaci); /*bi kontrol için bu satir aktifti */
			while(1){
				printf("enter your destiny number until you find it\n");
				scanf("%d",&secim2);
				
				if(secim2==elektrikSayaci)
				{
					printf("tebrikler sayiyi buldun\n");
					break; /* */
					
				}
				else{
					printf("cilekleri sekere buladin mi? \n BULAMADIN \n");
				}
			}	
		
		
		}
		else if(secim1==2)    /* usta else if'e elif dedin */
		{
			/*goto exit;*/
			return 0;
		}
		else if(secim1==3)
		{
			oyuncuBilgileri(persay);		
		}		
		else
		{
			system("cls");
			continue;
		}
		
	}	
	
	
	
	
/*exit:	*/
	return 0;
}
/* Yapı (Struct) : Birbirleriyle ilişkili değişkenlerin, bir isim altında toplanmasına yapı adı verilir. 
Yapılar, değişik veri tiplerinde elemanlar içerebilirler. */



void oyuncuBilgieri(int persay,int hoba)  /*üşenmezsem persay değil selected character gibi bir değişkenle değişecek */
{
	
	system("CLS");                                           //Bilgileri ekrana yazmadan daha once girilen bilgileri temizlemeye yarar.stdlib kutuphanesi icerisindedir.
	printf("*******************************OYUNCU BILGILERI**************************************\n");
	int i;
	for(i=0;i<persay;i++)
	{
		printf("%d.personelin bilgileri\nAd:%s\nSoyad:%s\nPersonel Numarasi:%d\n Nick: %s",i+1,&hoba[i].isim,&hoba[i].soyisim,&hoba[i].personel_no,&hoba.unvan);
	}
    printf("****************************************************************************************");
	
	system("pause");
	
}
