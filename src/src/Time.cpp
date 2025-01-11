#include "../Time.hpp"
#include <chrono>
#include <sstream>

namespace ih
{
  std::string GetNowTime(const std::string& format)
  {
    auto now = std::chrono::system_clock::now();
    auto now_time_t = std::chrono::system_clock::to_time_t(now);
    
    std::tm local_time = *std::localtime(&now_time_t);

    std::ostringstream oss;
    oss << std::put_time(&local_time, format.c_str());

    return oss.str();
  }
}
