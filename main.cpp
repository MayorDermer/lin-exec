// #include "FuncPack/FuncPack.hpp"
#include <functional>
#include <iostream>

#include "Executers/SingleArg.hpp"
#define FUNCS \
  X(c)        \
  X(b)        \
  X(a)

int a(int x) { return x + 1; }

int b(int x) { return x + 2; }

void c(int x) { std::cout << x << std::endl; }

void d(void) { std::cout << "yeyeyeye" << std::endl; }
int main() {
  // auto a = FuncPackBuilder::build(print_tv);
  // a();
  // executer(5, print_tv, print_tv, print_dv);
  // decltype(std::function{print_tv})::result_type x{"5"};
  // std::cout << x << std::endl;
  // return_t<decltype(print_dv), int> x{"3"};

  // #define X(func) func(
  //     FUNCS
  // #undef X
  //     1)));

  //     // std::function{print_dv}::res x{"3"};
  //     // std::cout << x << std::endl;
  //     // int y;
  //     d(c(5));
  SingleArgExec(5, a, b, c);
  return 0;
}