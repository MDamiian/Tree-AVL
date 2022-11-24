#include <iostream>
#include "menu.hpp"

using namespace std;
void Menu::mainMenu(BTree<Integer>& myArbol) {
  int myEntero;
  char option;

  Integer myInteger;
  BTree<Integer>::Position myPosicion;

  do {
    system("cls");

    cout << "***Manejo del arbol AVL***" << endl << endl;
    cout << "|a| Insertar elemento" << endl
         << "|b| Eliminar elemento" << endl
         << "|c| Buscar elemento" << endl
         << "|d| Obtener elemento" << endl
         << "|e| Altura del arbol" << endl
         << "|f| Altura del sub-arbol izquierdo" << endl
         << "|g| Altura del sub-arbol derecho" << endl
         << "|h| Elemento mayor" << endl
         << "|i| Elemento menor" << endl
         << "|j| Recorrido pre-orden" << endl
         << "|k| Recorrido en-orden" << endl
         << "|l| Recorrido pos-orden" << endl
         << "|m| Imprimir arbol" << endl
         << "|n| Eliminar arbol" << endl
         << "|o| Cargar arbol" << endl
         << "|p| Guardar arbol" << endl
         << "|q| Salir" << endl << endl
         << "Seleccione una opcion: ";

    cin >> option;
    cin.ignore();
    system("cls");

    switch(option) {
      case 'a':
        cout << "Ingrese el elemento a insertar: ";
        cin >> myEntero;
        myArbol.insertData(myEntero);
        cout << "Elemento " << myEntero << " insertado." << endl;
        break;

      case 'b':
        cout << "Ingrese el elemento a eliminar: ";
        cin >> myEntero;
        myArbol.deleteData(myEntero);
        cout << "Elemento " << myEntero << " eliminado." << endl;
        break;

      case 'c':
        cout << "Ingrese el elemento a buscar: ";
        cin >> myEntero;
        myPosicion = myArbol.findData(myEntero);

        if(myPosicion != nullptr) {
          cout << "El elemento " << myEntero << " se encuentra en el arbol." << endl;
          }

        else {
          cout << "El elemento " << myEntero << " no se encontro en el arbol." << endl;
          }
        break;

      case 'd':
        cout << "Ingrese el elemento para obtener: ";
        cin >> myEntero;
        myInteger = myArbol.retrieve(myArbol.findData(myEntero));
        cout << "Elemento " << myInteger << " obtenido del arbol." << endl;
        break;

      case 'e':
        cout << "Altura del arbol: " << myArbol.getHeight()
             << endl;
        break;

      case 'f':
        cout << "Altura del sub-arbol izquierdo: " << myArbol.getHeightLeft() << endl;
        break;

      case 'g':
        cout << "Altura del sub-arbol derecho: " << myArbol.getHeightRight() << endl;
        break;

      case 'h':
        cout << "Elemento mayor: " << myArbol.retrieve(myArbol.getHighest()) << endl;
        break;

      case 'i':
        cout << "Elemento menor: " << myArbol.retrieve(myArbol.getLowest()) << endl;
        break;

      case 'j':
        cout << "Recorrido preorder: " << endl
             << myArbol.parsePreOrder() << endl;
        break;

      case 'k':
        cout << "Recorrido inorder: " << endl
             << myArbol.parseInOrder() << endl;
        break;

      case 'l':
        cout << "Recorrido posorder: " << endl
             << myArbol.parsePostOrder() << endl;
        break;

      case 'm':
        cout << endl << myArbol.toString() << endl;
        break;

      case 'n':
        myArbol.deleteAll();
        cout << "Arbol eliminado." << endl;
        break;

      case 'o':
        myArbol.readFromDisk();
        cout << "Arbol cargado." << endl;
        break;

      case 'p':
        myArbol.writeToDisk();
        cout << "Arbol guardado." << endl;
        break;

      case 'q':
        break;
      }

    cout << endl;
    system("pause");
    }
  while(option != 'q');
  }
