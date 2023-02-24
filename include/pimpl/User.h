#ifndef PIMPL_USER_H
#define PIMPL_USER_H

#include <memory>
#include <string>

namespace pimpl {
    
    class User {
    public:
        User();
        User(std::string name);
        User(const User& other);
        ~User();
        User& operator=(User other);
        std::string getName() const;
    private:
        class Impl;
        std::unique_ptr<Impl> impl;
    };

} // namespace pimpl


#endif