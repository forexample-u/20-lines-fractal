#include <iostream>
#include <string>
#include <cmath>

int main() {
    system("mode 140, 44");
    std::cout << "\033[8;44;140t" << "\033c" << "\033[38;5;6m";
    std::string gradient = { ".,:;/sqrt=god/;:,. " };
    for (double t = 0; ; t++) {
        std::string str_full;
        for (double h = 1; h < 44; h++) {
            for (double w = 1; w < 140; w++) {
                size_t formula = pow(w * h * h * t, 0.5) * (t * 0.00001);
                str_full += gradient[formula % gradient.size()];
            }
            str_full += "\n";
        }
        std::cout << str_full << "\033[H";
    }
}