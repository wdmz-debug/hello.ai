#include <iostream>
#include <vector>
int main() {
    std::vector<int> nums = {10, 20, 30, 40, 50};
    for(int &x : nums){
        //打印值：x
        //打印地址：&x
        std::cout << "值：" << x << "地址：" << &x << std::endl;
    }
}