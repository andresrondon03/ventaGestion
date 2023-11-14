/*
Los atributos de color est�n especificados con DOS d�gitos hexadecimales (el primero
corresponde al segundo plano; el segundo al primer plano). Los d�gitos
pueden coincidir con cualquiera de los siguientes valores:
    0 = Negro       8 = Gris
    1 = Azul        9 = Azul claro
    2 = Verde       A = Verde claro
    3 = Aguamarina  B = Aguamarina claro
    4 = Rojo        C = Rojo claro
    5 = P�rpura     D = P�rpura claro
    6 = Amarillo    E = Amarillo claro
    7 = Blanco      F = Blanco brillante
*/
/*
Programa: Proyecto final
Autores: Andr�s Felipe Rond�n Lara - Andres Felipe Perez Motta - Andres Felipe Tovar Molina
Fecha: 27 de noviembre de 2023
*/

//Declaramos variables
#include <iostream>
#include <locale.h>
#include <string>
#include <sstream> 
#include <cstdlib> 

using namespace std;

//Se incluyen las funciones de los submen�s
void menu1();
void menu2();
void menu3();
//Incluimos funciones que utilizaremos para la ejecucui�n del programa
bool EsEntero(const string& str);
int ObtenerEnteroValido(const string& mensaje);



int main(){
	//Esta orden permite los caracteres especiales
	setlocale(LC_ALL, "");
	system("cls");//Limpia pantalla
	int n;
	//Se crea la portada del programa
	system("color A");
	cout<<"\t\t\tINVENTAVENTA\n";
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
	n = ObtenerEnteroValido("\tPresione 0 para continuar\t");
	system("cls");
	
	// ���Se inicia todo el programa!!!
	
	//Se ejecuta el men� principal que vera el usuario en pantalla 
	if (n==0) //�Qu� pasa si no es 0?
	{
		system("color 4F");
		cout<<"\t\t���Bienvenido a la gesti�n de tu emprendimiento!!!\n";
	    cout<<endl;
	    int menu;
	    //Se ingresa el men� principal
	    do{
	    	cout<<"\t�Que deseas hacer hoy?\n";
			cout<<"1. Revisar tus productos\n";
			cout<<"2. Ventas\n";
			cout<<"3. Devoluciones\n";
			cout<<"4. Salir\n"<<endl;
			menu = ObtenerEnteroValido("Por favor, ingresa una opci�n: ");
			cout<<endl<<endl;
			cout<<"\t\tSiempre disponible para ayudarte :D\n";
			//Se limitan las respuestas del usuario
		    while (menu<0||menu>4){
		    	cout<<"La opci�n que seleccionaste no se encuentra en el men� \n";
		    	menu = ObtenerEnteroValido("Por favor, selecciona una opci�n v�lida \n");
			}
			//Se ejecutan las distintas opciones que pudo elegir el usuario en el men� principal
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
		cout<<"\t\t���Sigue as�, vas por buen camino!!!\n";
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
		cout<<"\t\tNos vemos en una pr�xima ocasi�n, �xitos :D\n";
		system("pause");
	} else{
		n = ObtenerEnteroValido("\tPresione 0 para continuar\t");
	}
	return 0;
}

//Se desarrollan las funciones

void menu1(){
	int menu1;
	do{
		system("cls");
		system("color 3F");
	    cout<<"\tTus productos \n"; //Se le pide al usuario una opci�n
	    cout<<endl;
	    cout<<"1. Crear producto. \n";
	    cout<<"2. Listar los productos. \n";
	    cout<<"3. A�adir existencia a un producto. \n";
	    cout<<"4. Salir. \n";
	    cout<<endl;
	    menu1 = ObtenerEnteroValido("Por favor, ingresa una opci�n: ");
	    //Se valida que el programa no acepte otro n�mero aparte de los que se permiten en el men�
	    while (menu1<0||menu1>4){
	    	cout<<"La opci�n que seleccionaste no se encuentra en el men� \n";
	    	menu1 = ObtenerEnteroValido("Por favor, selecciona una opci�n v�lida \n");
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el men� de productos
	    switch(menu1){
	    	case 1:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n��Crear producto!! \n";
	    		break;
	    	case 2:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n��Listar los productos!! \n";
	    		
	    		cout<<endl;
	    		break;
	    	case 3:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n��A�adir existencia a un producto!! \n";
	    		
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
	    cout<<"\t��Ventas!! \n"; //Se le pide al usuario una opci�n
	    cout<<endl;
	    cout<<"1. Registrar una nueva venta. \n";
	    cout<<"2. Registro de ventas. \n";
	    cout<<"3. Salir. \n";
	    cout<<endl;
	    menu2 = ObtenerEnteroValido("Por favor, ingresa una opci�n: ");
	    //Se valida que el programa no acepte otro n�mero aparte de los que se permiten en el men�
	    while (menu2<0||menu2>3){
	    	cout<<"La opci�n que seleccionaste no se encuentra en el men� \n";
	    	menu2 = ObtenerEnteroValido("Por favor, selecciona una opci�n v�lida \n");
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el men� de ventas
	    switch(menu2){
	    	case 1:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n!!Registrar una nueva venta!! \n";
	    		break;
	    	case 2:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n��Registro de ventas!! \n";
	    		
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
	    cout<<"\t��Devoluciones!! \n"; //Se le pide al usuario una opci�n
	    cout<<endl;
	    cout<<"1. Registrar una devoluci�n. \n";
	    cout<<"2. Registro de devoluciones. \n";
	    cout<<"3. Salir. \n";
	    cout<<endl;
	    menu3 = ObtenerEnteroValido("Por favor, ingresa una opci�n: ");
	    //Se valida aue el programa no acepte otro n�mero aparte de los que se permiten en el men�
	    while (menu3<0||menu3>3){
	    	cout<<"La opci�n que seleccionaste no se encuentra en el men� \n";
	    	menu3 = ObtenerEnteroValido("Por favor, selecciona una opci�n v�lida \n");
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el men� de devoluciones
	    switch(menu3){
	    	case 1:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n!!Registrar una devoluci�n!! \n";
	    		break;
	    	case 2:
	    		system ("color ");
	    		system ("cls");
	    		cout<<"\n��Registro de devoluciones!! \n";
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
            cout << "Entrada no v�lida. Por favor, ingrese un n�mero entero." << endl;
        }
    }
}
