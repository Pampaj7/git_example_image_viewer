#include <iostream>

#include "BitmapImage.h"

#include "version.h"

int main() {
    std::cout << "Image viewer - v."<< VERSION << std::endl;
    BitmapImage b;
    std::string imgName = "test.png";
    if (b.load(imgName)) {
        std::cout << "show image: " << imgName << std::endl;
        //code
    }
    else
        std::cerr << "image:" << imgName << " not readable." << std::endl;
    return 0;
}