#include <iostream>
#include <vector>

#include<stdlib.h>
#include<time.h>

void Inicio() {
  std::cout << "¿De qué tema quieres que te haga preguntas?" << std::endl;
  std::cout << "4. Gestión de memoria" << std::endl;
  std::cout << "5. Gestión de almacenamiento" << std::endl;
  std::cout << "6. Mix" << std::endl;
  std::cout << "7. Preguntas tipo examen" << std::endl;
  std::cout << "Introduce el número: ";
}

std::vector<std::string> Tema4(std::vector<std::string> vector) {
  vector.push_back("MEMORIA PRINCIPAL");
  vector.push_back("REASIGNACIÓN DE DIRECCIONES");
  vector.push_back("ENLAZADO DINÁMICO");
  vector.push_back("REUBICACIÓN DE DIRECCIONES");
  vector.push_back("LIBRERIAS COMPARTIDAS");
  vector.push_back("ASIGNACIÓN CONTIGUA DE MEMORIA");
  vector.push_back("FRAGMENTACIÓN EXTERNA");
  vector.push_back("PAGINACIÓN");
  vector.push_back("FRAGMENTACIÓN INTERNA");
  vector.push_back("INTERCAMBIO");
  vector.push_back("SOPORTE HARDWARE DE LA TABLA DE PÁGINAS");
  vector.push_back("TLB");
  vector.push_back("TIEMPO DE ACCESO A MEMORIA");
  vector.push_back("PROTECCIÓN");
  vector.push_back("PÁGINAS COMPARTIDAS");
  vector.push_back("PAGINACIÓN JERÁRQUICA");
  vector.push_back("MEMORIA VIRTUAL");
  vector.push_back("PAGINACIÓN BAJO DEMANDA");
  vector.push_back("ESPACIO DE INTERCAMBIO");
  vector.push_back("COPY-ON-WRITE");
  vector.push_back("ARCHIVOS MAPEADOS EN MEMORIA");
  vector.push_back("REEMPLAZO DE PÁGINA");
  vector.push_back("ALGORITMO DE BUFFERING DE PÁGINA");
  vector.push_back("REEMPLAZO LOCAL FRENTE A GLOBAL");
  vector.push_back("ASIGNACIÓN DE MARCOS DE PÁGINAS");
  vector.push_back("HIPERPAGINACIÓN");
  vector.push_back("MODELO DE CONJUNTO DE TRABAJO");
  vector.push_back("PREPAGINADO");
  vector.push_back("APLICACIONES EN MODO RAW");
  vector.push_back("TAMAÑO DE LAS PÁGINAS");
  vector.push_back("ESTRUCURA DE LOS PROGRAMAS");
  vector.push_back("INTERBLOQUEO DE E/S");
  vector.push_back("INTERFAZ DE LA GESTIÓN DE MEMORIA");
  vector.push_back("USO DEL ESPACIO DE DIRECCIONES VIRTUAL DEL PROCESO");
  vector.push_back("GESTIÓN DE LA MEMORIA DEL MONTÓN");
  vector.push_back("FRAGMENTACIÓN");
  return vector;
}

std::vector<std::string> Tema5(std::vector<std::string> vector) {

  return vector;
}

std::vector<std::string> Examen(std::vector<std::string> vector) {
  vector.push_back("HIPERPAGINACIÓN y MODELO DE CONJUTNO DE TRABAJO");
  vector.push_back("VOLÚMENES DE DATOS");
  vector.push_back("FRAGMENTACIÓN EXTERNA E INTERNA");
  vector.push_back("METADATOS");
  vector.push_back("TIEMPO DE ACCESO EFECTIVO A MEMORIA");
  vector.push_back("MEMORIA VIRTUAL");
  vector.push_back("ESTRUCTURA DE DIRECTORIOS (ARBOL, GRAFOS ACÍCLICOS, ETC)");
  vector.push_back("PROBLEMAS REEMPLAZO DE PÁGINA");
  vector.push_back("PAGINACIÓN BAJO DEMANDA");
  vector.push_back("TAMAÑO DE LAS PÁGINAS");
  vector.push_back("COPY-ON-WRITE");
  return vector;
}

void AleatorioExamen(std::vector<std::string> vector) {
  int n=3;
  srand(time(NULL));
  std::cout << "Explícame qué es: ";
  for(int i = 0; i < 3; ++i) {
    int numero = rand()%11;
    if(i == n-1) {
      std::cout << " y " << vector[numero] << "." << std::endl;
    } else if (i == n-2) {
      std::cout << vector[numero]; 
    } else {
      std::cout << vector[numero] << ", "; 
    }
  }
}

std::vector<std::string> Mix(std::vector<std::string> vector) {

  return vector;
}

void Aleatorio(std::vector<std::string> vector) {
  int n=3;
  srand(time(NULL));
  std::cout << "Explícame qué es: ";
  for(int i = 0; i < 3; ++i) {
    int numero = rand()%36;
    if(i == n-1) {
      std::cout << " y " << vector[numero] << "." << std::endl;
    } else if (i == n-2) {
      std::cout << vector[numero]; 
    } else {
      std::cout << vector[numero] << ", "; 
    }
  }
}

int main() {
  std::vector<std::string> vector;
  int numero;
  Inicio();
  std::cin >> numero;
  if(numero == 4) {
    vector = Tema4(vector);
    std::cout << "\n";
    Aleatorio(vector);
  } else if(numero == 5) {
    vector = Tema5(vector);
    std::cout << "\n";
    Aleatorio(vector);
  } else if(numero == 6) {
    vector = Mix(vector);
    std::cout << "\n";
    Aleatorio(vector);
  } else if(numero == 7) {
    vector = Examen(vector);
    std::cout << "\n";
    AleatorioExamen(vector);
  } else {
    std::cerr << "El numero introducido no es válido" << std::endl;
  }
  return 0;
}