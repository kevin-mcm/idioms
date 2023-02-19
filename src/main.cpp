#include <iostream>
#include "raii/File.h"

void raiiIdiom(const std::string& filename) {
    raii::File f(filename);
}

int main(int, char**) {
    raiiIdiom("../README.md");
    return EXIT_SUCCESS;
}
