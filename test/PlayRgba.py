import numpy as np
import cv2
import sys

# 图像的尺寸
width = 1920  # 假设宽度为 640 像素
height = 1080  # 假设高度为 480 像素

# 计算图像数据总字节数
data_size = width * height * 4  # RGBA 格式，每个像素 4 个字节

# 打开文件并读取数据
file = sys.argv[1]
print('open file:',file)

with open(file, 'rb') as file:
    while(1):
        rgba_data = file.read(data_size)
        if not rgba_data:
            break
        # 将字节数据转换为 NumPy 数组
        rgba_array = np.frombuffer(rgba_data, dtype=np.uint8).reshape((height, width, 4))

        # 使用 OpenCV 创建图像
        rgba_image = cv2.cvtColor(rgba_array, cv2.COLOR_RGBA2BGRA)  # 转换颜色顺序以匹配 OpenCV 的 BGRA 格式
        # rgba_image = cv2.cvtColor(rgba_array, cv2.COLOR_YUV420p2RGBA)  # 转换颜色顺序以匹配 OpenCV 的 BGRA 格式

        # 展示图像
        cv2.imshow('RGBA Image', rgba_image)
        cv2.waitKey(100)  # 等待用户按键

# 释放窗口
cv2.destroyAllWindows()