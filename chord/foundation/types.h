#ifndef CHORD_TYPES_H
#define CHORD_TYPES_H

namespace chord {

    #if defined(_MSC_VER)

    //
    // Windows/Visual C++
    //

    #ifndef byte
        typedef unsigned __int8    byte;
    #endif
        typedef __int8             int8;
        typedef __int16            int16;
        typedef __int32            int32;
        typedef __int64            int64;
        typedef unsigned __int32   uint;
        typedef unsigned __int8    uint8;
        typedef unsigned __int16   uint16;
        typedef unsigned __int32   uint32;
        typedef unsigned __int64   uint64;
    #else
    #ifndef byte
        typedef unsigned char      byte;
    #endif
        typedef signed char        int8;
        typedef signed short       int16;
        typedef signed int         int32;
        typedef signed long long   int64;
        typedef unsigned int       uint;
        typedef unsigned char      uint8;
        typedef unsigned short     uint16;
        typedef unsigned int       uint32;
        typedef unsigned long long uint64;
    #endif

} // namespace chord

#endif // CHORD_TYPES_H
