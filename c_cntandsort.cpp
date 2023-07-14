#include <iostream>
#include <map>
#include <cctype>

std::map<char, int> count_and_sort_letters(const std::string& input) {
    std::map<char, int> letterCount;

    for (char ch : input) {
        if (std::isalpha(ch)) {
            ch = std::tolower(ch);  // Convert to lowercase
            letterCount[ch]++;
        }
    }

    return letterCount;
}

int main() {
    std::string input;
    std::cout << "Masukkan teks: ";
    std::getline(std::cin, input);

    std::map<char, int> result = count_and_sort_letters(input);

    std::cout << "Output: [";
    for (const auto& pair : result) {
        std::cout << "\"" << pair.first << "\":" << pair.second << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}

