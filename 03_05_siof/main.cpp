#include <iostream>
// https://github.com/Nekrolm/ubbook/blob/master/runtime/static_initialization_order_fiasco.md
// https://isocpp.org/wiki/faq/ctors#static-init-order

extern int a;
int b = a + 10;

int main() {
    std::cout << a << " " << b << "\n";
}
