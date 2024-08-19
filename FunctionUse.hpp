#ifndef FUNCTION_USE_HPP
#define FUNCTION_USE_HPP

#include <functional>
#include <iostream>

namespace ih
{
  template<typename returnType, typename... Args>
  std::vector<returnType> playFuncs(std::vector<std::function<returnType(Args...)>>& funcs, Args... args)
  {
    std::vector<returnType> returned{};

    for (auto& func : funcs)
      returned.emplace_back(func(args...));

    return returned;
  }

  template<typename... Args>
  void playFuncs(std::vector<std::function<void(Args...)>>& funcs, Args... args)
  {
    for (auto& func : funcs)
      func(args...);
  }
}
#endif // !FUNCTION_USE_HPP