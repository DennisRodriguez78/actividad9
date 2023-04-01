#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int tamaño=0;
    int promedio;
    int nota1[61];
    int nota2[61];
    int nota3[61];
    int nota4[61];

    int id[10];
    string nombre[40];
    string apellido[40];
	
    cout<<"Agregar cantidad de Estudiantes"<<endl;
    cin>>tamaño;
    for(int i=0; i <tamaño; i++){
        cout<<"Estudiante"<<i+1<<endl;
        cout<<"su id:";
        cin>>id[i];
        cout<<"su nombre:";
	    cin>>nombre[i];
         cout<<"su apellido:";
	    cin>>apellido[i];
         cout<<"nota 1:";
	    cin>>nota1[i];
         cout<<"nota 2:";
	    cin>>nota2[i];
         cout<<"nota 3:";
	    cin>>nota3[i];
         cout<<"nota4:";
	    cin>>nota4[i];
    }   
     for(int i=0; i <tamaño; i++){
        promedio=(nota1[i] + nota2[i] + nota3[i] + nota4[i])/4;
        cout<<"------------------------------"<<endl;  
        cout<<"Estudiante"<<i+1<<endl;
        cout<<"Id: "<<id[i]<<endl;
        cout<<"Nombre:" <<nombre[i]<<endl;
        cout<<"Apellido: "<<apellido[i]<<endl;
        cout<<"Promedio: "<<promedio<<endl;
          if (promedio>= 60) {
            cout << "Aprobado" << endl;
        } else {
            cout << "Reprobado" << endl;
        }

        
        }
       

    system("pause");
}
