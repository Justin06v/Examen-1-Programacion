#include <iostream>

int main() {
	int Opcion, a, Continuar, Usuario;
	float Cantidad1, Cantidad2, Cantidad3, Cantidad4, Cantidad5;
	float Acumulado1, Acumulado2, Acumulado3, Acumulado4, Acumulado5, AcumuladoTotal;
	float Cantidad, Puntos, Dinero, Adornos, Pinturas;
	char Nombre[30];
	do{
		system("cls");
		printf("Bienvenido a la plataforma de reciclaje \n");
		a = 1;
		Continuar = 0, Acumulado1 = 0, Pinturas = 0;
		Acumulado2 = 0;
		Acumulado3 = 0;
		Acumulado4 = 0;
		Acumulado5 = 0;
		AcumuladoTotal = 0;
		Puntos = 0;
		Cantidad1 = 0;
		Cantidad2 = 0;
		Cantidad3 = 0;
		Cantidad4 = 0;
		Cantidad5 = 0;
		Dinero = 0;
		Adornos = 0;
		printf("Que tipo de usuario realizara el proceso? \n");
		printf("1) Hogar \n");
		printf("2) Comunidad \n");
		printf("3) Institucion \n");
		printf("Opcion: ");
		do{
		scanf("%i",&Usuario);
     	   if(Usuario <= 0 || Usuario > 3){
     	       printf("Opcion invalida, ingrese una opcion nuevamente : ");
     	       a = 0;
		   }else{
		       a = 1;
		   }
	    }while(a == 0);
	    
		do{
	    	printf("\nIngrese el tipo de material que desea procesar: \n");
		    printf("1) Latas y botellas de plastico \n");
	    	printf("2) Carton y papel \n");
	    	printf("3) Vidrio \n");
	    	printf("4) Materia organica \n");
	    	printf("5) Otros residuos (metal, madera, pintura, etc...) \n");
	    	printf("Opcion: ");
	        	do{
		        	scanf("%i",&Opcion);
		            if(Opcion > 5 || Opcion <= 0){
			            printf("Opcion invalida, ingrese una opcion nuevamente : ");
		            	a = 0;
	            	}else{
	                	a = 1;	
			        }
		        }while(a == 0);
			if(Opcion == 1){
				printf("Ingrese en kg el total de latas y botellas de plastico recliadas: ");
				scanf("%f",&Cantidad1);
				Acumulado1 = Acumulado1 + Cantidad1;
			}else if(Opcion == 2){
				printf("Ingrese en kg el total de carton y papel recliados: ");
				scanf("%f",&Cantidad2);
				Acumulado2 = Acumulado2 + Cantidad2;
			}else if(Opcion == 3){
				printf("Ingrese en kg el total de vidrio recliado: ");
				scanf("%f",&Cantidad3);
				Acumulado3 = Acumulado3 + Cantidad3;
			}else if(Opcion == 4){
				printf("Ingrese en kg el total de materia organica recliada: ");
				scanf("%f",&Cantidad4);
				Acumulado4 = Acumulado4 + Cantidad4;
			}else{
				printf("Ingrese en kg el total de otros residuos recliados: ");
				scanf("%f",&Cantidad5);
				Acumulado5 = Acumulado5 + Cantidad5;
			}
			printf("Desea procesar otro tipo de material? (Si=1 No=2): ");
			do{
	        	scanf("%i",&Continuar);
		            if(Continuar > 2 || Continuar <= 0){
			            printf("Incorrecto, ingrese un numero correcto: ");
			            a = 0;
		            }else{
		                a = 1;
	            	}
	        }while(a == 0);
		}while(Continuar == 1);
		
		AcumuladoTotal = Acumulado1+ Acumulado2 + Acumulado3 + Acumulado4 + Acumulado5;
		printf("\n------------------------------------------------------------------------\n");
		
		printf("A continuacion aparecen las estadisticas y los puntos que ha acumulado: \n \n");
		printf("Total de latas y botellas de plastico reciclados: %.2f kg \n",Acumulado1);
		printf("Total de carton y papel reciclados: %.2f kg \n", Acumulado2);
		printf("Total de vidrio reciclados: %.2f kg \n", Acumulado3);
		printf("Total de materia organica reciclada : %.2f kg \n", Acumulado4);
		printf("Total de otros residuos reciclados: %.2f kg \n", Acumulado5);
		printf("Total de kg reciclados: %.2f kg \n", AcumuladoTotal);
		
		if(Usuario == 1){
			Puntos = AcumuladoTotal * 0.5;
			printf("\n------------------------------------------------------------------------\n");
			printf("Puntos para hogar: \n");
			printf("1 kg = 0.5 puntos \n");
			printf("Sus puntos totales son: %.2f \n",Puntos);
			printf("Por cual opcion los desea cambiar? (Solo lo puede cambiar por una opcion): \n");
			printf("1- Dinero 1 punto = 80 colones \n");
			printf("2- Adornos para hogar 1 punto = 1 adorno \n");
			printf("Opcion :");
			do{
			scanf("%i",&Opcion);
			if(Opcion > 2 || Opcion <= 0){
				printf("Opcion incorrecta, ingrese una nueva: ");
				a = 0;
			}else{
				a = 1;
			}
		    }while(a == 0);
		    
		    if(Opcion == 1){
		    	Dinero = 80 * Puntos;
		    	printf("Total de dinero: %.f colones \n", Dinero);
			}else{
				Adornos = Puntos;
				printf("Total de adornos: %.f \n",Adornos);
			}
		}else if(Usuario == 2){
			Puntos = AcumuladoTotal * 0.4;
			printf("\n------------------------------------------------------------------------\n");
			printf("Puntos para comunidad: \n");
			printf("1 kg = 0.4 puntos \n");
			printf("Sus puntos totales son: %.2f \n",Puntos);
			printf("Por cual opcion los desea cambiar? (Solo lo puede cambiar por una opcion): \n");
			printf("1- Dinero 1 punto = 60 colones \n");
			printf("2- Pintura para senalamiento 1 punto = 0.5 litros \n");
			printf("Opcion :");
			do{
			scanf("%i",&Opcion);
			if(Opcion > 2 || Opcion <= 0){
				printf("Opcion incorrecta, ingrese una nueva: ");
				a = 0;
			}else{
				a = 1;
			}
		    }while(a == 0);
			if(Opcion == 1){
		    	Dinero = 60 * Puntos;
		    	printf("Total de dinero: %.f colones \n", Dinero);
			}else{
				Pinturas = Puntos * 0.5;
				printf("Total de pintura: %.f litros \n",Pinturas);
			}
		}else{
			Puntos = AcumuladoTotal * 0.4;
			printf("\n------------------------------------------------------------------------\n");
			printf("Puntos para institucion: \n");
			printf("1 kg = 0.3 puntos \n");
			printf("Sus puntos totales son: %.2f \n",Puntos);
			printf("Por cual opcion los desea cambiar? (Solo lo puede cambiar por una opcion): \n");
			printf("1- Dinero 1 punto = 50 colones \n");
			printf("2- Pintura para paredes 1 punto = 0,5 litros   \n");
			printf("Opcion :");
			do{
			scanf("%i",&Opcion);
			if(Opcion > 2 || Opcion <= 0){
				printf("Opcion incorrecta, ingrese una nueva: ");
				a = 0;
			}else{
				a = 1;
			}
		    }while(a == 0);
			if(Opcion == 1){
		    	Dinero = 50 * Puntos;
		    	printf("Total de dinero: %.f colones \n", Dinero);
			}else{
				Pinturas = Puntos * 0.5;
				printf("Total de pintura: %.f litros \n",Pinturas);
			}
		}
		
		printf("Desea ingresar otro tipo de usuario? (Si=1 No=2): ");
		do{
		scanf("%i",&Continuar);
		if(Continuar > 2 || Continuar <= 0){
			printf("Incorrecto, ingrese un numero correcto: ");
			a = 0;
		}else{
			a = 1;
		}
	    }while(a == 0);
	}while(Continuar == 1);
	
	printf("\nMuchas gracias por usar la plataforma!!! \n");
	return 0;
}
