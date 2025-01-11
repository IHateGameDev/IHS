#include "../States.hpp"

namespace ih
{
  template <isUnsignedIntegral ExtType>
  StatesBase<ExtType>::StatesBase(const ExtType& states)
    : states(states) {}

  template <isUnsignedIntegral ExtType>
  void StatesBase<ExtType>::setState(const ExtType& state, const bool& conditionState)
  {
    if (conditionState)
      states |= state;
    else
      states &= ~state;
  }

  template <isUnsignedIntegral ExtType>
  void StatesBase<ExtType>::setStateVO(const uint8& offset, const bool& conditionState)
    { setState(static_cast<ExtType>(1) << offset, conditionState); }

  template <isUnsignedIntegral ExtType>
  bool StatesBase<ExtType>::getState(const ExtType& state) const
    { return (states & state); }

  template <isUnsignedIntegral ExtType>
  bool StatesBase<ExtType>::getStateVO(const uint8& offset) const
    { return getState(static_cast<ExtType>(1) << offset); }
}
