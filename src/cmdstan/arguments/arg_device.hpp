#ifndef CMDSTAN_ARGUMENTS_ARG_DEVICE_HPP
#define CMDSTAN_ARGUMENTS_ARG_DEVICE_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

  class arg_device: public int_argument {
  public:
    arg_device(): int_argument() {
      _name = "device";
      _description = "...";
      _validity = "...";
      _default = "0";
      _default_value = -1;
      _good_value = 1;
      _bad_value = -2;
      _value = _default_value;
    }

    bool is_valid(int value) {
      return value >= 0 || value == _default_value;
    }
  };

}
#endif
