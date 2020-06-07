#include <exception>

namespace folly
{
namespace detail
{

[[noreturn]] void assertionFailure(
    const char * /*expr*/,
    const char * /*msg*/,
    const char * /*file*/,
    unsigned int /*line*/,
    const char * /*function*/)
{
    std::terminate();
}

} // namespace detail
} // namespace folly
