#ifndef CMDSTAN_ARGUMENTS_ARG_GPU_HPP
#define CMDSTAN_ARGUMENTS_ARG_GPU_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

  class arg_gpu: public int_argument {
  public:
    arg_gpu(): int_argument() {
      _name = "gpu";
      _description = "Enable GPU";
      _validity = "gpu is 0 or 1";
      _default = "1";
      _default_value = 1;
      _constrained = true;
      _good_value = 1.0;
      _bad_value = -1.0;
      _value = _default_value;
    }

    bool is_valid(int value) { return value == 0 || value == 1; }
  };

}
#endif
