#include "../FileSystem.hpp"
#include <filesystem>

namespace ih
{
  #ifdef _WIN32
    #include <windows.h>
    
    std::string GetExecutablePath()
    {
      char result[MAX_PATH];
      if (GetModuleFileNameA(NULL, result, MAX_PATH) == 0)
        return "";

      return std::string(result);
    }
  #else
    #include <limits.h>
    #include <unistd.h>
    
    std::string GetExecutablePath()
    {
      char result[PATH_MAX];
      std::size_t count = readlink("/proc/self/exe", result, PATH_MAX);
      if (count == static_cast<std::size_t>(-1))
        return "";
        
      return std::string(result, count);
    }
  #endif

  std::string GetExecutableDirectory()
    { return std::filesystem::path(GetExecutablePath()).parent_path().string(); }
}
