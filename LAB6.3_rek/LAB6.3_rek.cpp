#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

template <typename T>
void generateArrayTemplate(T ar, int n, int i = 0) {
    if (i > n-1)
    {
        return;
    }
    else 
    {
        ar[i] = -40 + rand() % (91);
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

template <typename P>
void PrintTemplate(P * a, int size, int index = 0) {
    if (index >= size) {
        cout << endl;
        return;
    }

    cout << a[index] << setw(4);
    PrintTemplate(a, size, index + 1);
}


void generateArray(int ar[], int n, int i = 0) {
    if (i > n - 1)
    {
        return;
    }
    else
    {
        ar[i] = -40 + rand() % (91);
        generateArray(ar, n, i + 1);
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

void Print(int* a, int size, int index = 0) {
    if (index >= size) {
        cout << endl;
        return;
    }

    cout << a[index] << setw(4);
    Print(a, size, index + 1);
}

int main()
{
    srand((unsigned)time(NULL));
    int a[22];

    generateArray(a, 22);

    Print(a, 22);
    cout << endl;
    cout << "Sum: " << arr_sum(a, 22) << endl;
    cout << endl;

    int b[22];

    generateArrayTemplate(b, 22);

    PrintTemplate(b, 22);

    cout << endl;
    cout << "Template Sum: " << arr_sumTemplate(b, 22) << endl;

    return 0;
}