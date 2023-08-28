#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <stdlib.h>

std::string reverseString(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

bool isPalindrome(const std::string& str) {
    return str == reverseString(str);
}

bool isLychrelNumber(int number) {
    std::unordered_set<int> calculatedNumbers;
    std::string strNumber = std::to_string(number);
    int iterations = 0;

    while (iterations < 1000) {  // 设置最大迭代次数为1000
        std::string reverseStrNumber = reverseString(strNumber);
        int sum = number + std::stoi(reverseStrNumber);
        std::string strSum = std::to_string(sum);

        if (isPalindrome(strSum)) {
            return false;
        }

        if (calculatedNumbers.count(sum) > 0) {
            return true;
        }

        calculatedNumbers.insert(sum);
        strNumber = strSum;
        iterations++;
    }

    return true;
}

std::string calculatePalindrome(int number) {
    std::string strNumber = std::to_string(number);
    std::string reverseStrNumber = reverseString(strNumber);
    int sum = number + std::stoi(reverseStrNumber);
    std::string strSum = std::to_string(sum);
    std::string output = strNumber + "+" + reverseStrNumber + "=" + strSum;

    while (!isPalindrome(strSum) && !isLychrelNumber(sum)) {
        strNumber = strSum;
        reverseStrNumber = reverseString(strNumber);
        sum = std::stoi(strNumber) + std::stoi(reverseStrNumber);
        strSum = std::to_string(sum);
        output += "\n" + strNumber + "+" + reverseStrNumber + "=" + strSum;
    }

    if (isPalindrome(strSum)) {
        output += "\nReached palindrome: " + strSum;
    } else {
        output += "\nReached Lychrel number: " + strSum;
    }

    return output;
}

int main() {
    bool continueCalculating = true;

    while (continueCalculating) {
        int number;
        std::cout << "Enter: ";
        std::cin >> number;

        std::string result = calculatePalindrome(number);
        std::cout << "methods: " << std::endl;
        std::cout << result << std::endl;

        char choice;
        std::cout << "wether?(y/n): ";
        std::cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            continueCalculating = false;
        }
    }
    system("pause");

    return 0;
}
