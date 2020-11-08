#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> strings;
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
            string str;

            cout<< "str: ";
            cin >> str; cin.ignore();

            strings.push_back(str);

        }

        else if (opcion == "2"){
            for(size_t i = 0; i < strings.size(); i++){
                cout << strings[i]<< ", ";
            }
            cout << endl;

        }

        else if (opcion == "3"){
            size_t n;
            string str;

            cout<< "Tam: ";
            cin >> n;
            cout << "str: ";
            cin >> str; cin.ignore();

            strings = vector<string>(n, str);

        }

        else if (opcion == "4"){ //frente
            if(strings.empty()){
                cout << "Vector vacio" << endl;
            }
            else{
                cout<< strings.front() << endl;
            }

        }

        else if (opcion == "5"){ //ultimo
            if(strings.empty()){
                cout << "Vector vacio" << endl;
            }
            else{
                cout<< strings.back() << endl;
            }

        }

        else if (opcion == "6"){ //ordenar
            sort(strings.begin(), strings.end()); //menor a mayor
            //sort(strings.begin(), strings.end(),greater<string>()); //mayor a menor
        }

        else if (opcion == "7"){ //insertar en posicion valida
            size_t pos;
            string str;
            cout<< "Posicion: ";
            cin >> pos;
            cout << "str: ";
            cin >> str; cin.ignore();

            if(pos >= strings.size()){ //aqui el lo tiene como >=
                cout<< "Posicion no valida "<< endl;
            }
            else{
                strings.insert(strings.begin()+pos, str);
            }
        }

        else if (opcion == "8"){
            size_t pos;
            cout<< "Posicion: "<<endl;
            cin >> pos; cin.ignore();

            if (pos >= strings.size()){
                cout<< "Posicion no valida"<< endl;
            }
            else{
                strings.erase(strings.begin()+pos);
            }
        }

        else if (opcion == "9"){
            if(strings.empty()){
                cout << " Vector vacío"<< endl;
            }
            else{
                strings.pop_back();
            }
        }

        else if(opcion == "0"){
            break;
        }

        }
    
    return 0;
}
