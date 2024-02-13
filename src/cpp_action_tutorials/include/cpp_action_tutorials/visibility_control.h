#ifndef CPP_ACTION_TUTORIALS__VISIBILITY_CONTROL_H_
#define CPP_ACTION_TUTORIALS__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define CPP_ACTION_TUTORIALS_EXPORT __attribute__ ((dllexport))
    #define CPP_ACTION_TUTORIALS_IMPORT __attribute__ ((dllimport))
  #else
    #define CPP_ACTION_TUTORIALS_EXPORT __declspec(dllexport)
    #define CPP_ACTION_TUTORIALS_IMPORT __declspec(dllimport)
  #endif
  #ifdef CPP_ACTION_TUTORIALS_BUILDING_DLL
    #define CPP_ACTION_TUTORIALS_PUBLIC CPP_ACTION_TUTORIALS_EXPORT
  #else
    #define CPP_ACTION_TUTORIALS_PUBLIC CPP_ACTION_TUTORIALS_IMPORT
  #endif
  #define CPP_ACTION_TUTORIALS_PUBLIC_TYPE CPP_ACTION_TUTORIALS_PUBLIC
  #define CPP_ACTION_TUTORIALS_LOCAL
#else
  #define CPP_ACTION_TUTORIALS_EXPORT __attribute__ ((visibility("default")))
  #define CPP_ACTION_TUTORIALS_IMPORT
  #if __GNUC__ >= 4
    #define CPP_ACTION_TUTORIALS_PUBLIC __attribute__ ((visibility("default")))
    #define CPP_ACTION_TUTORIALS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define CPP_ACTION_TUTORIALS_PUBLIC
    #define CPP_ACTION_TUTORIALS_LOCAL
  #endif
  #define CPP_ACTION_TUTORIALS_PUBLIC_TYPE
#endif

#ifdef __cplusplus
}
#endif

#endif  // CPP_ACTION_TUTORIALS__VISIBILITY_CONTROL_H_
