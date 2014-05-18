#ifndef CHORD_APPLICATION_HPP
#define CHORD_APPLICATION_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include <boost/noncopyable.hpp>
#include <chord/foundation/chord_foundation.h>
#include <chord/foundation/types.h>

namespace chord {

class application
    : private boost::noncopyable
{
public:
    application() {}
    application(int argc, char* argv[])
    {
    }

protected:
    void set_name(const std::string& name) { _name = name; }
    inline const std::string& name() { return _name; }
    virtual int run() { return 0; }

private:
    std::string _name;
};

} // namespace chord

#endif