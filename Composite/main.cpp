#include "ImageEditor.h"

int main() {
    auto imageEditor = new ImageEditor;
    imageEditor->load();
    imageEditor->groupSelected();
    return 0;
}