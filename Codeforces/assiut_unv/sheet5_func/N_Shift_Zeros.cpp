    #include <iostream>

    void shift_zero(int n)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
        }
        int write {0};
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[write] = arr[i];
                write++;
            }
        }
        for (int i = write; i < n; i++) {
            arr[i] = 0;
        }
        for (int i = 0; i < n; i++){
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }

    int main()
    {
        int n{0};
        std::cin >> n;
        shift_zero(n);
        return 0;
    }