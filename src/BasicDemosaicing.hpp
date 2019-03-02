#ifndef Demosaicing_hpp
#define Demosaicing_hpp

#include <opencv2/opencv.hpp>
int Color2Bayer(cv::Mat &src,cv::Mat &dst,int BayerPattern=0);
void Bilinear(cv::Mat &Src,cv::Mat &Dst);
void NearestNeighbor(cv::Mat &Src, cv::Mat &Dst);
#endif /* Demosaicing_hpp */
