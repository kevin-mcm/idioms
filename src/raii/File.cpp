#include "raii/File.h"

namespace raii {

    File::File(const std::string &filename) :
    file(std::fopen(filename.c_str(), "r")) {
        if (file == nullptr)
            throw std::runtime_error("could not open file: " + filename);
    }

    File::~File() {
        if (file) {
            std::fclose(file);
        }
    }

} // namespace raii
