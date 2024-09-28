#include <cppitertools/range.hpp> // NOLINT(build/include_order)
#include <cstdint>                // NOLINT(build/include_order)
#include <iostream>               // NOLINT(build/include_order)
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

inline void main_func() {
  for (auto i : iter::range(100000)) {
      auto file = std::ifstream(std::string{"test.json"});
      auto data = json::parse(file);
    auto wealth_str = data[std::string{"user"}][std::string{"wealth"}];
    double wealth = static_cast<float>(wealth_str);
  }
  std::cout << std::string{"OK"};
  std::cout << std::endl;
}

int main(int argc, char **argv) { main_func(); }
