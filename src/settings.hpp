#ifndef IH_SETTINGS_HPP
#define IH_SETTINGS_HPP

#include <bits/types.h>
#include <type_traits>

typedef __int8_t int8;
typedef __int16_t int16;
typedef __int32_t int32;
typedef __int64_t int64;
typedef __int128_t int128;

typedef __uint8_t uint8;
typedef __uint16_t uint16;
typedef __uint32_t uint32;
typedef __uint64_t uint64;

namespace ih
{
  template <typename Type>
  concept isUnsignedIntegral = std::is_integral_v<Type> && std::is_unsigned_v<Type>;
}

#endif
