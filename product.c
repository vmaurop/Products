#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct dedomena
{
	char name[25];                            
    float timh;
	int apothema;                                //domh dedomenwn
};

struct dedomena proionta[20] = {
	{"eggs",3,12},
	{"milk",1.2,12},
	{"tomato",0.9,2},
	{"oil",5,14},
	{"chocolate",1.46,18},
	{"potato",1.1,22},
	{"salad",3.5,20},
	{"wine",20,15},                               //kataxwrisi dedomenwn mesa sto programma {onama,timh,apothema}
	{"almonds",5.1,4},
	{"beans",4.1,6},
	{"honey",12,15},
	{"fish",7,5},
	{"meat",8,8},
	{"rice",1.31,7},
	{"spaghetti",2,25},
	{"cheeses",4,21},
	{"bread",1,15},
	{"jam",3.3,8},
	{"salt",0.4,17},
	{"coffee",3,11 }
};


//1
void min_product()                                         //sunartisi upologismou onoma proiontos me ligotera komatia
{
	int i; 
	int min = proionta[0].apothema;                        //thetoume to prwto proion me elaxisto apothema 


    printf("to proion me ta ligotera komatia\n");
	for (i = 0; i<20; i++)
	{
		if (proionta[i].apothema<min)
			min = proionta[i].apothema;                    //sugrinoume ola ta proionta ksekinontas apo to prwto pou thesame ws elaxisto apothema gia na vroume to min
	}

	for (i = 0; i<20; i++)
	{
		if (min == proionta[i].apothema)
			printf("%s\n", proionta[i].name);      //osa proionta einai isa me to min ta typwnoume(mporei na einai perisotera apo ena)

	}

}
//2
void less_than()                                             //sunartisi onomatos prooiontwn me to polu 10 komatia
{
	int i;
    printf("proionta pou exoune apothema katw apo 10\n");
	for (i = 0; i<20; i++)                                    
	{
		if (proionta[i].apothema <= 10)                        //opoia proionta exoune apothema katw apo 10 typwseta (onomastika)
			printf("%s\n", proionta[i].name);
	}
}
//3
void sum_price()                                                //sunartisi sunolikis aksias emporeumatos
{
	int i;
	float sum = 0;                                              //thetoume sunoliki aksia miden
	for (i = 0; i<20; i++)
	{
		sum =sum + proionta[i].timh*proionta[i].apothema;           // apo 0...19 h sunoliki aksia einai h timh epi to apothema
	}
	printf("H Synolikh axia tou emporeumatos einai: %.2f EURO\n", sum);            //to typwnoume eksw apo to for giati theloume sunoliki aksia
}
//4
void pososto()                                                      //sunartisi posostou emporeumatos me katw apo 15 apothema
{
	int i,count=0;
	float pos;

	
	for (i = 0; i < 20; i++)
	{                             
		
		if (proionta[i].apothema < 15)                                         //metraei ta proionta me apothema katw apo 15
		{
			count++;
        }
		
    }
	pos = (count/20.0)*100;                                                     //pososto epi ths ekato 
	printf("to pososto twn empreumatwn me apothema katw apo 15 einai:%.2f", pos);
}

//5
void mesi_timi()                                           //sunartisi mesis timis me apothema panw apo 20
{
	int i;
int counter = 0;                                           //thetoume metriti miden kai to athroisma
float sum = 0.0, average;

for (i = 0; i < 20; i++)
{

	if (proionta[i].apothema>20)                            //ean apothema panw apo 20 
    {
		
		sum = sum + proionta[i].timh;                       //athroise times twn proiontwn pou exoune apothema panw apo 20
		counter++;                                          //auksise to metriti 

	}

}


average = sum / counter;                                     //mesi timi einai to athroisma dia to plhthos(me bash th sunthiki pou grapsame prin)

printf("mesi timi twn proiontwn me apothema panw apo 20 komatia:%.2f\n", average);
}

