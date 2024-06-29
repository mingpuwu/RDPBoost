#include "Server.h"
#include <iostream>
#include <fstream>
#include <Windows.h>

Server::Server() 
{

}

bool Server::Init()
{
    return true;
}

bool Server::Start()
{
    std::cout<<"Server start"<<std::endl;

    ScreenCapture();

    return true;
}

void Server::ScreenCapture()
{
    // 获取屏幕的句柄
    HDC hdcScreen = GetDC(NULL);
    if (hdcScreen == NULL) {
        std::cout << "get dc error" << std::endl;
        return;
    }

    // 获取屏幕的宽度和高度
    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    // 创建位图对象
    HBITMAP hBitmap = CreateCompatibleBitmap(hdcScreen, screenWidth, screenHeight);
    if (hBitmap == NULL) {
        std::cout << "CreateCompatibleBitmap error" << std::endl;
        return;
    }

    // 将位图与设备环境相关联
    HDC hdcBitmap = CreateCompatibleDC(hdcScreen);
    SelectObject(hdcBitmap, hBitmap);

    // 将屏幕内容拷贝到位图对象
    if (!BitBlt(hdcBitmap, 0, 0, screenWidth, screenHeight, hdcScreen, 0, 0, SRCCOPY)) {
        std::cout << "copy error" << std::endl;
        return;
    }

    // 保存位图到文件
    std::ofstream file("screenshot.bmp", std::ios::binary);
    if (!file) {
        std::cout << "open screenshot error" << std::endl;
        return;
    }
    
    // 位图文件头
    BITMAPFILEHEADER bitmapFileHeader;
    bitmapFileHeader.bfType = 0x4D42;  // 位图文件标识符 'BM'
    bitmapFileHeader.bfSize = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER) + screenWidth * screenHeight * 4;  // 文件大小
    bitmapFileHeader.bfReserved1 = 0;
    bitmapFileHeader.bfReserved2 = 0;
    bitmapFileHeader.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);  // 偏移位置
    file.write(reinterpret_cast<char*>(&bitmapFileHeader), sizeof(BITMAPFILEHEADER));

    // 位图信息头
    BITMAPINFOHEADER bitmapInfoHeader;
    bitmapInfoHeader.biSize = sizeof(BITMAPINFOHEADER);
    bitmapInfoHeader.biWidth = screenWidth;
    bitmapInfoHeader.biHeight = -screenHeight;  // 负值表示位图数据按自顶向下排列
    bitmapInfoHeader.biPlanes = 1;
    bitmapInfoHeader.biBitCount = 32;  // 每像素位数
    bitmapInfoHeader.biCompression = BI_RGB;  // 无压缩
    bitmapInfoHeader.biSizeImage = 0;  // 未压缩的位图数据大小
    bitmapInfoHeader.biXPelsPerMeter = 0;
    bitmapInfoHeader.biYPelsPerMeter = 0;
    bitmapInfoHeader.biClrUsed = 0;
    bitmapInfoHeader.biClrImportant = 0;
    file.write(reinterpret_cast<char*>(&bitmapInfoHeader), sizeof(BITMAPINFOHEADER));

    // 位图数据保存到文件
    BITMAPINFO bitmapInfo;
    GetDIBits(hdcScreen, hBitmap, 0, screenHeight, NULL, &bitmapInfo, DIB_RGB_COLORS);
    int imageBytes = bitmapInfo.bmiHeader.biSizeImage ? bitmapInfo.bmiHeader.biSizeImage : screenWidth * screenHeight * 4;
    char* imageData = new char[imageBytes];
    GetDIBits(hdcScreen, hBitmap, 0, screenHeight, imageData, &bitmapInfo, DIB_RGB_COLORS);
    file.write(imageData, imageBytes);

    // 释放资源
    delete[] imageData;
    file.close();
    DeleteObject(hBitmap);
    DeleteObject(hdcBitmap);
    ReleaseDC(NULL, hdcScreen);

    std::cout << "save screenshot.bmp" << std::endl;
}

bool Server::SendVideoStream()
{
    return true;
}
