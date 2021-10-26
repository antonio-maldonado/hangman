#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
void ahorcado(int oportunidades){
	if(oportunidades==8){
		printf("\n\n\n\n\n\n\n %c\n %c\n %c\n %c\n %c\n",186,186,186,186,186);
	}
	if(oportunidades==7){
		printf("\n \n %c\n %c\n %c\n %c\n %c\n %c\n %c\n",186,186,186,186,186,186,186);
	}
	if(oportunidades==6){
		printf("\n %c%c%c%c%c%c%c%c\n %c\n %c\n %c\n %c\n %c\n %c\n %c\n %c\n",201,205,205,205,205,205,205,205,186,186,186,186,186,186,186,186);
	}
	if(oportunidades== 5){
		printf("\n %c%c%c%c%c%c%c%c%c\n %c       %c\n %c       %c\n %c\n %c\n %c\n %c\n %c\n %c\n %c\n",201,205,205,205,205,205,205,205,187,186,186,186,79,186,186,186,186,186,186,186);
	}
	if(oportunidades== 4){
		printf("\n %c%c%c%c%c%c%c%c%c\n %c       %c\n %c       %c\n %c       %c\n %c       %c\n %c\n %c\n %c\n %c\n %c\n %c\n %c\n",201,205,205,205,205,205,205,205,187,186,186,186,79,186,254,186,219,186,186,186,186,186,186,186);
	}
	if(oportunidades== 3){
		printf("\n %c%c%c%c%c%c%c%c%c\n %c       %c\n %c       %c\n %c     %c %c\n %c     %c %c\n %c\n %c\n %c\n %c\n %c\n %c\n %c\n",201,205,205,205,205,205,205,205,187,186,186,186,79,186,218,254,186,179,219,186,186,186,186,186,186,186);
	}
	if(oportunidades== 2){
		printf("\n %c%c%c%c%c%c%c%c%c\n %c       %c\n %c       %c\n %c     %c %c %c\n %c     %c %c %c\n %c\n %c\n %c\n %c\n %c\n %c\n %c\n",201,205,205,205,205,205,205,205,187,186,186,186,79,186,218,254,191,186,179,219,179,186,186,186,186,186,186,186);
	}
	if(oportunidades== 1){
		printf("\n %c%c%c%c%c%c%c%c%c\n %c       %c\n %c       %c\n %c     %c %c %c\n %c     %c %c %c\n %c      %c\n %c      %c\n %c\n %c\n %c\n %c\n %c\n",201,205,205,205,205,205,205,205,187,186,186,186,79,186,218,254,191,186,179,219,179,186,179,186,179,186,186,186,186,186);
	}
	if(oportunidades== 0 ){
		printf("\n %c%c%c%c%c%c%c%c%c\n %c       %c\n %c       %c\n %c     %c %c %c\n %c     %c %c %c\n %c      %c %c\n %c      %c %c\n %c\n %c\n %c\n %c\n %c\n",201,205,205,205,205,205,205,205,187,186,186,186,79,186,218,254,191,186,179,219,179,186,179,179,186,179,179,186,186,186,186,186);
	}
}
void asteriscos(char frase[]){
	int i=0;
	do
	{
		frase[i] = (unsigned char)getch();
		if(frase[i]!=8)  
		{
			printf("*");  
			i++;
		}
		else if(i>0)    
		{
			printf("%c%c%c",8,32,8);
			i--;  
		}
	}while(frase[i-1]!=13);  
	frase[i-1]=NULL;
	printf("\n");
}
int main() {
	int z;
	do{
		system("cls");
    char frase[60],rep[100],temporal[100];
	char pal,text, palab[20][20],pala,pal2;
	int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=10,repetido=0,gano=0,y,cont=0;
	strcpy(frase,"");
	strcpy(temporal,frase);
	printf("BIENVENIDO AL JUEGO DEL AHORCADO");
	printf("\n ¿Quiere jugar?\n 1: Solo\n 2: Con una persona\n 3: Salir \n");
	scanf("%d",&y);
	system("cls");
	switch(y){
	case 1:{
		system("cls");
		int palabra2;
		strcpy(palab[0],"perro");
		strcpy(palab[1],"gato");
		strcpy(palab[2],"celular");
		strcpy(palab[3],"laptop");
		strcpy(palab[4],"computadora");
		strcpy(palab[5],"algebra");
		strcpy(palab[6],"usb");
		strcpy(palab[7],"lapiz");
		strcpy(palab[8],"pluma");
		strcpy(palab[9],"mochila");
		strcpy(palab[10],"mesa");
		strcpy(palab[11],"mexico");
		strcpy(palab[12],"algebra");
		strcpy(palab[13],"geometria");
		strcpy(palab[14],"reprobar");
		strcpy(palab[15],"acompañamiento");
		strcpy(palab[16],"recursar");
		strcpy(palab[17],"galleta");
		strcpy(palab[18],"programar");
		strcpy(palab[19],"ahorcado");
		strcpy(palab[20],"llorar");
		srand(time(NULL));
		palabra2= 0+ rand() %20;
		strcpy(frase,palab[palabra2]);
		longitud = 0;
		inicial = 0;
		j = 0;
		rep[0] = ' ';
		rep[1] = '\0';
		strcpy(temporal,"");
		do {
			system("cls");
			temp=0;
			if(inicial == 0) {
				for(i=0;i<strlen(frase);i++) {
					if(frase[i] == ' ') {
						temporal[i] = ' ';
						longitud++;
					}
					else {
						temporal[i] = '_';       
						longitud++;
					}
				}
			}
			inicial = 2;
			temporal[longitud] = '\0';
			if(repetido == 0) {
				for(i=0;i<strlen(frase);i++) {
					if(frase[i]== pal) {
						temporal[i]=pal;
						acertado++;
						temp=1;
						printf("Letra anterior: %c",pal);
					} 
				}
			}
			if(repetido == 0) {
				if(temp == 0) {
					oportunidades = oportunidades - 1;
				}
			}
			else {
				printf("Ya se ha introducido este caracter");
				printf("\n\n");
				
			}
			printf("\n");
			ahorcado(oportunidades);
			for(i=0;i<strlen(temporal);i++) {
				printf(" %c",temporal[i]);
			}
			printf("\n");
			if(strcmp(frase,temporal)== 0) {
				gano = 1;
				break;
			}
			printf("\n");
			printf("Letras Acertadas: %d",acertado);
			printf("\n");
			printf("Oportunidades Restantes: %d",oportunidades);
			printf("\n");
						
	
			if (oportunidades==0)
			{
				break;
			} 
			printf("Presione 1 para rendirse \n");
			printf("Introduzca una letra: \n");
			scanf("\n%c",&pal);
			if(pal=='1'){
				system("cls");
				break;
			}
		}while(oportunidades != 0);
		if(gano) {
			system("cls");
			printf("\nHas adivinado la palabra(s): \n%s\n",frase);
			printf("Enhorabuena, has ganado.");
			printf("\n¿Quieres jugar de nuevo? \n1: Si\n2: No\n");
			scanf("%d",&z);
			break;
		}
		else {
			system("cls");
			printf("\n %c%c%c%c%c%c%c%c%c\n %c       %c\n %c       %c\n %c     %c %c %c\n %c     %c %c %c\n %c      %c %c\n %c      %c %c\n %c\n %c\n %c\n %c\n %c\n",201,205,205,205,205,205,205,205,187,186,186,186,79,186,218,254,191,186,179,219,179,186,179,179,186,179,179,186,186,186,186,186);
			printf("Has perdido.");
			printf("\nEra obvio que la(s) palabra(s) era(n):\n%s", frase);
			printf("\n¿Como no te diste cuenta?");
			printf("\n¿Quieres jugar de nuevo? \n1: Si\n2: No\n");
			scanf("%d",&z);
			break;			
		}
		printf("\n\n");
		break;
	    }
	case 2:
		        printf("\tJuego del Ahorcado\n");
				printf("Introduzca la palabra a adivinar: \n");
				asteriscos(frase);
				system("cls");
				longitud = 0;
				inicial = 0;
				j = 0;
				rep[0] = ' ';
				rep[1] = '\0';
				do {
					system("cls");
					temp=0;
					if(inicial == 0) {
						for(i=0;i<strlen(frase);i++) {
							if(frase[i] == ' ') {
								temporal[i] = ' ';
								longitud++;
							}
							else {
								temporal[i] = '_';       
								longitud++;
							}
						}
					}
					inicial = 1;
					temporal[longitud] = '\0';
					for(i=0;i<strlen(rep);i++) {
						if(rep[i] == pal) {
							repetido = 1;
							break;
						}
						else {
							repetido = 0;
						}
					}
					if(repetido == 0) {
						for(i=0;i<strlen(frase);i++) {
							if(frase[i] == pal) {
								temporal[i] = pal;
								acertado++;
								temp=1;
							} 
						}
					}
					if(repetido == 0) {
						if(temp == 0) {
							oportunidades = oportunidades - 1;
						}
					}
					ahorcado(oportunidades);
					printf("\n");
					for(i=0;i<strlen(temporal);i++) {
						printf(" %c",temporal[i]);
					}
					printf("\n");
					if(strcmp(frase,temporal)== 0) {
						gano = 1;
						break;
					}
					printf("\n");
					printf("Letras Acertadas: %d",acertado);
					printf("\n");
					printf("Oportunidades Restantes: %d",oportunidades);
					printf("\n");
					if (oportunidades==0)
					{
						break;
					} 
					printf("Presione 1 para rendirse \n");
					printf("Introduzca una letra: \n");
					scanf("\n%c",&pal);
					if(pal=='1'){
						system("cls");
						break;
					}
				}while(oportunidades != 0);
				if(gano) {
				    printf("\nHas adivinado la palabra(s): %s\n",frase);
					printf("Enhorabuena, has ganado.");
					printf("\n¿Quiere jugar de nuevo? \n1: si \n2: no\n");
					scanf("%d",&z);
					system("cls");
				}
				else {
					printf("\n %c%c%c%c%c%c%c%c%c\n %c       %c\n %c       %c\n %c     %c %c %c\n %c     %c %c %c\n %c      %c %c\n %c      %c %c\n %c\n %c\n %c\n %c\n %c\n",201,205,205,205,205,205,205,205,187,186,186,186,79,186,218,254,191,186,179,219,179,186,179,179,186,179,179,186,186,186,186,186);
					printf("Has perdido.");
					printf("\nEra obvio que la(s) palabra(s) era(n): \n%s",frase);
					printf("\n¿Como no te diste cuenta?");
					printf("\n¿Quiere jugar de nuevo? \n1: si \n2: no\n");
					scanf("%d",&z);
					system("cls");
				}
				break;
				printf("\n\n");
	        case 3: {
				break;
			}
	}
}while(z==1);
	return 0;
}
