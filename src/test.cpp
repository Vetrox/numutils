#include "numutils.h"
#include <iostream>
int main() {
    BigInt a(0);
    BigInt b = BigInt(-1l);
    std::cout << (a + b).as_decimal() << std::endl;
}
