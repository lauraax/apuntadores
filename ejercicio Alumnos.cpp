#include <iostream> 

#include <string> 

using namespace std; 


struct Alumno { 

    string nombre; 

    int nota[3]; 

    string codigo; 

}; 

  
float calcularPromedio( Alumno& estudiante) {
    float suma = 0.0;
    for (int i = 0; i < 3; ++i) {
        suma += estudiante.nota[i];
    }
    return suma / 3.0;
}

int main() { 

    const int tamano=3; 

    Alumno estudiantes[tamano]; 

     

    Alumno* ptrEstudiantes = estudiantes; // Apuntador a la estructura 

  

for (int i = 0; i < tamano; ++i) { 

	cout << "ingrese nombre estudiante " << i << ": " << endl; 
	 cin >> (ptrEstudiantes + i)->nombre; 
	
	cout << "ingrese codigo estudiante " << i << ": " << endl; 
	cin >> (ptrEstudiantes + i)->codigo; 

    cout<<"Ingrese notas del estudiante "<<i<<": "<<endl; 
    for (int j = 0; j < 3; ++j) { 
        	cin>> (ptrEstudiantes+i)->nota[j]; 

    } 

}

cout << "Datos de los estudiantes:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Estudiante " << i + 1 << ":" << endl;
        cout << "Nombre: " << (ptrEstudiantes + i)->nombre << endl;
        cout << "Codigo: "<< (ptrEstudiantes+i)->codigo<<endl;
        cout << "Notas: ";
        for (int j = 0; j < 3; ++j) {
            cout << (ptrEstudiantes + i)->nota[j] << " ";
        }
        cout<<endl;
        cout << "Promedio de notas: " << calcularPromedio(*(ptrEstudiantes + i)) << endl;
     

} 


    return 0; 

} 
