#ifndef xmonad_hpp
#define xmonad_hpp

#include <iostream>
#include "scheme.hpp"

namespace xmonad
{
  int change(const scheme::Scheme& scheme, std::istream& is = std::cin, std::ostream& os = std::cout, std::ostream& es = std::cerr);
}

#endif
