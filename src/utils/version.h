#ifndef VERSION_H
#define VERSION_H

/*

This file is part of VROOM.

Copyright (c) 2015-2022, Julien Coupey.
All rights reserved (see LICENSE).

*/

constexpr unsigned MAJOR = 1;
constexpr unsigned MINOR = 14;
constexpr unsigned PATCH = 0;
constexpr bool DEV = true;
constexpr unsigned RC = 0;

#include <string>

namespace vroom {

std::string get_version();

} // namespace vroom

#endif
