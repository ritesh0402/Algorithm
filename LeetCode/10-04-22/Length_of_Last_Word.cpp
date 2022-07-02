class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = 1, size = 0, temp = s.length();
        while (s[temp - n] == ' ')
        {
            n++;
            cout << s[temp - n] << "1" << endl;
        }

        while (n <= temp && s[temp - n] != ' ')
        {
            cout << s[temp - n] << "2" << endl;
            size++;
            n++;
        }
        return size;
    }
};