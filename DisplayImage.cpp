
#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;
using namespace cv;


int main(int argc, char** argv )
{

char imagen1[] = "image2.jpg";
char imagen2[] = "image1.jpg";

Mat img1, img2;

img1 = imread(imagen1);
img2 = imread(imagen2);

imshow("imagen2", img1);
imshow("imagen1", img2);

Mat dst;

//*add(img1, img2, dst, noArray(), -1);
//*imshow("ADD", dst);

subtract(img2, img1, dst, noArray(), -1);
imshow("SUBTRACT", dst);

cvWaitKey();
return 0;


}
