#ifndef xmobar_hpp
#define xmobar_hpp

#include <iostream>
#include "common/scheme.hpp"

namespace xmobar
{
  int change(const scheme::Scheme& scheme, std::istream& is = std::cin, std::ostream& os = std::cout, std::ostream& es = std::cerr);
}

#endif
