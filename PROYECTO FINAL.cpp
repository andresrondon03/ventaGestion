/*
Programa: Proyecto final - Sistema de gestión de inventario y ventas 
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

//Struct para registrar los productos
struct tienda{
	string Codigo;
	string Nombre;
	int Valor;
	int Cantidad;
};

//Struct para registar las ventas
struct venta{
	
}mas;

//Struct para registar los clientes
struct cliente{
	
}people;

//Struct para registrar las devoluciones
struct devolu{
	
}menos;





//Incluimos funciones que utilizaremos para la ejecucuión del programa
void unistore();
bool esEntero(const string& str);
int obtenerEnteroValido(const string& mensaje);
void creaProduc(tienda* articulos, int contador);
void printProduc(tienda* articulos, int contador);
void addExist(tienda* articulos, int contador);
//Se incluyen las funciones de los submenús
void menu1(tienda* articulos, int contador);
void menu2();
void menu3();

// <<------------------------- Inicio del programa ------------------------->> 
int main(){
	//Esta orden permite los caracteres especiales
	setlocale(LC_ALL, "");
	system("cls");//Limpia pantalla
	int n;
	//Se crea la portada del programa
	system("color 6");
	unistore();
	system ("pause");
	system("cls");
	
	// ¡¡¡Se inicia todo el programa!!!
	
	//Creamos un arreglo para los productos de la tienda
	tienda* articulos = new tienda[100];
    int contador = 0;
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
		menu = obtenerEnteroValido("Por favor, ingresa una opción: ");
		cout<<endl<<endl;
		//Se limitan las respuestas del usuario
	    while (menu<0||menu>4){
	    	cout<<"La opción que seleccionaste no se encuentra en el menú \n";
	    	menu = obtenerEnteroValido("Por favor, selecciona una opción válida \n");
		}
		cout<<"\t\tSiempre disponible para ayudarte :D\n";
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el menú principal
		switch(menu){
	    	case 1:
	    		menu1(articulos, contador);
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
	unistore();
	cout<<"\t\t\t\tNos vemos en una próxima ocasión, éxitos :D\n";
	system("pause");
	system("cls");
	cout<<"\t\t\t¡¡¡ Créditos del programa !!!\n"<<endl;
	cout<<"\tAutores: Andrés Felipe Rondón - Andrés Felipe Perez - Andrés Felipe Tovar\n"<<endl;
	cout<<"\tIngeniería de sistemas\n"<<endl;
	cout<<"\tProgramación Básica 2023-3\n"<<endl;
	system("pause");
	return 0;
}


//<<-----------------------------------------Se desarrollan las funciones------------------------------------------------------------>>

//Submenú 1
void menu1(tienda* articulos, int contador){
	int menu1;
	do{
		system("cls");
		system("color 3F");
	    cout<<"\t\tTus productos \n"; //Se le pide al usuario una opción
	    cout<<endl;
	    cout<<"\t1. Crear producto. \n";
	    cout<<"\t2. Lista de productos. \n";
	    cout<<"\t3. Añadir existencia a un producto. \n";
	    cout<<"\t4. Salir. \n";
	    cout<<endl;
	    menu1 = obtenerEnteroValido("Por favor, ingresa una opción: ");
	    //Se valida que el programa no acepte otro número aparte de los que se permiten en el menú
	    while (menu1<0||menu1>4){
	    	cout<<"La opción que seleccionaste no se encuentra en el menú \n";
	    	menu1 = obtenerEnteroValido("Por favor, selecciona una opción válida \n");
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el menú de productos
	    switch(menu1){
	    	case 1:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t¡¡Crear producto!! \n"<<endl;
	    		creaProduc( articulos, contador);
	    		cout<<endl;
	    		break;
	    	case 2:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t¡¡Listar los productos!! \n" <<endl;
	    		printProduc( articulos, contador);
	    		cout<<endl;
	    		system("pause");
	    		break;
	    	case 3:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t¡¡Añadir existencia a un producto!! \n";
	    		addExist( articulos, contador);
	    		cout<<endl;
	    		system("pause");
	    		break;
		}
	}while (menu1!=4);
	system ("cls");
	system("color 4F");
}

//Submenú 2
void menu2(){
	int menu2;
	do{
		system("cls");
		system("color 3F");
	    cout<<"\t\t¡¡Ventas!! \n"; //Se le pide al usuario una opción
	    cout<<endl;
	    cout<<"\t1. Registrar una nueva venta. \n";
	    cout<<"\t2. Registrar un nuevo cliente.\n";
	    cout<<"\t3. Registro de ventas. \n";
	    cout<<"\t4. Salir. \n";
	    cout<<endl;
	    menu2 = obtenerEnteroValido("Por favor, ingresa una opción: ");
	    //Se valida que el programa no acepte otro número aparte de los que se permiten en el menú
	    while (menu2<0||menu2>4){
	    	cout<<"La opción que seleccionaste no se encuentra en el menú \n";
	    	menu2 = obtenerEnteroValido("Por favor, selecciona una opción válida \n");
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el menú de ventas
	    switch(menu2){
	    	case 1:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t!!Registrar una nueva venta!! \n";
	    		
	    		system("pause");
	    		cout<<endl;
	    		break;
	    	case 2:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t¡¡Registrar un nuevo cliente!! \n";
	    		
	    		system("pause");
	    		cout<<endl;
	    		break;
	    	case 3:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t¡¡Registro de ventas!! \n";
	    		
	    		system("pause");
	    		cout<<endl;
	    		break;	
		}
	}while(menu2!=4);
	system ("cls");
	system("color 4F");
}

//Submenú 3
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
	    menu3 = obtenerEnteroValido("Por favor, ingresa una opción: ");
	    //Se valida aue el programa no acepte otro número aparte de los que se permiten en el menú
	    while (menu3<0||menu3>3){
	    	cout<<"La opción que seleccionaste no se encuentra en el menú \n";
	    	menu3 = obtenerEnteroValido("Por favor, selecciona una opción válida \n");
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el menú de devoluciones
	    switch(menu3){
	    	case 1:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t!!Registrar una devolución!! \n";
	    		
	    		cout<<endl;
	    		system("pause");
	    		break;
	    	case 2:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t¡¡Registro de devoluciones!! \n";
	    		
	    		cout<<endl;
	    		system("pause");
	    		break;
		}
	}while(menu3!=3);
	system ("cls");
	system("color 4F");
}

//crea un nuevo producto
void creaProduc(tienda* articulos, int contador){
	while(true){
		tienda produ;
		cout << "Por favor ingrese la información del producto: " << endl;
	    cin.ignore(); // Limpia el búfer de entrada
	    cout << "Código: ";
	    getline(cin, produ.Codigo);
	    
	    //Revisar que el codigo ya exista
	    
		cout << "Nombre: ";
	    getline(cin, produ.Nombre);
	    produ.Valor = obtenerEnteroValido("Valor unitario: ");
	    while (produ.Valor < 0) {
	        cout << "Ingrese un valor unitario válido: ";
	        produ.Valor = obtenerEnteroValido("Ingrese un valor unitario válido: ");
	    }
		produ.Cantidad = obtenerEnteroValido("Existencias: ");
	    while (produ.Cantidad < 0) {
	        produ.Cantidad = obtenerEnteroValido("Ingrese una catidad de existencias válida: ");
	    }
	    articulos[contador] = produ;
	    contador++;
	    
	    int continuar = obtenerEnteroValido("¿Desea agregar otro producto? (cualquier número para sí, 0 para no): ");
		system("cls");
        if (continuar == 0) {
            break;
        }
	}
}

//lista los productos ingresados
void printProduc(tienda* articulos, int contador){
    cout << "Los productos guardados son:\n";
    for (int i = 0; i < contador; i++) {
        cout << "\tCódigo: " << articulos[i].Codigo << endl << "\tNombre: " << articulos[i].Nombre << endl << "\tValor unitario: " << articulos[i].Valor << endl << "Existencias: " << articulos[i].Cantidad<< endl;
    }
}

void addExist(tienda* articulos, int contador){
	string cod;
	int nuevos;
    cout << "Ingrese el código del producto al que agregar existencias: "<<endl;
    getline(cin, cod);
    for (int i = 0; i < contador; i++) {
    	if( articulos[i].Codigo == cod){
    		cout << "El artículo de nombre " << articulos[i].Nombre << " tiene actualmente " << articulos[i].Cantidad <<" existencias." << endl;
    		nuevos = obtenerEnteroValido("¿Cuantas existencias le gustaria agregar?");
    		while(nuevos<0){
    			cout<<"Cantidad incorrecta, solo se admiten valores positivos"<< endl;
    			nuevos = obtenerEnteroValido("¿Cuantas existencias le gustaria agregar?");
			}
		} else{
			cout << "El código ingresado no está asociado a ningún producto."<<endl;
		}
    }
}

//retorna true si el número ingresado es entero	
bool esEntero(const string& str) {
    stringstream ss(str); // Un stringstream se utiliza para operar en cadenas como si fueran flujos de entrada/salida.
    int n;
    return (ss >> n) && ss.eof(); //Esto será verdadero si se pudo extraer un número entero de la cadena str y no hay nada más después del número.
}

//valida que la entrada por consola sea entero
int obtenerEnteroValido(const string& mensaje) {
    string entrada;
    while (true) {
        cout << mensaje;
        cin >> entrada;
        if (esEntero(entrada)) {
            return atoi(entrada.c_str()); // Utiliza atoi para convertir la entrada a un entero y lo devuelve
        } else {
            cout << "Entrada no válida. Por favor, ingrese un número entero." << endl;
        }
    }
}

void unistore(){
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
}
