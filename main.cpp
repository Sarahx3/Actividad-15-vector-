#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> enteros;
    string opcion;
    
    while(true){
        cout<< "1) Agregar al final\n"<<
        "2) Mostrar\n" <<
        "3) Inicializar\n"<<
        "4) Frente\n" <<
        "5) Ultimo\n" <<
        "6) Ordenar\n" <<
        "7) Insertar\n" <<
        "8) Eliminar\n" <<
        "9) Eliminar Ultimo\n" <<
        "0) Salir\n"<<
        "Ingresar opcion: ";
        getline (cin,opcion);   
        if (opcion == "1"){
            int entero;

            cout<< "Entero: ";
            cin >> entero; cin.ignore();

            enteros.push_back(entero);

        }

        else if (opcion == "2"){
            for(size_t i = 0; i < enteros.size(); i++){
                cout << enteros[i]<< ", ";
            }
            cout << endl;

        }

        else if (opcion == "3"){
            size_t n;
            int entero;

            cout<< "Tam: ";
            cin >> n;
            cout << "Entero: ";
            cin >> entero; cin.ignore();

            enteros = vector<int>(n, entero);

        }

        else if (opcion == "4"){ //frente
            if(enteros.empty()){
                cout << "Vector vacio" << endl;
            }
            else{
                cout<< enteros.front() << endl;
            }

        }

        else if (opcion == "5"){ //ultimo
            if(enteros.empty()){
                cout << "Vector vacio" << endl;
            }
            else{
                cout<< enteros.back() << endl;
            }

        }

        else if (opcion == "6"){ //ordenar
            //sort(enteros.begin(), enteros.end()); //menor a mayor
            sort(enteros.begin(), enteros.end(),greater<int>()); //mayor a menor
        }

        else if (opcion == "7"){ //insertar en posicion valida
            size_t pos;
            int entero;
            cout<< "Posicion: ";
            cin >> pos;
            cout << "Entero: ";
            cin >> entero; cin.ignore();

            if(pos >= enteros.size()){ //aqui el lo tiene como >=
                cout<< "Posicion no valida "<< endl;
            }
            else{
                enteros.insert(enteros.begin()+pos, entero);
            }
        }

        else if (opcion == "8"){
            size_t pos;
            cout<< "Posicion: "<<endl;
            cin >> pos; cin.ignore();

            if (pos >= enteros.size()){
                cout<< "Posicion no valida"<< endl;
            }
            else{
                enteros.erase(enteros.begin()+pos);
            }
        }

        else if (opcion == "9"){
            if(enteros.empty()){
                cout << " Vector vacío"<< endl;
            }
            else{
                enteros.pop_back();
            }
        }
        
        else if(opcion == "0"){
            break;
        }

        }
    
    return 0;
}
