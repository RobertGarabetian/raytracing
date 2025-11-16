#include <iostream>
#include "vec3.h"
int main() {
    int image_width = 256;
    int image_height = 256;
    int ir, ig, ib;
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; ++j) {
        std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i) {
            double r = double(i) / (image_width - 1);
            double g = double(j) / (image_height - 1);
            double b = 0.0;

            ir = int(255.999 * r);
            ig = int(255.999 * g);
            ib = int(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    std::clog << ir << ' ' << ig << ' ' << ib << '\n';
    return 0;
}
