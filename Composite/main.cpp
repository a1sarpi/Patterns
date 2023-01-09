#include "ImageEditor.h"

int main() {
    auto imageEditor = new ImageEditor;
    imageEditor->load();
    imageEditor->draw();
    std::cout << "=====================" << std::endl;
    imageEditor->groupAll();
    return 0;
}