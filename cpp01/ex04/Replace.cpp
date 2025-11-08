#include <string>
#include "Replace.hpp"

std::string replaceAll(std::string text, const std::string& s1, const std::string& s2) {
    if (s1.empty())
		return (text);
    std::string result;
    size_t pos = 0;
    size_t found;
    while ((found = text.find(s1, pos)) != std::string::npos) {
        result.append(text, pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result.append(text, pos, std::string::npos);
    return (result);
}
