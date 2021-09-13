#ifndef termonad_hpp
#define termonad_hpp

#include <iostream>
#include "common/scheme.hpp"

namespace termonad
{
  int change(const scheme::Scheme& scheme, std::istream& is = std::cin, std::ostream& os = std::cout, std::ostream& es = std::cerr);
}

#endif
