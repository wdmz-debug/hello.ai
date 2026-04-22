#include <iostream>
class AIModel {
    public:
    //构造函数：创建时自动调用
    AIModel() { std::cout << "AI模型已加载到内存中占用(500MB)...\n";}
    //析构函数：销毁时自动调用
    ~AIModel() { std::cout << "AI模型已从内存中完全清理\n";}
    void run() { std::cout << "正在执行目标检测推理...\n";}
};

void processImage() {
    std::cout << "开始处理单张照片\n";
    AIModel model;
    model.run();
    std::cout << "图片处理结束";
}

int main(){
    std::cout << "部署系统启动";
    processImage();
    std::cout << "部署系统关闭";
    return 0;
}