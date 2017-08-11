#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <string> // string, stod

using namespace cv;
using namespace std;

// Rotating such a point around origin
Point2f RotatePoint(const Point2f &p, float rad) {
  const float x = cos(rad) * p.x - sin(rad) * p.y;
  const float y = sin(rad) * p.x + cos(rad) * p.y;

  const Point2f rot_p(x, y);
  // cout << p << " rad " << rad << " out " << rot_p << "\n";
  return rot_p;
}

// Rotating it around another center point
Point2f RotatePoint(const Point2f &cen_pt, const Point2f &p, float rad) {
  const Point2f trans_pt = p - cen_pt;
  const Point2f rot_pt = RotatePoint(trans_pt, rad);
  const Point2f fin_pt = rot_pt + cen_pt;

  // cout << p << " rad " << rad << " arnd " << cen_pt << " => " << fin_pt <<
  // "\n";
  return fin_pt;
}

int main(int argc, char **argv) {
  Point2f p1(0, 4);
  Point2f p2(4, 0);
  Point2f p3(4, 4);

  float x = 0;
  float y = 0;
  float rad = 1.5708;
  Point2f origin(x, y);

  cout << p1 << " x " << origin << " (rad=" << rad << ") => "
       << RotatePoint(origin, p1, rad) << endl;
  cout << p2 << " x " << origin << " (rad=" << rad << ") => "
       << RotatePoint(origin, p2, rad) << endl;
  cout << p3 << " x " << origin << " (rad=" << rad << ") => "
       << RotatePoint(origin, p3, rad) << endl;
}