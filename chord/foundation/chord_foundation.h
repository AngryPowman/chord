#ifndef CHORD_FOUNDATION_H
#define CHORD_FOUNDATION_H

#if defined(_WIN32) && defined(_DLL)
    #if !defined(CHORD_DLL) && !defined(CHORD_STATIC)
        #define CHORD_DLL
    #endif
#endif

//
// Automatically link Foundation library.
//
#if defined(_MSC_VER)
	#if defined(CHORD_DLL)
		#if defined(_DEBUG)
			#define CHORD_LIB_SUFFIX "d.lib"
		#else
			#define CHORD_LIB_SUFFIX ".lib"
		#endif
	#elif defined(_DLL)
		#if defined(_DEBUG)
			#define CHORD_LIB_SUFFIX "mdd.lib"
		#else
			#define CHORD_LIB_SUFFIX "md.lib"
		#endif
	#else
		#if defined(_DEBUG)
			#define CHORD_LIB_SUFFIX "mtd.lib"
		#else
			#define CHORD_LIB_SUFFIX "mt.lib"
		#endif
	#endif

	#if !defined(CHORD_NO_AUTOMATIC_LIBS) && !defined(Foundation_EXPORTS)
		#pragma comment(lib, "chord_" CHORD_LIB_SUFFIX)
	#endif
#endif

#include <string>

#endif
