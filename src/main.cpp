#include <iostream>
#include "raii/File.h"
#include "pimpl/User.h"

void raiiIdiom(const std::string& filename) {
    raii::File f(filename);
}

void pimplIdiom() {
    pimpl::User user("root");
    std::cout << user.getName() << "\n";
}

int main(int, char**) {
    raiiIdiom("../README.md");
    pimplIdiom();
    return EXIT_SUCCESS;
}
