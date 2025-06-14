#include <opencv2/opencv.hpp>
#include <iostream>

// filepath: c:\Users\wkpdd\Desktop\ros_\ros_homework\opencv_display\display_image.cpp

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "用法: " << argv[0] << " <图片路径>" << std::endl;
        return -1;
    }

    // 读取图片
    cv::Mat image = cv::imread(argv[1], cv::IMREAD_COLOR);
    if (image.empty()) {
        std::cerr << "无法加载图片: " << argv[1] << std::endl;
        return -1;
    }

    // 显示图片
    cv::imshow("显示图片", image);
    cv::waitKey(0);

    return 0;
}