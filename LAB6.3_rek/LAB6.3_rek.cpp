#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T>
void generateArrayTemplate(T ar, int n, int i = 0) {
    if (i > n-1)
    {
        return;
    }
    else 
    {
        ar[i] = -40 + rand() % (50 + 40 + 1);
        generateArrayTemplate(ar, n, i+1);
    }
    
}

template <typename R>
R arr_sumTemplate(R ar[], int n, R sum = 0, int i = 0) {
    if (i > n-1)
    {
        return sum;
    }
    else {
        sum += ar[i];
        arr_sumTemplate(ar, n, sum, i+1);
    }
}

void generateArray(int ar[], int n, int i = 0) {
    if (i > n - 1)
    {
        return;
    }
    else
    {
        ar[i] = -40 + rand() % (50 + 40 + 1);
        generateArrayTemplate(ar, n, i + 1);
    }
}

int arr_sum(int ar[], int n, int i = 0, int sum = 0) {
    if (i > n - 1)
    {
        return sum;
    }
    else {
        sum += ar[i];
        arr_sumTemplate(ar, n, sum, i + 1);
    }
}


int main()
{
    srand((unsigned)time(NULL));
    int a[22];

    generateArray(a, 22);

    for (int i = 0; i < 22; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    cout << arr_sum(a, 22) << endl;

    int b[22];

    generateArrayTemplate(b, 22);

    for (int i = 0; i < 22; i++) {
        cout << b[i] << " ";
    }

    cout << endl;
    cout << arr_sumTemplate(b, 22) << endl;

    return 0;
}