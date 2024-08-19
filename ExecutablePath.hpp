#ifndef EXECUTABLE_PATH_HPP
#define EXECUTABLE_PATH_HPP

#include <string>

namespace ih
{
#ifdef _WIN32
  #include <windows.h>
  #include <vector>

    std::string getExecutablePath()
    {
      char result[MAX_PATH];
      GetModuleFileNameA(NULL, result, MAX_PATH);
      return std::string(result);
    }
#else
  #include <limits.h>
  #include <unistd.h>

    std::string getExecutablePath()
    {
      char result[PATH_MAX];
      ssize_t count = readlink("/proc/self/exe", result, PATH_MAX);
      return std::string(result, (count > 0) ? count : 0);
    }
#endif
}

#endif // !EXECUTABLE_PATH_HPP