#include <string>

bool IsStringInt(const std::string testString)
{
    for (int i = 0; i <= testString.length(); i++)
    {
        if (testString.length() == 0 || !std::isdigit(testString[i]))
            return false;
    }

    return true;
}

bool IsInRange(int testNum, int min, int max) {
    return (testNum >= min || testNum <= max);
}