#include <opencv2/opencv.hpp>

int main(void)
{
	cv::Mat img = cv::imread("./lena.jpg"), img2;
	cv::namedWindow("Example1", cv::WINDOW_AUTOSIZE);
	cv::namedWindow("Example2", cv::WINDOW_AUTOSIZE);

	cv::imshow("Example1", img);
	cv::pyrDown(img, img2);
	cv::imshow("Example2", img2);

	cv::waitKey(0);
	cv::destroyAllWindows();

	return 0;
}
