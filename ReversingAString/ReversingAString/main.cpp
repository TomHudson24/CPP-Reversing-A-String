#include <iostream>
#include <string>


// Define is_palindrome() here:
bool is_palindrome(std::string text) {
    std::string reversedText = text;
    int len = reversedText.length();
    int n = len - 1;
    for (int i = 0; i < (len / 2); i++) {

        //Using temp to store the char value at index i so 
        //you can swap it in later for char value at index n
        char temp = reversedText[i];
        reversedText[i] = reversedText[n];
        reversedText[n] = temp;
        n = n - 1;

    }
    std::cout << "Original Text: " << text << "\nReversed Text: " << reversedText << "\n";
    if (reversedText == text) {
        std::cout << "This is a palindrome!\n";
        return true;
    }
    else {
        std::cout << "This is not a palindrome!\n";
        return false;
    }
}

int main() {

    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";
    std::cout << is_palindrome("hannah") << "\n";
    std::cout << is_palindrome("Brandon") << "\n";
    std::cout << is_palindrome("Tom") << "\n";


}