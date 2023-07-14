#include <iostream>
#include <string>

int pattern_count(const std::string& text, const std::string& pattern) {
    int count = 0;
    int text_length = text.length();
    int pattern_length = pattern.length();

    for (int i = 0; i <= text_length - pattern_length; ++i) {
        bool found = true;
        for (int j = 0; j < pattern_length; ++j) {
            if (text[i + j] != pattern[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            count++;
        }
    }

    return count;
}

int main() {
    std::string text;
    std::string pattern;

    std::cout << "Masukkan teks: ";
    std::cin >> text;

    std::cout << "Masukkan pola: ";
    std::cin >> pattern;

    int count = pattern_count(text, pattern);
    std::cout << "Jumlah pola: " << count << std::endl;

    return 0;
}

