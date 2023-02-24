#include "./pimpl/User.h"

namespace pimpl {
    
    class User::Impl {
    public:
        Impl(std::string name) :
        name(std::move(name)) {}
        ~Impl() {}
        std::string name;
    };

    User::User() = default;

    User::User(std::string name) :
    impl(std::make_unique<Impl>(std::move(name))) {}

    User::User(const User& other) :
    impl(std::make_unique<Impl>(*other.impl)) {}

    User::~User() = default;

    User& User::operator=(User other) {
        std::swap(impl, other.impl);
        return *this;
    }

    std::string User::getName() const {
        return impl->name;
    }

} // namespace pimpl
