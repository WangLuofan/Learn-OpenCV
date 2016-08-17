#include <opencv2/opencv.hpp>
using namespace cv;

int main(void)
{
	Mat img = imread("/Users/WangLuofan/Desktop/lena.jpg");
	if(img.empty())
		return -1;
	namedWindow("Example2", WINDOW_AUTOSIZE);
	imshow("Example2", img);

	waitKey(0);
	destroyWindow("Example2");

	return 0;
}
