// #include <Windows.h>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/video/background_segm.hpp>
#include <opencv2/video/tracking.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{
 Mat OutputImage;   
 Mat LoadedImage;
 LoadedImage = imread("frame.jpg", IMREAD_COLOR);
 resize(LoadedImage, OutputImage, Size(760, 760));
 imwrite("output1.JPG", OutputImage); 
 

}
