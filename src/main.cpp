#include <iostream>
#include "fibonacci.hpp"
#include "vecteur3.hpp"

int main() {
  vecteur3 v{2, 3, 6};

  std::cout << "Hello world !" << std::endl;
  std::cout << "Recursif : " << fibonacciRecursif(7) << std::endl;
  std::cout << "Iteratif : " << fibonacciIteratif(7) << std::endl;

  std::cout << std::endl;
  
  v.afficher();
  std::cout << "Norme : " << v.norme() << std::endl;
  std::cout << "Addition : ";
  addition(v, v).afficher();
  std::cout << "Scalaire : " << produitScalaire(v, v) << std::endl;

  return 0;
}
