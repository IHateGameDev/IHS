#ifndef IH_STATES_HPP
#define IH_STATES_HPP

#include "settings.hpp"

namespace ih
{
  template <isUnsignedIntegral ExtType>
  class StatesBase
  {
    private:
      ExtType states;

    public:
      StatesBase(const ExtType& states = 0);

      void setState(const ExtType& state, const bool& conditionState);
      void setStateVO(const uint8& offset, const bool& conditionState);

      bool getState(const ExtType& state) const;
      bool getStateVO(const uint8& offset) const;
  };

  using States8 = StatesBase<uint8>;
  using States16 = StatesBase<uint16>;
  using States32 = StatesBase<uint32>;
  using States64 = StatesBase<uint64>;
}

#endif
