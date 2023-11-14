/*
Los atributos de color están especificados con DOS dígitos hexadecimales (el primero
corresponde al segundo plano; el segundo al primer plano). Los dígitos
pueden coincidir con cualquiera de los siguientes valores:
    0 = Negro       8 = Gris
    1 = Azul        9 = Azul claro
    2 = Verde       A = Verde claro
    3 = Aguamarina  B = Aguamarina claro
    4 = Rojo        C = Rojo claro
    5 = Púrpura     D = Púrpura claro
    6 = Amarillo    E = Amarillo claro
    7 = Blanco      F = Blanco brillante
*/
/*
Programa: Proyecto final
Autores: Andrés Felipe Rondón Lara - Andres Felipe Perez Motta - Andres Felipe Tovar Molina
Fecha: 27 de noviembre de 2023
*/

//Declaramos variables
#include <iostream>
#include <locale.h>

//Se incluyen las funciones de los submenús
void menu1();
void menu2();
void menu3();


using namespace std;

int main(){
	//Esta orden permite los caracteres especiales
	setlocale(LC_ALL, "");
	system("cls");//Limpia pantalla
	int n;
	//Se crea la portada del programa
	system("color A");
	cout<<"\t\t\tTitulo del proyecto\n";
	cout<<endl;
	cout<<"\t\t                *****             \n";
	cout<<"\t\t                *****             \n";
	cout<<"\t\t     ***************************  \n";
	cout<<"\t\t     ***************************  \n";
	cout<<"\t\t     ***************************  \n";
	cout<<"\t\t     *****      *****     ******  \n";
	cout<<"\t\t     *****      *****             \n";
	cout<<"\t\t     *****      *****             \n";
	cout<<"\t\t     ***************************  \n";
	cout<<"\t\t     ***************************  \n";
	cout<<"\t\t     ***************************  \n";
	cout<<"\t\t                *****      *****  \n";
	cout<<"\t\t                *****      *****  \n";
	cout<<"\t\t     ******     *****      *****  \n";
	cout<<"\t\t     ***************************  \n";
	cout<<"\t\t     ***************************  \n";
	cout<<"\t\t     ***************************  \n";
	cout<<"\t\t                *****             \n";
	cout<<"\t\t                *****             \n";
	cout<<endl;
	cout<<"\tPresione 0 para continuar\t";
	cin>>n;
	system("cls");
	
	// ¡¡¡Se inicia todo el programa!!!
	
	//Se ejecuta el menú principal que vera el usuario en pantalla 
	if (n==0)
	{
		system("color 4F");
		cout<<"\t\t¡¡¡Bienvenido a la gestión de tu emprendimiento!!!\n";
	    cout<<endl;
	    int menu;
	    //Se ingresa el menú principal
	    do{
	    	cout<<"\t¿Que deseas hacer hoy?\n";
			cout<<"1. Revisar tus productos\n";
			cout<<"2. Ventas\n";
			cout<<"3. Devoluciones\n";
			cout<<"4. Salir\n"<<endl;
			cout<<"Por favor, ingresa una opción: ";
			cin>>menu;
			cout<<endl<<endl;
			cout<<"\t\tSiempre disponible para ayudarte :D\n";
			//Se limitan las respuestas del usuario
		    while (menu<0||menu>4){
		    	cout<<"La opción que seleccionaste no se encuentra en el menú \n";
		    	cout<<"Por favor, selecciona una opción válida \n";
		    	cin>>menu;
			}
			//Se ejecutan las distintas opciones que pudo elegir el usuario en el menú principal
			switch(menu){
		    	case 1:
		    		menu1();
		    		break;
		    	case 2:
		    		menu2();
		    		break;
		    	case 3:
		    		menu3();
		    		break;
			}
			
		}while (menu!=4);
		system("cls");
		system("color 6");
		cout<<"\t\t¡¡¡Sigue así, vas por buen camino!!!\n";
		cout<<endl;
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<"\t\t **************************** \n";
		cout<<endl;
		cout<<"\t\tNos vemos en una próxima ocasión, éxitos :D\n";
		system("pause");
	}
	return 0;
}

//Se desarrollan las funciones

void menu1(){
	int menu1;
	do{
		system("cls");
		system("color 3F");
	    cout<<"\tTus productos \n"; //Se le pide al usuario una opción
	    cout<<endl;
	    cout<<"1. Crear producto. \n";
	    cout<<"2. Listar los productos. \n";
	    cout<<"3. Añadir existencia a un producto. \n";
	    cout<<"4. Salir. \n";
	    cout<<endl;
	    cout<<"Por favor, ingresa una opción: ";
	    cin>>menu1;
	    //Se valida que el programa no acepte otro número aparte de los que se permiten en el menú
	    while (menu1<0||menu1>4){
	    	cout<<"La opción que seleccionaste no se encuentra en el menú \n";
	    	cout<<"Por favor, selecciona una opción válida \n";
	    	cin>>menu1;
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el menú de productos
	    switch(menu1){
	    	case 1:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n¡¡Crear producto!! \n";
	    		break;
	    	case 2:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n¡¡Listar los productos!! \n";
	    		
	    		cout<<endl;
	    		break;
	    	case 3:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n¡¡Añadir existencia a un producto!! \n";
	    		
	    		cout<<endl;
	    		break;
		}
	}while (menu1!=4);
	system ("cls");
	system("color 4F");
}

void menu2(){
	int menu2;
	do{
		system("cls");
		system("color 3F");
	    cout<<"\t¡¡Ventas!! \n"; //Se le pide al usuario una opción
	    cout<<endl;
	    cout<<"1. Registrar una nueva venta. \n";
	    cout<<"2. Registro de ventas. \n";
	    cout<<"3. Salir. \n";
	    cout<<endl;
	    cout<<"Por favor, ingresa una opción: ";
	    cin>>menu2;
	    //Se valida que el programa no acepte otro número aparte de los que se permiten en el menú
	    while (menu2<0||menu2>3){
	    	cout<<"La opción que seleccionaste no se encuentra en el menú \n";
	    	cout<<"Por favor, selecciona una opción válida \n";
	    	cin>>menu2;
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el menú de ventas
	    switch(menu2){
	    	case 1:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n!!Registrar una nueva venta!! \n";
	    		break;
	    	case 2:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n¡¡Registro de ventas!! \n";
	    		
	    		cout<<endl;
	    		break;
		}
	}while(menu2!=3);
	system ("cls");
	system("color 4F");
}

void menu3(){
	int menu3;
	do{
		system ("cls");
		system("color 3F");
	    cout<<"\t¡¡Devoluciones!! \n"; //Se le pide al usuario una opción
	    cout<<endl;
	    cout<<"1. Registrar una devolución. \n";
	    cout<<"2. Registro de devoluciones. \n";
	    cout<<"3. Salir. \n";
	    cout<<endl;
	    cout<<"Por favor, ingresa una opción: ";
	    cin>>menu3;
	    //Se valida aue el programa no acepte otro número aparte de los que se permiten en el menú
	    while (menu3<0||menu3>3){
	    	cout<<"La opción que seleccionaste no se encuentra en el menú \n";
	    	cout<<"Por favor, selecciona una opción válida \n";
	    	cin>>menu3;
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el menú de devoluciones
	    switch(menu3){
	    	case 1:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n!!Registrar una devolución!! \n";
	    		break;
	    	case 2:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n¡¡Registro de devoluciones!! \n";
	    		break;
		}
	}while(menu3!=3);
	system ("cls");
	system("color 4F");
}
