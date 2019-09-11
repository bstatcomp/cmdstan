#ifndef CMDSTAN_ARGUMENTS_ARG_GPU_HPP
#define CMDSTAN_ARGUMENTS_ARG_GPU_HPP

#include <cmdstan/arguments/categorical_argument.hpp>
#include <cmdstan/arguments/arg_platform.hpp>
#include <cmdstan/arguments/arg_device.hpp>

namespace cmdstan {

    class arg_gpu: public categorical_argument {
  public:
    arg_gpu() {
      _name = "gpu";
      _description = "GPU configuration";

      _subarguments.push_back(new arg_platform());
      _subarguments.push_back(new arg_device());
    }
  };

}
#endif


