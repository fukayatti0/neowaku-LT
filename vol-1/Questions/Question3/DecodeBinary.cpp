#include <iostream>

int main() {
    // フラグを文字列として持つが、直接参照はしない
    const char* hidden_flag = "flag{NEO_wakuwaku_club}";
    
    // 実行時は別の文字列を出力
    std::cout << "dummy" << std::endl;
    
    return 0;
}