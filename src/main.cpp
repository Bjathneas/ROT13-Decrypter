#include <iostream>
#include <string>

const std::string_view kAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

std::string decrypt(std::string text)
{
    int kAlphabet_length = kAlphabet.length();
    for (char& c : text) {
        for (int i = 0; i < kAlphabet_length; i++) {
            if (c == kAlphabet[i]) {
                c = kAlphabet[(i + 13) % kAlphabet_length];
                break;
            }
        }
    }
    return text;
}

int main(int argc, char* argv[])
{
    if (argc == 2) {
        std::cout << decrypt(argv[1]) << std::endl;
    }

    return EXIT_SUCCESS;
}
