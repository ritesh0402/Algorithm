class Solution
{
public:
    string breakPalindrome(string palindrome)
    {
        if (palindrome.size() == 1)
        {
            return "";
        }
        for (int i = 0; i < palindrome.size() / 2; i++)
        {
            if (palindrome[i] != 'a')
            {
                return palindrome.substr(0, i) + "a" + palindrome.substr(i + 1);
            }
        }
        return palindrome.substr(0, palindrome.size() - 1) + 'b';
    }
};