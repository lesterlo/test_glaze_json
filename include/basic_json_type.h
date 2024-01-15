#pragma once

#include <ostream>
#include <string>
#include <array>
#include <map>

struct test_struct_1
{
  int i;
  double d;
  std::string hello;
  std::array<uint64_t, 3> arr;
  std::map<std::string, int> map;;
};

std::ostream& operator<<(std::ostream& os, const test_struct_1& s) {
    os << std::endl << 
        ".s: " << s.i << std::endl << 
        ".d: " << s.d << std::endl << 
        ".hello: " << s.hello << std::endl << 
        ".map: ";
    for (const auto& key_value : s.map) {
        os << key_value.first << "::" << key_value.second << " , ";
    }
    return os;
}