#include <bits/stdc++.h>

int get_length(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int get_reverse(int num, int length)
{
    int reversed_num{0};
    for (int i{length - 1}; i >= 0; i--)
    {
        int digit{};
        digit = num % 10;
        reversed_num += digit * std::pow(10, i);
        num /= 10;
    }
    return reversed_num;
}

int main()
{
    int t{0};
    std::cin >> t;
    while (t)
    {
        int n{};
        std::cin >> n;
        int length = get_length(n);
        std::cout << get_reverse(n, length) << std::endl;
        t--;
    }
    return 0;
}