//6
void rise()                                                   //sunartisi ausksisi timis 20% gia proionta 10-75euro kai 15komatia
{
	int i;
    float x[20];  //xrisimopoioume prosorino pinaka na emfanizei thn auksisi twn timwn...diaforetika tha allazan kapoia dedomena!px h sunoliki aksia
                  //an patousame epilogi 3 meta epilogi 6 kai meta epilogi 3
    printf("osa proionta exoune timi 10-75 kai apothema anw tou 15 auksanoume kata 20 tis ekato tis times twn ekseis proiontwn:\n");
	for (i = 0; i < 20; i++)                                    //gia ola ta proionta ena pros ena                                                                 
	{


		if (proionta[i].timh >= 10 && proionta[i].timh <= 75 && proionta[i].apothema == 15)  //ean h timi einai metaksu 10-75 kai apothema 15

		{
			x[i] = 1.2*proionta[i].timh;                                         //tote auksise th timh kata 20%(x+0,2x=1,2*x)
			printf("%s nea timi:%.2feuro\n", proionta[i].name, x[i]);                       //typwse mou onoma kai timh
		}

	}


}

//7
void mesi_timi2()                          //sunartisi upologismou proiontwn pou ksepernoune ta 3/5 ths mesis timis twn proiontwn olwn
{
	int i;
	float sum = 0, average, mt;
    printf("ta proionta pou ksepernoune se timh ta 3/5 ths mesis timhs twn proiontwn einai:\n");
	for (i = 0; i < 20; i++)                
	{
		sum =sum + proionta[i].timh;    //upologiszoume athroisma timwn proiontwn
	}
	average = sum / 20.0;                 //mesi timi proiontwn 
	mt = average*(3.0 / 5.0);               //nea mesi timi
	for (i = 0; i < 20; i++)
	{
		if (proionta[i].timh>mt)          //elenxoume poia proionta pernane th nea mesi timi
		{
			printf("%s\n", proionta[i].name);  //ta typwnoume me onoma
		}

	}
	

}
//8
void taksinomisi()                //sunartisi upologismou twn 5 pio fthinwn kata alfavitiki seira
{
	int i, j;
	float x;                      //prosorinh metavliti gia taksinomisi timwn kata auksousa seira(gia thn antimetathesi twn stoixeiwn)
	int z;                        //prosorini metavliti gia to apothema 
	char y[20];                   //prosorini metavliti gia thn alfavitiki seira(pinakas)
    FILE *f1;                     //arxeio pou tha xrisimopoihsoume

	for (i = 1; i < 20; i++)             //texniki taksinomisis arithmwn kata auksousa seira bubble short
	{
		for (j = 19; j >= i; j--)        //ksikiname anapoda thn sugrisi
		{
			if (proionta[j - 1].timh>proionta[j].timh)        //ean to proion j-1 einai megalutero apo to j
			{
				x = proionta[j - 1].timh;                     //tote allakse tous thesi...1
				strcpy(y, proionta[j - 1].name);
				z = proionta[j - 1].apothema;

				proionta[j - 1].timh = proionta[j].timh;       //tote allakse tous thesi...  2                //o logos poy kanoume to idio k gia to onoma k gia to apothema
				strcpy(proionta[j - 1].name, proionta[j].name);                                           //enai gia na mhn allaksei h domh twn dedomenwn mas!!
				proionta[j - 1].apothema = proionta[j].apothema;

				proionta[j].timh = x;                         //tote allakse tous thesi..  3 egine h allagh thesis meso ths prosorinis metavlitis..sunexizete...
				strcpy(proionta[j].name, y);
				proionta[j].apothema = z;

			}
		} 
	}
	for (i = 1; i < 5; i++)                                  //afou taksinomisame ta proionta kata auksousa timi twra ta vazoume alfavitika!
	{
		for (j = 4; j >= i; j--)                              //idia logiki me prin alla twra theloume mono ta 5 pio ftina me alfavitiki seira
		{

			if (strcmp(proionta[j-1].name,proionta[j].name)>0)    //an to proion j-1 einai megalutero alfavitika! apo to j 
			{
				strcpy(y, proionta[j - 1].name);                  //alakse tous thesi 1
				x = proionta[j - 1].timh;
				z = proionta[j - 1].apothema;                                                             //omoiws opws k prin kanoume autes tis allages kai! gia tis
                                                                                                          //times k to apothema gia na diatirithei h sunoxh twn
                                                                                                          //dedomenw mas!!
				strcpy(proionta[j - 1].name, proionta[j].name);  //allakse tous thesi 2
				proionta[j - 1].timh = proionta[j].timh;
				proionta[j - 1].apothema = proionta[j].apothema;
				

				strcpy(proionta[j].name, y);                     //allakse tous thesi 3 egine h allagi thesis meso ths prosorinis metavlitis y..sumexizete...
				proionta[j].timh = x;
				proionta[j].apothema = z;

			}


		}
	}
	
	printf("ta 5 pio ftina prointa kata alfavitiki seira:\n");
	f1 = fopen("minproducts.txt","w");                              //anoigoume to arxeio na grapsoume ta apotelesmata

                                                                     //ta 5 proionta pleon einai ta pio ftina kai alfavitika

	
		for (i = 0; i < 5; i++)                                      
		{
			printf("%s\n", proionta[i].name);                                   //ta typwnoume sthn othoni kata onoma kai timi
			fprintf(f1, "%s\n", proionta[i].name);                             //ta vazoume se arxeio ASCII kata onoma (5pio ftina kai alfavitika)
		}
		fclose(f1);
}


