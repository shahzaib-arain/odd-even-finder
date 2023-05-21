#include <string>
#include <cctype>

bool is_palindrome(const std::string& text) {
    int start = 0;
    int end = text.length() - 1;

    while (start < end) {
        char left = std::tolower(text[start]);
        char right = std::tolower(text[end]);

        if (!std::isalnum(left)) {
            start++;
            continue;
        }

        if (!std::isalnum(right)) {
            end--;
            continue;
        }

        if (left != right) {
            return false;
        }

        start++;
        end--;
    }

    return true;
}
