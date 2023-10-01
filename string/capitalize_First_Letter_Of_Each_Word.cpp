#include <iostream>
#include <string>
using namespace std;

string get_string(const string &message = "")
{
    string str;
    cout << message;
    getline(cin, str);
    return str;
}

// Function to capitalize the first letter of each word in a string
std::string capitalizeFirstLetterOfEachWord(std::string sentence)
{
    bool isNewWord = true;
    for (char &ch : sentence)
    {
        if (isNewWord && ch != ' ')
            ch = toupper(ch);
        isNewWord = (ch == ' '? true : false);
    }
    return sentence;
}

int main()
{
    string sentence;  // sentence => جملة
    sentence = get_string("Enter a sentence: ");

    cout << "First letters of each word:\n";
    cout << capitalizeFirstLetterOfEachWord(sentence);

    return 0;
}

// Function to capitalize the first letter of each word in a string
std::string capitalizeFirstLetterOfEachWord(std::string sentence)
{
    bool isNewWord = true;
    for (char &ch : sentence)
    {
        if (isNewWord && ch != ' ' && (ch >= 65 && ch <= 90))
            ch += 32;
        isNewWord = (ch == ' '? true : false);
    }
    return sentence;
}
