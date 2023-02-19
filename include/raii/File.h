#ifndef RAII_FILE_H
#define RAII_FILE_H

#include <fstream>

namespace raii {
    
    class File {
    public:
        explicit File(const std::string& filename);
        ~File();
    private:
        std::FILE* file;
    };

} // namespace raii


#endif
