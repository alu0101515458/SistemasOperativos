#include "terminal.h"
#include "tools.h"
#include "funciones_shell.h"

// NOMBRE: Tomás Javes Tommasone
// GRUPO: PE102
// GMAIL: alu0101515458@ull.edu.es

// PARA COMPILAR, USÉ LA HERRAMIENTA MAKE. EL EJECUTABLE SE LLAMA "program" Y SE EJECUTA DE LA FORMA:
// "./program".
//  SI HUBIERA ERROR, COMPILAR CON: g++ --std=c++17 main.cc tools.cc funciones_shell.cc terminal.cc

int main() {
  Terminal terminal;
  terminal.start();
  return 0;
}