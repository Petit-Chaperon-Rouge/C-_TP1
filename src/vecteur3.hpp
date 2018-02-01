#ifndef VEC3_HPP
#define VEC3_HPP

#include <iostream>
#include <cmath>

struct vecteur3 {
  float x,y,z;

  void afficher();
  float norme();
};

void afficher(vecteur3&);
float produitScalaire(vecteur3&, vecteur3&);
vecteur3 addition(vecteur3&, vecteur3&);

#endif

