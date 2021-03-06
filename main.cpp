#include <iostream>
#include <fstream>
#include "scheme.hpp"
#include "xmonad.hpp"
#include "xmobar.hpp"
#include "termonad.hpp"

int main(int argc, char* argv[])
{
  if (argc != 2)
  {
    std::cerr << "scheme: incorrect parameters!\n";
    return 1;
  }
  std::ifstream ifs(argv[1], std::ios::binary);
  if (!ifs)
  {
    std::cerr << "scheme: " << argv[1] << ": No such file or directory\n";
    return 1;
  }
  scheme::Scheme scheme(ifs);
  xmonad::change(scheme);
  xmobar::change(scheme);
  termonad::change(scheme);
}
