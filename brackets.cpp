#include <iostream>
#include <vector>

void generateParenthesis(int n, int open, int close, std::string s, std::vector<std::string> &ans)
{
    if (open == n && close == n)
    {
        ans.push_back(s);
        return;
    }
    if (open < n)
    {
        generateParenthesis(n, open + 1, close, s + "{", ans);
    }
    if (close < open)
    {
        generateParenthesis(n, open, close + 1, s + "}", ans);
    }
}

int main() {
    std::vector<std::string> ans;
    int n;
    std::cin >> n;
    generateParenthesis(n, 0, 0, "", ans);
    for (auto s : ans)
    {
        std::cout << s << std::endl;
    }
    return 0;
}