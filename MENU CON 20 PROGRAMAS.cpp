//TULIO CURUP.
#include <iostream>
#include <cstdlib>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h> 
#include <time.h> 
#include <windows.h> 
#include <cmath>
using namespace std;
int main()
{
    int opcion;
    bool repetir = true;
    do {
        system("cls");
        // Texto del menú 
        cout << "\n\nMenu de Programas" << endl;
        cout << "\nSeleccione la opcion que desee:" << endl;
        cout << "1. Suma, Resta, Multiplicacion y Division de dos numeros" << endl;
        cout << "2. Determinar si un numero es par o impar" << endl;
        cout << "3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa" << endl;
        cout << "4. Determinar si una palabra o un numero es pali ndromo" << endl;
        cout << "5. Conversion de numeros arabigos a romanos" << endl;
        cout << "6. Conversion de numeros enteros a letras" << endl;
        cout << "7. Conversion de numeros enteros con decimal a letras " << endl;
        cout << "8. Una tabla de multiplicar" << endl;
        cout << "9. Todas las tablas de multiplicar del 1 al 10" << endl;
        cout << "10. Crear de forma grafica la multiplicacion manual" << endl;
        cout << "11. Conversión de numeros decimales a binario " << endl;
        cout << "12. Conversión de numeros decimales a hexadecimales " << endl;
        cout << "13. Crear Figuras Geometricas Basicas." << endl;
        cout << "14. Mover un punto en toda la pantalla " << endl;
        cout << "15. Simular un Cajero Automatico (Automata) " << endl;
        cout << "16. Calcular la hipotenusa" << endl;
        cout << "17. alumnos aprobados y reprobados" << endl;
        cout << "18. calcula cuantos dias tiene el mes  " << endl;
        cout << "19. verificar si es numero negativo o positivo " << endl;
        cout << "20. desplegar los numeros del 1000 al 1   " << endl;
  
        
        
        
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
// Suma, Resta, Multiplicación y División de dos números
int n1, n2;
printf("introduzca primer numero: ");
scanf("%d", &n1);
printf("introduzca segundo numero: ");
scanf("%d", &n2);

printf("\n la suma es: %d", n1+n2);
printf("\n la resta es: %d", n1-n2);
printf("\n la multiplicacion es: %d", n1*n2);
printf("\n la division es: %d \n", n1/  n2);    

printf ("Presiona ENTER para elegir otro programa \n");               
system("pause>nul"); 
                break;
                
            case 2:
// Determinar si un número es par o impar
int numero;
printf("Ingrese un numero: ");
scanf("%d", &numero);
	if(numero % 2 == 0)
        printf("%d es par \n", numero);
	else
        printf("%d es impar \n", numero);
        
printf ("Presiona ENTER para elegir otro programa \n");           
                        
system("pause>nul"); // Pausa
                break;
                
            case 3:
// Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa               
float M, K, M2, Met, Pulg, Pulg2, L, Kl, Kl2;
printf ("Introduce Los Kilometros a Convertir:\n");
scanf ("%f", &K);
printf ("Introduce Las Millas a Convertir:\n");
scanf ("%f", &M2);
printf ("Introduce Los Metros a Convertir:\n");
scanf ("%f", &Met);
printf ("Introduce Las pulgadas a Convertir:\n");
scanf ("%f", &Pulg2);
printf ("Introduce Las libras a Convertir:\n");
scanf ("%f", &L);
printf ("Introduce Los kilos a Convertir:\n");
scanf ("%f", &Kl2);

M= K*0.623;
K= M2*1.60934;

Pulg= Met*39.37;
Met= Pulg2/39.37;

Kl= L/2.205;
L= Kl2*2.205;

printf ("El Total De Millas Son: = %.5f \n", M);
printf ("El Total De Kilometros Son: = %.5f \n", K);

printf ("El Total De Pulgadas Son: = %.5f \n", Pulg);
printf ("El Total De Metros Son: = %.5f \n", Met);

printf ("El Total De Kilos Son: = %.5f \n", Kl);
printf ("El Total De Libras Son: = %.5f \n", L);

printf ("Presiona ENTER para elegir otro programa \n");           

system("pause>nul"); // Pausa            
                break;
                
            case 4:		
// Determinar si una palabra o un número es palíndromo. 
char palabra[80];
 int x,y,z;
   printf("\nEscribe una palabra: ");
   scanf(" %s",palabra);
   x=strlen(palabra);
   x=x-1;
 for(y=0,z=x;y<=x/2;y++,z--)
          if(palabra[y]==palabra[z])
             printf("Es palindromo \n");
 else
            printf("No es palindromo \n");
 getch();
printf ("Presiona ENTER para elegir otro programa \n"); 
system("pause>nul"); // Pausa                
                break;
         
        case 5:		
// Conversion de numeros arabigos a romanos 
int num, a;
cout << "Escribe el numero, que sea mayor o igual a 1 y menor o igual a 3000" << endl;
cin >> a;
num=a;
while(num!=0)
{
if (num<= 3999 && num>= 1000)
{
cout << "M";
num = num -1000;
}
else if(num <1000 && num>=900)
{
cout << "CM";
num = num - 900;
}
else if(num < 900 && num>500)
{
cout << "D";
num = num - 500;
}
else if (num == 500)
{
cout << "D";
num = num -500;
}
else if (num<500 && num>= 400)
{
cout << "CD";
num = num - 400;
}
else if (num<400 && num >99)
{
cout << "C";
num = num -100;
}
else if (num< 100 && num>89)
{
cout << "XC";
num = num - 90;
}
else if (num< 90 && num>59)
{
cout << "L";
num = num - 50;
}
else if(num<60 && num >50)
{
cout << "L";
num = num - 50;
}
else if (num ==50)
{
cout << "L";
num = num -50;
}
else if(num<50 && num>39)
{
cout << "XL";
num = num - 40;
}
else if(num< 40 && num> 10)
{
cout << "X";
num = num - 10;
}
else if(num == 10)
{
cout << "X";
num = num -10;
}
else if(num==9)
{
cout << "IX";
num = num - 9;
}
else if(num<=8 && num>=6)
{
cout << "V";
num = num - 5;
}
else if (num == 5)
{
cout << "V";
num = num - 5;
}
else if (num == 4)
{
cout << "IV";
num = num - 4;
}
else if (num<= 3 && num>=1)
{
cout << "I";
num = num - 1;
}
}
printf ("Presiona ENTER para elegir otro programa \n"); 
system("pause>nul"); // Pausa                
                break;       
  case 6:		
// Conversion de numeros enteros a letras
int equis;
    cout<<"ingrese un numero"<<endl;
    cin>>equis;
if((equis<1)||(equis>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        if(equis>=900)   {cout<<"NOVECIENTOS " ;equis=equis-900;}
       else if(equis>=800)   {cout<<"OCHOCIENTOS " ;equis=equis-800;}
       else if(equis>=700)   {cout<<"SETECIENTOS " ;equis=equis-700;}
       else if(equis>=600)   {cout<<"SEISCIENTOS " ;equis=equis-600;}
       else if(equis>=500)   {cout<<"QUINIENTOS "  ;equis=equis-500;}
       else if(equis>=400)   {cout<<"CUATROCIENTOS "   ;equis=equis-400;}
       else if(equis>=300)   {cout<<"TRESCIENTOS " ;equis=equis-300;}
       else if(equis>=200)   {cout<<"DOSCIENTOS "  ;equis=equis-200;}
       else if(equis>100)    {cout<<"CIENTO "  ;equis=equis-100;}
       else if(equis==100)  {cout<<"CIEN"     ;equis=equis-100;}
        if(equis>90) {cout<<"NOVENTA Y "   ;equis=equis-90; }
            if(equis==90)   {cout<<"NOVENTA"  ;equis=equis-90; }  
            if(equis>80) {cout<<"OCHENTA Y "   ;equis=equis-80; }
            if(equis==80)   {cout<<"OCHENTA"  ;equis=equis-80; }
            if(equis>70) {cout<<"SETENTA Y "   ;equis=equis-70; }
            if(equis==70)   {cout<<"SETENTA"  ;equis=equis-70; }
            if(equis>60) {cout<<"SESENTA Y "   ;equis=equis-60; }
            if(equis==60)   {cout<<"SESENTA"  ;equis=equis-60; }
            if(equis>50) {cout<<"CINCUENTA Y " ;equis=equis-50; }
            if(equis==50)   {cout<<"CINCUENTA"    ;equis=equis-50; }
            if(equis>40) {cout<<"CUARENTA Y "  ;equis=equis-40; }
            if(equis==40)   {cout<<"CUARENTA" ;equis=equis-40; }
            if(equis>30) {cout<<"TREINTA Y "   ;equis=equis-30; }
            if(equis==30)   {cout<<"TREINTA"  ;equis=equis-30; }
            if(equis>20) {cout<<"VEINTI"       ;equis=equis-20; }
            if(equis==20)   {cout<<"VEINTE"       ;equis=equis-20; }
        if(equis>=16)    {cout<<"DIECI"        ;equis=equis-10; }
       else if(equis==15)   {cout<<"QUINCE"       ;equis=equis-15; }
       else if(equis==14)   {cout<<"CATORCE"  ;equis=equis-14; }
       else if(equis==13)   {cout<<"TRECE"        ;equis=equis-13; } 
       else if(equis==12)   {cout<<"DOCE"     ;equis=equis-12; }
       else if(equis==11)   {cout<<"ONCE"     ;equis=equis-11; }
       else if(equis==10)   {cout<<"DIEZ"     ;equis=equis-10; }      
        if(equis==9)    {cout<<"NUEVE"        ;equis=equis-9;  }
        if(equis==8)    {cout<<"OCHO"     ;equis=equis-8;  }
        if(equis==7)    {cout<<"SIETE"        ;equis=equis-7;  }
            if(equis==6)    {cout<<"SEIS"     ;equis=equis-6;  }
       else if(equis==5)    {cout<<"CINCO"        ;equis=equis-5;  }
       else if(equis==4)    {cout<<"CUATRO"       ;equis=equis-4;  }
       else if(equis==3)    {cout<<"TRES"     ;equis=equis-3;  }
       else if(equis==2)    {cout<<"DOS"      ;equis=equis-2;  }
       else if(equis==1)    {cout<<"UNO"      ;equis=equis-1;}
       }
printf ("Presiona ENTER para elegir otro programa \n"); 
system("pause>nul"); // Pausa                
                break; 
                
case 7:		
// Conversión de números enteros con decimal a letras. 


    cout << "El programa no me salio :( "  << endl;
    printf ("Presiona ENTER para elegir otro programa \n"); 
system("pause>nul"); // Pausa                
                break;
                
case 8:		
// Una tabla de multiplicar.
				cout<<"\n TABLA DEL 5";
				cout<<"\n 5X1= 5"; 
				cout<<"\n 5X2= 10"; 
				cout<<"\n 5X3= 15"; 
				cout<<"\n 5X4= 20"; 
				cout<<"\n 5X5= 25"; 
				cout<<"\n 5X6= 30"; 
				cout<<"\n 5X7= 35"; 
				cout<<"\n 5X8= 40"; 
				cout<<"\n 5X9= 45"; 
				cout<<"\n 5X10= 50";
				
	printf ("\n Presiona ENTER para elegir otro programa"); 

system("pause>nul"); // Pausa                
                break;
                
case 9:		
// Todas las tablas de multiplicar del 1 al 10. 
int tabla; 
	printf("INTRODUCZCA UN NUMERO: "); 
	scanf("%d", &tabla); 
	tabla == 1;
	tabla == 2;
	tabla == 3;
	tabla == 4;
	tabla == 5;
	tabla == 6;
	tabla == 7;
	tabla == 8;
	tabla == 9;
	tabla == 10;
	switch(tabla){
		case 1: cout<<" 1X1= 1";
				cout<<"\n 1X2= 2"; 
				cout<<"\n 1X3= 3"; 
				cout<<"\n 1X4= 4"; 
				cout<<"\n 1X5= 5"; 
				cout<<"\n 1X6= 6"; 
				cout<<"\n 1X7= 7"; 
				cout<<"\n 1X8= 8"; 
				cout<<"\n 1X9= 9"; 
				cout<<"\n 1X10= 10";break;
	}
	switch(tabla){
		case 2: cout<<" 2X1= 2";
				cout<<"\n 2X2= 4";
				cout<<"\n 2X3= 6";
				cout<<"\n 2X4= 8";
				cout<<"\n 2X5= 10";
				cout<<"\n 2X6= 12";
				cout<<"\n 2X7= 14";
				cout<<"\n 2X8= 16";
				cout<<"\n 2X9= 18";
				cout<<"\n 2X10= 20";break;			
	}
	switch(tabla){
		case 3: cout<<" 3X1= 3";
				cout<<"\n 3X2= 6";
				cout<<"\n 3X3= 9";
				cout<<"\n 3X4= 12";
				cout<<"\n 3X5= 15";
				cout<<"\n 3X6= 18";
				cout<<"\n 3X7= 21";
				cout<<"\n 3X8= 24";
				cout<<"\n 3X9= 27";
				cout<<"\n 3X10= 30";break;			
	}
		switch(tabla){
		case 4: cout<<" 4X1= 4";
				cout<<"\n 4X2= 8";
				cout<<"\n 4X3= 12";
				cout<<"\n 4X4= 16";
				cout<<"\n 4X5= 20";
				cout<<"\n 4X6= 24";
				cout<<"\n 4X7= 28";
				cout<<"\n 4X8= 32";
				cout<<"\n 4X9= 36";
				cout<<"\n 4X10= 40";break;			
	}
		switch(tabla){
		case 5: cout<<" 5X1= 5";
				cout<<"\n 5X2= 10";
				cout<<"\n 5X3= 15";
				cout<<"\n 5X4= 20";
				cout<<"\n 5X5= 25";
				cout<<"\n 5X6= 30";
				cout<<"\n 5X7= 35";
				cout<<"\n 5X8= 40";
				cout<<"\n 5X9= 45";
				cout<<"\n 5X10= 50";break;			
	}
		switch(tabla){
		case 6: cout<<" 6X1= 6";
				cout<<"\n 6X2= 12";
				cout<<"\n 6X3= 18";
				cout<<"\n 6X4= 24";
				cout<<"\n 6X5= 30";
				cout<<"\n 6X6= 36";
				cout<<"\n 6X7= 42";
				cout<<"\n 6X8= 48";
				cout<<"\n 6X9= 54";
				cout<<"\n 6X10= 60";break;			
	}
		switch(tabla){
		case 7: cout<<" 7X1= 7";
				cout<<"\n 7X2= 14";
				cout<<"\n 7X3= 21";
				cout<<"\n 7X4= 28";
				cout<<"\n 7X5= 35";
				cout<<"\n 7X6= 42";
				cout<<"\n 7X7= 49";
				cout<<"\n 7X8= 56";
				cout<<"\n 7X9= 63";
				cout<<"\n 7X10= 70";break;			
	}
		switch(tabla){
		case 8: cout<<" 8X1= 8";
				cout<<"\n 8X2= 16";
				cout<<"\n 8X3= 24";
				cout<<"\n 8X4= 32";
				cout<<"\n 8X5= 40";
				cout<<"\n 8X6= 48";
				cout<<"\n 8X7= 56";
				cout<<"\n 8X8= 64";
				cout<<"\n 8X9= 72";
				cout<<"\n 8X10= 80";break;			
	}
			switch(tabla){
		case 9: cout<<" 9X1= 9";
				cout<<"\n 9X2= 18";
				cout<<"\n 9X3= 27";
				cout<<"\n 9X4= 36";
				cout<<"\n 9X5= 45";
				cout<<"\n 9X6= 54";
				cout<<"\n 9X7= 63";
				cout<<"\n 9X8= 72";
				cout<<"\n 9X9= 81";
				cout<<"\n 9X10= 90";break;			
	}
			switch(tabla){
		case 10: cout<<" 10X1= 10";
				cout<<"\n 10X2= 20";
				cout<<"\n 10X3= 30";
				cout<<"\n 10X4= 40";
				cout<<"\n 10X5= 50";
				cout<<"\n 10X6= 60";
				cout<<"\n 10X7= 70";
				cout<<"\n 10X8= 80";
				cout<<"\n 10X9= 90";
				cout<<"\n 10X10= 100";break;			
	}
printf ("\n Presiona ENTER para elegir otro programa"); 

system("pause>nul"); // Pausa                
                break;
case 10:		
// Crear de forma gráfica la multiplicación manual. 
{
float a,b,Mul;
cout<< "ESCRIBA EL PRIMER DIGITO:\n";
  cin>>a;
  cout<<"ESCRIBA EL SEGUNDO DIGITO:\n";
  cin>>b;
 
Mul= a*b;

cout<<"\t"<<a<<endl;
cout<<"    x  "<<"\t "<<b<<endl;
cout<<"____________"<<endl;
cout<<"\t"<<Mul<<endl;
system("pause");


}

printf ("\n Presiona ENTER para elegir otro programa"); 
system("pause>nul"); // Pausa                
                break;                
                              
case 11:		
// Conversión de números decimales a binario 
{
cout << "Ingrese un numero entero positivo: \n";
    int numeroc;
    string binario = "";
    cin >> numeroc;
    if (numeroc > 0) {
        while (numeroc > 0) {
            if (numeroc%2 == 0) {
                binario = "0"+binario;
            } else {
                binario = "1"+binario;
            }
            numeroc = (int) numeroc/2;
        }
    } else if (numeroc == 0) {
        binario = "0";
    } else {
        binario = "No se puede realizar la conversión. Ingrese solo numerocs positivos";
    }
    cout << "El resultado de la conversion es: " << binario;
}
printf ("\n Presiona ENTER para elegir otro programa"); 

system("pause>nul"); // Pausa                
                break;
                
case 12:		
// Conversión de números decimales a hexadecimales 
{
    
    unsigned long long int decimal = 0;

    char cadena[63];

    printf("Ingresa un numero decimal:\n");
    scanf("%llu", &decimal);

    ltoa(decimal, cadena, 16);
    printf("El numero en hexadecimal es: %s\n", cadena);
    return 0;
}
printf ("\n Presiona ENTER para elegir otro programa"); 

system("pause>nul"); // Pausa                
                break;
            
case 13:		
//Crear Figuras Geométricas Básicas. 
{
int tuly;

do {

	cout<<"Bienvenido por favor seleccione una de las siguientes figuras geometricas\n"<<endl;
	cout<<"1.-cuadrado"<<endl;
	cout<<"2.-rectangulo"<<endl;
	cout<<"3.-tirangulo"<<endl;
	cout<<"4.-cirulo"<<endl;
	cout<<"5.-salir"<<endl;
	cin>>tuly;
	
	switch(tuly) {
		
		case 1:
			short lado;

cout<<"bienvenido al cuadrado por favor ingrese los datos que se le piden\n";
cout<<"\n";
cout<<"Ingrese el lado\n";
cin>>lado;
for(short i=0;i<lado;i++) {
	for(short j=0; j<lado; j++) { 
	    if(i==0 || j==0 || i==lado-1 || j==lado-1) {
	    	cout <<"*";
		}
  
          else {
          	cout<<" ";
		  }   


}

 		cout<<endl;

} 
		break;
		
	case 2:
		short lado1,a;

cout<<"bienvenido al rectangulo por favor ingrese los datos que se le piden\n";
cout<<"\n";
cout<<"Ingrese el altura\n";
cin>>lado1;
cout<<"Ingrese el base\n";
cin>>a;
for(short i=0;i<lado1;i++) {
	for(short j=0; j<a; j++) { 
		if(i==0 || j==0 || i==lado1-1 || j==a-1) {
	 	cout <<"*";
		}
  
          else {
          	cout<<" ";
		  } 

	}	
		cout<<endl;
	}
	

		break; 
	
	case 3:
		int con,c,base;
 con=1;
 c=1;
 
 printf("Ingresa la base\n");
 scanf("%d",&base);
 while(con<=base)
  {
  c=1;
  while(c<=con)
    {

    printf("*");
    c=c+1;
    } 
    printf("\n");
    con=con+1;
 }
		
		
		
	break;		
	case 4:
	cout<<"          ******* "<<endl; //1
	cout<<"      *************** "<<endl; //2
	cout<<"    ******************* "<<endl; //3	
	cout<<"  ***********************"<<endl; //4	
	cout<<" ************************* "<<endl; //5	
	cout<<"*************************** "<<endl; //6	
	cout<<"*************************** "<<endl; //7	
	cout<<"*************************** "<<endl; //8	
	cout<<"*************************** "<<endl; //9	
	cout<<" ************************* "<<endl; //10	
	cout<<"  *********************** "<<endl; //11	
	cout<<"    ******************* "<<endl; //12
	cout<<"      *************** "<<endl; //13
	cout<<"          ******* "<<endl; //14
cout<<"\n";
	cout<<"espero lo haya disfrutado"<<endl; 
	break;		

				
		case 5:
		exit(1); 
		break;
		
	break;
	} 
} while (tuly!=5); system("pause");

		
}

system("pause>nul"); // Pausa                
                break;


case 14:		
// Mover un punto en toda la pantalla 
{
int n,i,j,x=0,y=0,k;
        char c,opc='u', opc2;
    cout<<"Ingrese caracter x o d: ";
    cin>>c;
    do{
       cout<<"Ingrese dimensiones (5-25): ";
       cin>>n;
    }while(n<5 || n>25);
    srand(time(0));  //inicializando la semilla para la función rand() 
    do{
     system("cls"); //limpiado de pantalla
     for(j=0;j<x;j++)
     cout<<endl;
     for(j=0;j<n;j++){
      for(i=0;i<y;i++)
      cout<<" ";
      for(i=0;i<n;i++){
        if(j==0 || i==0 || j==n-1 || i==n-1|| i==j+n/2|| i==j-n/2||j==n/2-i || j==3*n/2-1-i || j==n/2 && i==n/2)
        cout<<c;
        else cout<<" ";}
        cout<<endl;
        }
     //condiciones para volver al menú o presentarlo por primera vez
     if(opc=='u' || opc=='b'&& k==15 || opc=='a' && opc2=='x'){


      k=0;
      opc2='u';
     cout<<"  *Menu*\n a)Para mover figura manualmente\n b)Para que la figura se mueva aleatoriamente \n z)salir \n Opcion: ";
     cin>>opc;
     }
     if(opc=='a'){
      if (opc2=='u')
       cout<<"Para mover figura presione(w/s/a/d/)  x (para volver al menu anterior)";
             
     opc2=getch();
     switch(opc2){
     case 'w': x--;break;
     case 's': if(x<24-n)x++;break;
     case 'a': y--;break;
     case 'd': if(y<79-n)y++;break;
     case 'x': break;
   
     }
     }
     if(opc=='b'){
       k++;
       y=1+rand()%(78-n);
       x=1+rand()%(25);        
       Sleep(600); //pausa de 600 milisegundos
       }
      if(opc!='a' && opc!='b' && opc!='z')
      opc='u';        
     }while(opc!='z');          
     
     }        
case 15:		
// Simular un Cajero Automático (Autómata)
{
	int saldo_inicial = 1000,opc;
	float extra,saldo = 0, retiro;
	
	cout<<"\ Bienvenido al cajero "<<endl;
	cout<<"1. Ingresar dinero en su cuenta"<<endl;
	cout<<"2. Retirar dinero de su cuenta"<<endl;
	cout<<"3. Salir de todo"<<endl;
	cout<<"Opcion: ";
	cin>>opc;
			
	switch(opc){
		case 1:
			cout<<"Poner la cantidad de dinero a ingresar: ";
			cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Dinero en su cuenta: "<<saldo;break;
			
			case 2:
				cout<<"Poner aca la cantidad de dinero que desea retirar: ";
				cin>>retiro;
				
				if(retiro > saldo_inicial){
					cout<<"No tiene esa cantidad de dinero en su cuenta";
				}
				else {
					saldo = saldo_inicial-retiro;
					cout<<"Su dinero en cuenta es: "<<saldo;
				}
				case 3: break;
	}
	
	return 0;
}	
printf ("\n Presiona ENTER para elegir otro programa"); 

system("pause>nul"); // Pausa                
                break;
                            
case 16:		
// Calcular la hipotenusa
{
  float c1,c2,hipo=0;
 
  cout << "Digite cateto 1: ";
  cin >> c1;
  cout << "Digite cateto 2: ";
  cin >> c2;
 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
 
  cout << "La hipotenusa es " << hipo << endl;
 
  return 0;
}
system("pause>nul"); // Pausa                
                break;
                
case 17:		
// alumnos aprobados y reprobados 
{	
int aprobados= 0, reprobados= 0, resultado= 0, estudiantes= 1;


 while(estudiantes <= 10)
    {
    	 printf("TECLEE EL RESULTADO: 1 para aprobados y reprobados 0 ");
    scanf("%d", &resultado);
    
if(resultado == 1 )
{
    aprobados= aprobados+1;
}
else
{
    reprobados= reprobados+1;
}
    
estudiantes= estudiantes+1;        
    }
 printf("\n APROBADOS: %d", aprobados);
printf("\n REPROBADOS: %d", reprobados);

if(aprobados > 8)
{
    printf("\n AUMENTAR LA COLEGIATURA");
}
 return 0;	
}              
    
system("pause>nul"); // Pausa                
                break;
 
 case 18:		
// calcula cuantos dias tiene el mes 
{
    int mes,dias,a;
    cout<<"ingrese el mes y el a"<<char(164)<<"o"<<endl;
    cin>>mes>>a;
 
switch (mes)
{
case 1: case 3: case 5: case 7: case 8: case 10: case 12:
dias = 31;
break;
case 4: case 6: case 9: case 11:
dias = 30;
break;
case 2:if(a%4==0)
dias = 28;
    else
dias=29;
break;
default:
printf("El mes no es válido\n");
break;
}
cout<<dias<<endl;
cin.ignore();return 0;
  }
   
system("pause>nul"); // Pausa                
                break;
                                                          
 
 case 19:		
// verificar si es numero negativo o positivo  
{
	int numero;
	
	printf("INTRODUZCA EL NUMERO: ");
    scanf("%d", &numero);
	   
if (numero >=1 )
{
    printf("NUMERO POSITIVO");
}
else
{
    printf("NUMERO NEGATIVO");
}

cin.ignore();

cin.get();
}			
   
system("pause>nul"); // Pausa                
                break;
  case 20:		
// desplegar los numeros del 1000 al 1  
{ 
int C;
C = 1000;
while(C > 0)
    {
    	printf("\n %d ", C);
    	 C = C-1;
    }
 cin.ignore();
 cin.get();
 }
   
system("pause>nul"); // Pausa                
                break;                                          
    
				case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 

    return 0;
}
