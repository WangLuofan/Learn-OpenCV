#include <opencv2/opencv.hpp>

int main(void)
{
	cv::namedWindow("Example3", cv::WINDOW_AUTOSIZE);
	cv::VideoCapture cap;

	cap.open("/Users/WangLuofan/Desktop/Test.mp4");
	cv::Mat frame;

	while(1)
	{
		cap >> frame;
		if(!frame.data)
			break;
		cv::imshow("Example3", frame);
		if(cv::waitKey(33) >= 0)
			break;
	}

	return 0;
}
