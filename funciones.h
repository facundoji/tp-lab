#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

///PROTOTIPO valorDevuelto Nombre (tipo , tipo ...)


void mostrarMenu();
void cargaDatos (vecNumSala, vecPelicula);
///DESARROLLO DE LA FUNCION


void mostrarMenu()
{
    cout << "=== Menú Ventas Cine ===" << endl;
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
#endif // FUNCIONES_H_INCLUDED
