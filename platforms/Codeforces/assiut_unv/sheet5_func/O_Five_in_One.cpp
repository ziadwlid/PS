#include <iostream>
#include <cmath>
using namespace std;

bool is_palindrome(int n)
{
    int original = n;
    int rev = 0;

    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev == original;
}

void five_in_one(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max_num = arr[0];
    int min_num = arr[0];
    int prime_count = 0;
    int palindrome_count = 0;

    int max_div_num = arr[0];
    int max_div_count = 0;

    for (int i = 0; i < n; i++)
    {
        // max/min
        if (arr[i] > max_num)
            max_num = arr[i];
        if (arr[i] < min_num)
            min_num = arr[i];

        // prime
        if (arr[i] > 1)
        {
            bool isPrime = true;
            for (int j = 2; j * j <= arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
                prime_count++;
        }

        // binary palindrome
        if (is_palindrome(arr[i]))
            palindrome_count++;

        // maximum divisors
        int div_count = 0;
        for (int j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
                div_count++;
        }
        if (div_count > max_div_count ||
            (div_count == max_div_count && arr[i] > max_div_num))
        {
            max_div_count = div_count;
            max_div_num = arr[i];
        }
    }

    cout << "The maximum number : " << max_num << "\n";
    cout << "The minimum number : " << min_num << "\n";
    cout << "The number of prime numbers : " << prime_count << "\n";
    cout << "The number of palindrome numbers : " << palindrome_count << "\n";
    cout << "The number that has the maximum number of divisors : " << max_div_num << "\n";
}

int main()
{
    int n;
    cin >> n;
    five_in_one(n);
}