#ifndef CMDSTAN_ARGUMENTS_ARG_PLATFORM_HPP
#define CMDSTAN_ARGUMENTS_ARG_PLATFORM_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

  class arg_platform: public int_argument {
  public:
    arg_platform(): int_argument() {
      _name = "platform";
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
