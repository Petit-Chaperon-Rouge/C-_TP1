#include <iostream>
#include "vecteur3.hpp"

void afficher(vecteur3& v) {
  std::cout << "(" << v.x << ", " << v.y << ", " << v.z << ")";
}

void vecteur3::afficher() {
  std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}

float vecteur3::norme() {
  return std::sqrt(x*x + y*y + z*z);
}

float produitScalaire(vecteur3& a, vecteur3& b) {
  return a.x*b.x + a.y*b.y + a.z*b.z;
}

vecteur3 addition(vecteur3& a, vecteur3& b) {
  return vecteur3{a.x+b.x, a.y+b.y, a.z+b.z};
}
