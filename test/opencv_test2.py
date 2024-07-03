import cv2

# 解码数据后直接展示

file = 'output.h264'
file = 'TestH264Record.video'
def main():
    # 打开H.264格式视频文件
    print('open file:',file)
    cap = cv2.VideoCapture(file)
    
    if not cap.isOpened():
        print("Error: Could not open video file.")
        return
    
    while True:
        ret, frame = cap.read()
        
        if not ret:
            break
        
        # 显示帧
        cv2.imshow('Frame', frame)
        
        # 按 'q' 键退出
        if cv2.waitKey(100) & 0xFF == ord('q'):
            break
    
    cap.release()
    cv2.destroyAllWindows()

if __name__ == "__main__":
    main()
