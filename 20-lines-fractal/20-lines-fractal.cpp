#include <iostream>
#include <string>
#include <cmath>

int main() {
    int h = 30, w = 120;
    std::cout << "\033c\033[8;" << h << ";" << w << "t\033[38;5;6m";
    std::string gradient = { ".,:;/Sqrt/;:,. " };
    for (double t = 0; ; t++) {
        std::string fractal;
        for (double y = 1; y < h; y++) {
            for (double x = 1; x < w; x++) {
                size_t formula = sqrt(x * y * y * t) * (t * 0.00001);
                fractal += gradient[formula % gradient.size()];
            }
            fractal += "\n";
        }
        std::cout << fractal << "\033[H";
    }
}