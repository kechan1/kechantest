#include <iostream>
#include <vector>
#include <algorithm>

bool isNumber(const std::string& str) {
    for (char c : str) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}

bool compare(const std::string& a, const std::string& b) {
    if (isNumber(a) && isNumber(b)) {
        return std::stoi(a) < std::stoi(b);
    } else if (isNumber(a) && !isNumber(b)) {
        return false;
    } else if (!isNumber(a) && isNumber(b)) {
        return true;
    } else {
        return a < b;
    }
}

int main() {
    std::vector<std::string> arr = {"12", "9", "30", "A", "M", "99", "82", "J", "N", "B"};

    std::sort(arr.begin(), arr.end(), compare);

    for (const std::string& elem : arr) {
        std::cout << elem << " ";
    }

    std::cout << std::endl;

    return 0;
}

