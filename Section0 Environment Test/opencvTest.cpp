#include <opencv2/opencv.hpp>
#include <iostream>
#include <math.h>

using namespace cv;
int main(int argc, char** argv) {
	Mat src = imread("E:\\opencvWorkplace\\opencvTest\\lena.jpg");
	if (src.empty()) {
		printf("could not load image...\n");
		return -1;
	}

	imshow("opencv setup demo", src);
	Mat gray;
	cvtColor(src, gray, COLOR_BGR2GRAY); //convert RGB to gray
	imshow("opencv setup demo", gray);
	waitKey(0);
	destroyAllWindows();

	return 0;
}
