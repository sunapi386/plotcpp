#include <iostream>
#include <memory>
#include <opencv2/core.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

int w = 500;

void MyPolygon(Mat img) {
  vector<Point> rook_points;
  rook_points.push_back(Point(w / 4, 7 * w / 8));
  rook_points.push_back(Point(3 * w / 4, 7 * w / 8));
  rook_points.push_back(Point(3 * w / 4, 13 * w / 16));
  rook_points.push_back(Point(11 * w / 16, 13 * w / 16));
  rook_points.push_back(Point(19 * w / 32, 3 * w / 8));
  rook_points.push_back(Point(3 * w / 4, 3 * w / 8));
  rook_points.push_back(Point(3 * w / 4, w / 8));
  rook_points.push_back(Point(26 * w / 40, w / 8));
  rook_points.push_back(Point(26 * w / 40, w / 4));
  rook_points.push_back(Point(22 * w / 40, w / 4));
  rook_points.push_back(Point(22 * w / 40, w / 8));
  rook_points.push_back(Point(18 * w / 40, w / 8));
  rook_points.push_back(Point(18 * w / 40, w / 4));
  rook_points.push_back(Point(14 * w / 40, w / 4));
  rook_points.push_back(Point(14 * w / 40, w / 8));
  rook_points.push_back(Point(w / 4, w / 8));
  rook_points.push_back(Point(w / 4, 3 * w / 8));
  rook_points.push_back(Point(13 * w / 32, 3 * w / 8));
  rook_points.push_back(Point(5 * w / 16, 13 * w / 16));
  rook_points.push_back(Point(w / 4, 13 * w / 16));

  const Point *ppt[1] = {&rook_points[0]};
  int npt = (int)rook_points.size();

  fillPoly(img, ppt, &npt, 1, Scalar(255, 255, 255), LINE_8);
}

int main(int argc, char **argv) {

  // Create black empty images
  Mat image = Mat::zeros(w, w, CV_8UC3);

  MyPolygon(image);

  namedWindow("Display window",
              WINDOW_AUTOSIZE);    // Create a window for display.
  imshow("Display window", image); // Show our image inside it.

  waitKey(0); // Wait for a keystroke in the window
  return 0;
}