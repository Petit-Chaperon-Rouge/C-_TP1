#include "vecteur3.hpp"
#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupVecteur3) { };

TEST(GroupVecteur3, test_norme) {
  vecteur3 v {2, 3, 6};
  CHECK_EQUAL(7, v.norme());
}

TEST(GroupVecteur3, test_addition) {
  vecteur3 v {2, 3, 6};
  vecteur3 res = addition(v, v);
  CHECK_EQUAL(0, res.x);
  CHECK_EQUAL(8, res.y);
  CHECK_EQUAL(15, res.z);
}

TEST(GroupVecteur3, test_produitScalaire) {
  vecteur3 v {2, 3, 6};
  float res = produitScalaire(v, v);
  CHECK_EQUAL(3, res);
}
