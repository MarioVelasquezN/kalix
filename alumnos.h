// header clase original
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class alumnos{

    alumnos();
    string nom;
    string carrera;
    float indice;

    void establecerNombre();
    void establecerCarrera(string pCarrera);
    void establecerIndice(float pIndice);

    string devolverNombre(string n);
    string devolverCarrera(string c);
    float devolverIndice(float i);

    alumnos::alumnos(){

    // nom="";
    // carrera="";
    // indice=0;
}

void alumnos::alumnos::establecerNombre(){
    cout<<"\nIngrese el nombre del Alumno: \n";
    cin>>nom;
    devolverNombre(nom);
}

void alumnos::establecerCarrera(string pCarrera){

    cout<<"\n Ingrese Carrera:\n";
    cout<<"\n sus opciones :L1,L2,l1,l2: \n";
    if(pCarrera!="L1" && pCarrera!="L1" && pCarrera!="l1" && pCarrera!="l2"){
        cin>>pCarrera;
        devolverCarrera(pCarrera);
    }else{
        cout<<"Error, carrera incorrecta";
    }
}

void alumnos::establecerIndice(float pIndice){
    cout<<"\n ingrese el indice: \n";
    if(pIndice>0 && pIndice<100)
        devolverIndice(pIndice);
    else
        cout<<"\n Error al ingresar Indice!!!\n ";
}

string alumnos::devolverNombre(string n){
    return n;
}

string alumnos::devolverCarrera(string c){
    return c;
}

float alumnos::devolverIndice(float i){
    return i;
}

};
