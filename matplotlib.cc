#include "matplotlibcpp.h"
namespace plt = matplotlibcpp;
int main() {
  plt::plot({1.0, 2.2, 3.1, 4.5});
  plt::show();
}

// g++ matplotlib.cc -std=c++11 -I/usr/include/python2.7 -lpython2.7