//9
void apothema_asfaleias()     //sunartisi apothema asfaleias..elenxoume pia theloune epipleon paraggelia!!

{
	int x,i,apoth_asfaleias;
    int counter = 0;               //metriths
	printf("dwse apothema asfaleias: ");  // dinoume mia timi gia to apothema asfaleias
	scanf("%d", &apoth_asfaleias);        //th diavazoume
	
	for (i = 0; i < 20; i++)   //gia ola ta proionta
	{
		
		if (apoth_asfaleias > proionta[i].apothema)        //ean to apothema asfalleias einai megalutero apo to apothema tou  proiontos  
		{
			counter = counter + 1;                         //arxizoume na metrame...
			x = apoth_asfaleias - proionta[i].apothema;    //mas vriskei poso komatia prrepei na parageiloume!! 
	        printf("%s xreiazete na diathsoume epipleon %d proionta \n",proionta[i].name,x); // ara gia to proio me onoma...xreiazete epipleon auto pou vrikame
                                                                                             //to epanalamvanei gia ola ta proionta 
        }
		
	}

        printf("o arithmos twn prointwn pou exoune apothema mikrotero apo to apothema asfaleias einai:  %d\n", counter);  //typwnei twn arithmwn twn proiontwn
	
}
//10
void eksodos_programa()         //sunartisi eksodou apo to programma
{
    printf("eksodos\n");
	exit(0);                   //eksodos 

}



int main() {

                                                
		printf("\n1.Ligotera komatia\n"
            "2.To polu 10 komatia\n"

			"3.Sunoliki aksia emporeumatos\n"
                                 
			"4.Pososto emporeumatwn me apothema katw apo 15 komatia\n"

			"5.Mesh Timh twn proiontwn(se times) me apothema panw apo 20 komatia \n"

			"6.Auksimeni Timh prointwn kata 20 tis ekato pou exoune timi apo 10euro-75euro kai apothema 15\n"
			
			"7.Proionta pou ksepernoun(se times) ta 3/5 tis mesis timis twn proiontwn\n"
			
			"8.Ta 5 pio fthina proionta se alfavitiki seira kai na apothikeuontai se arxeio ASCII\n"
			
			"9.Apothema asfaleias poia proionta xreiazonatai epipleon paraggelia\n"
			
			"10.Eksodos\n\n\n\n\n\n");
        
        
        
        
        
	int input = 1;                                     //vazoume while gia na mh termatizei to programma meta apo kathe ergasia...
                                                                          //ektos an dwsoume emeis eksodo dhladh epilogi 10!
	while (input) {       


                printf("\n\n\ndwse epilogi apo 1-10:");     // mas zhtaei na dwsoume mia epilogi 1-10 dhladh ti theloume na kanoume
		        scanf("%d", &input);                  //diavazei thn epilogi mas k analogos phgainei ston arithmo pou 
                                                      //dwsame kai thn ylopoiei meso ths sunartisis pou exoume ftiaksei
                
                
                                                      //afou thn ulopoieisei mas emfanizei pali tis epiloges 1-10...

                

		switch (input) {

		case 1:

			min_product();

			break;

		case 2:

			less_than();

			break;

		case 3:

			sum_price();

			break;

		case 4:

			pososto();

			break;

		case 5:

			mesi_timi();

			break;



		case 6:

			rise();

			break;

		case 7:

			mesi_timi2();

			break;

		case 8:

			taksinomisi();

			break;

		case 9:

			apothema_asfaleias();

			break;

		case 10:

			eksodos_programa();

			break;
		}

	}
	return 0;
}



