class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int i = 0, j = s.length() - 1;

        int ca = 0, cb = 0;

        unordered_set<char> vow = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        while (i < j)
        {
            if (vow.find(s[i]) != vow.end())
            {
                ca++;
            }
            if (vow.find(s[j]) != vow.end())
            {
                cb++;
            }
            i++;
            j--;
        }

        return ca == cb;
    }
};