#include <iostream>
using namespace std;



///PROTOTIPO valorDevuelto Nombre (tipo , tipo ...)
void mostrarMenu();
cargaDatos (vecNumSala, vecPelicula);

int main()
{
    setlocale(LC_CTYPE,"spanish");///alfabeto espa�ol

    int opcion,peliculasVendLocal=0;
    int vecNumSala [20]= {0};
    int vecPelicula [10]= {0};



    do
    {
        mostrarMenu();
        cout << "Ingrese una opci�n: ";
        cin >> opcion;
        system ("cls");

        switch (opcion)
        {
        case 1:
            cout << "Ha seleccionado la Opci�n 1 (carga de datos)" << endl;

            cargaDatos(vecNumSala, vecPelicula);
            break;
        case 2:
            cout << "Ha seleccionado la Opci�n 2 (PUNTO A)" << endl;
            // Agrega aqu� el c�digo correspondiente a la Opci�n 2
            break;
        case 3:
            cout << "Ha seleccionado la Opci�n 3 (P�NTO B)" <<endl;
            // Agrega aqu� el c�digo correspondiente a la Opci�n 3
            break;
        case 4:
            cout << "Ha seleccionado la Opci�n 4 (PUNTO C)" << endl;
            // Agrega aqu� el c�digo correspondiente a la Opci�n 4
            break;
        case 5:
            cout << "Ha seleccionado la Opci�n 5 (PUNTO D)" << endl;
            // Agrega aqu� el c�digo correspondiente a la Opci�n 5
            break;
        case 0:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opci�n inv�lida. Intente nuevamente." << endl;
            break;

        }

    }
    while (opcion != 0);


    return 0;
}


///FUNCIONES DESARROLLADAS
void mostrarMenu()
{
    cout << "=== Men� Ventas Cine ===" << endl;
    cout << "1. CARGAR DATOS" << endl;
    cout << "2. PUNTO A" << endl;
    cout << "3. PUNTO B" << endl;
    cout << "4. PUNTO C" << endl;
    cout << "5. PUNTO D" << endl;
    cout << "0. Salir" << endl;
    cout << "=============" <<endl;
}

void cargaDatos (vecNumSala, vecPelicula,&peliculasVendLocal) /// funcion para el ingreso de datos
{
    int numVenta,dia,numSala,cantButacas,impTotal;

    cout << "ingrese el numero de venta: ";
    cin >> numVenta;

    while (numVenta =! 0)///mientras el num venta no sea cero se sigue sumando datos
    {
        cout << "ingrese el dia: ";
        cin >> dia;
        cout << "ingrese el numero de sala: "
             cin >> numSala;
        cout << "ingrese el numero de pelicula: ";
        cin>> numPelicula;
        cout << "cant de butacas: ";
        cin >> cantButacas;
        cout << "ingrese el importe: ";
        cin >> impTotal;




        cout << "ingrese el numero de venta: ";
        cin >> numVenta;
    }



}




