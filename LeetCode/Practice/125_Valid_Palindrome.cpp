class Solution
{
public:
    bool isPalindrome(string s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int i = 0, j = s.length() - 1;
        if (j == 0)
            return true;
        do
        {

            // (s[i] < 97 || s[i] > 122) || (s[i] < 48 || s[i] > 57)

            while (i < j && (s[i] < 48 || s[i] > 122) || (s[i] < 97 && s[i] > 57))
            {
                i++;
                // cout << "i: " << i << endl;
            }
            while (j > i && (s[j] < 48 || s[j] > 122) || (s[j] < 97 && s[j] > 57))
            {
                j--;
                // cout << "j: " << j << endl;
            }
            // if(i>j){return false;}
            // cout << s[i] << " and " << s[j] << endl;
            if (s[i] != s[j])
            {
                // cout << "2 " << endl;
                return false;
            }
            i++;
            j--;
        } while (i < j);

        return true;
    }
};