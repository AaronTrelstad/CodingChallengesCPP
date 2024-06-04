#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2 || argc > 3) {
        std::cerr << argv[0] << "-c <file-name>" << std::endl;
    }
    return 0;
}
