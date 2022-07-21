class Solution
{
public:
    string largestOddNumber(string num)
    {
        int i = num.length() - 1;
        while (!num.empty())
        {
            if (num[i] % 2 == 1)
                return num;
            else
                num.pop_back();
            i--;
        }
        return num;
    }
};

// another substring approach

class Solution
{
public:
    string largestOddNumber(string num)
    {
        for (long long i = num.size() - 1; i >= 0; i--)
        {
            int n = num[i] - 48;
            if (n % 2 == 1)
                return num.substr(0, i + 1);
        }
        return "";
    }
};