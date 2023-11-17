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
#include <string>
#include <sstream> 
#include <cstdlib> 

using namespace std;

//Se incluyen las funciones de los submenús
void menu1();
void menu2();
void menu3();
//Incluimos funciones que utilizaremos para la ejecucuión del programa
bool EsEntero(const string& str);
int ObtenerEnteroValido(const string& mensaje);



int main(){
	//Esta orden permite los caracteres especiales
	setlocale(LC_ALL, "");
	system("cls");//Limpia pantalla
	int n;
	//Se crea la portada del programa
	system("color 6");
	cout<<endl;
	cout<<"\t                            *****************              *****************                                  \n";
	cout<<"\t                            *****************              *****************                                  \n";
	cout<<"\t                            *****************              *****************                                  \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                                                                                              \n";
	cout<<"\t ****    ****  ****       ***   *****  ************  ************  ************   ************  ************  \n";
	cout<<"\t ****    ****  *****      ***   *****  ************  ************  ************   ****    ****  ************  \n";
	cout<<"\t ****    ****  *** **     ***   *****  ****              ****      ****    ****   ****    ****  ****          \n";
	cout<<"\t ****    ****  ***  **    ***   *****  ************      ****      ****    ****   ************  ************  \n";
	cout<<"\t ****    ****  ***   **   ***   *****  ************      ****      ****    ****   **** ****     ************  \n";
	cout<<"\t ****    ****  ***    **  ***   *****          ****      ****      ****    ****   ****  ****    ****          \n";
	cout<<"\t ************  ***     ** ***   *****  ************      ****      ************   ****   ****   ************  \n";
	cout<<"\t ************  ***      *****   *****  ************      ****      ************   ****    ****  ************  \n";
	cout<<"\t                                                                                                              \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                ****************************************                                      \n";
	cout<<"\t                                ****************************************                                      \n";
	cout<<"\t                                ****************************************                                      \n";
	cout<<endl;
	system ("pause");
	system("cls");
	
	// ¡¡¡Se inicia todo el programa!!!
	
	//Se ejecuta el menú principal que vera el usuario en pantalla 
	system("color 4F");
	cout<<"\t\t\t\t¡¡¡Bienvenido a la gestión de tu emprendimiento!!!\n";
    cout<<endl;
    int menu;
    //Se ingresa el menú principal
    do{
    	cout<<"\t\t¿Que deseas hacer hoy?\n";
		cout<<"\t1. Revisar tus productos\n";
		cout<<"\t2. Ventas\n";
		cout<<"\t3. Devoluciones\n";
		cout<<"\t4. Salir\n"<<endl;
		menu = ObtenerEnteroValido("Por favor, ingresa una opción: ");
		cout<<endl<<endl;
		cout<<"\t\tSiempre disponible para ayudarte :D\n";
		//Se limitan las respuestas del usuario
	    while (menu<0||menu>4){
	    	cout<<"La opción que seleccionaste no se encuentra en el menú \n";
	    	menu = ObtenerEnteroValido("Por favor, selecciona una opción válida \n");
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
	cout<<"\t\t\t\t\t¡¡¡Sigue así, vas por buen camino!!!\n";
	cout<<endl;
	cout<<"\t                            *****************              *****************                                  \n";
	cout<<"\t                            *****************              *****************                                  \n";
	cout<<"\t                            *****************              *****************                                  \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                                                                                              \n";
	cout<<"\t ****    ****  ****       ***   *****  ************  ************  ************   ************  ************  \n";
	cout<<"\t ****    ****  *****      ***   *****  ************  ************  ************   ****    ****  ************  \n";
	cout<<"\t ****    ****  *** **     ***   *****  ****              ****      ****    ****   ****    ****  ****          \n";
	cout<<"\t ****    ****  ***  **    ***   *****  ************      ****      ****    ****   ************  ************  \n";
	cout<<"\t ****    ****  ***   **   ***   *****  ************      ****      ****    ****   **** ****     ************  \n";
	cout<<"\t ****    ****  ***    **  ***   *****          ****      ****      ****    ****   ****  ****    ****          \n";
	cout<<"\t ************  ***     ** ***   *****  ************      ****      ************   ****   ****   ************  \n";
	cout<<"\t ************  ***      *****   *****  ************      ****      ************   ****    ****  ************  \n";
	cout<<"\t                                                                                                              \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                ****************************************                                      \n";
	cout<<"\t                                ****************************************                                      \n";
	cout<<"\t                                ****************************************                                      \n";
	cout<<endl;
	cout<<"\t\t\t\tNos vemos en una próxima ocasión, éxitos :D\n";
	system("pause");
	system("cls");
	cout<<"\t\t\t¡¡¡ Créditos del programa !!!\n"<<endl;
	cout<<"\tAutores: Andrés Felipe Rondón - Andres Felipe Perez - Andres Felipe Tovar\n"<<endl;
	cout<<"\tIngeniería de sistemas\n"<<endl;
	cout<<"\tProgramación Básica 2023-3\n"<<endl;
	system("pause");
	return 0;
}


//Se desarrollan las funciones

void menu1(){
	int menu1;
	do{
		system("cls");
		system("color 3F");
	    cout<<"\t\tTus productos \n"; //Se le pide al usuario una opción
	    cout<<endl;
	    cout<<"\t1. Crear producto. \n";
	    cout<<"\t2. Listar los productos. \n";
	    cout<<"\t3. Añadir existencia a un producto. \n";
	    cout<<"\t4. Salir. \n";
	    cout<<endl;
	    menu1 = ObtenerEnteroValido("Por favor, ingresa una opción: ");
	    //Se valida que el programa no acepte otro número aparte de los que se permiten en el menú
	    while (menu1<0||menu1>4){
	    	cout<<"La opción que seleccionaste no se encuentra en el menú \n";
	    	menu1 = ObtenerEnteroValido("Por favor, selecciona una opción válida \n");
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el menú de productos
	    switch(menu1){
	    	case 1:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\t\t¡¡Crear producto!! \n";
	    		break;
	    	case 2:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\t\t¡¡Listar los productos!! \n";
	    		
	    		cout<<endl;
	    		break;
	    	case 3:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\t\t¡¡Añadir existencia a un producto!! \n";
	    		
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
	    cout<<"\t\t¡¡Ventas!! \n"; //Se le pide al usuario una opción
	    cout<<endl;
	    cout<<"\t1. Registrar una nueva venta. \n";
	    cout<<"\t2. Registro de ventas. \n";
	    cout<<"\t3. Salir. \n";
	    cout<<endl;
	    menu2 = ObtenerEnteroValido("Por favor, ingresa una opción: ");
	    //Se valida que el programa no acepte otro número aparte de los que se permiten en el menú
	    while (menu2<0||menu2>3){
	    	cout<<"La opción que seleccionaste no se encuentra en el menú \n";
	    	menu2 = ObtenerEnteroValido("Por favor, selecciona una opción válida \n");
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el menú de ventas
	    switch(menu2){
	    	case 1:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\t\t!!Registrar una nueva venta!! \n";
	    		break;
	    	case 2:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\t\t¡¡Registro de ventas!! \n";
	    		
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
	    cout<<"\t\t¡¡Devoluciones!! \n"; //Se le pide al usuario una opción
	    cout<<endl;
	    cout<<"\t1. Registrar una devolución. \n";
	    cout<<"\t2. Registro de devoluciones. \n";
	    cout<<"\t3. Salir. \n";
	    cout<<endl;
	    menu3 = ObtenerEnteroValido("Por favor, ingresa una opción: ");
	    //Se valida aue el programa no acepte otro número aparte de los que se permiten en el menú
	    while (menu3<0||menu3>3){
	    	cout<<"La opción que seleccionaste no se encuentra en el menú \n";
	    	menu3 = ObtenerEnteroValido("Por favor, selecciona una opción válida \n");
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el menú de devoluciones
	    switch(menu3){
	    	case 1:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\t\t!!Registrar una devolución!! \n";
	    		break;
	    	case 2:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\t\t¡¡Registro de devoluciones!! \n";
	    		break;
		}
	}while(menu3!=3);
	system ("cls");
	system("color 4F");
}
	
bool EsEntero(const string& str) {
    stringstream ss(str);
    int n;
    return (ss >> n) && ss.eof();
}

int ObtenerEnteroValido(const string& mensaje) {
    string entrada;
    while (true) {
        cout << mensaje;
        cin >> entrada;

        if (EsEntero(entrada)) {
            return atoi(entrada.c_str()); // Utiliza atoi para convertir la entrada a un entero y lo devuelve
        } else {
            cout << "Entrada no válida. Por favor, ingrese un número entero." << endl;
        }
    }
}
