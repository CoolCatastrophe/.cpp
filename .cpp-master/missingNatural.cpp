#include <iostream>
#include <vector>
using namespace std;

// Array Approach
// void missingNatural(int a[], int n,int x)
// {
//     int i = 0;
//     for (i = 0; i < x; i++)
//     {
//         if (i + 1 == a[i] && a[i] > 0)
//         {
//             continue;
//         }
//         else
//         {
//             cout << "Missing : " << i + 1 << "\n";
//             int* newa = new int[n + 1];
//             for (int j = 0; j < n; j++)
//             {
//                 newa[j] = a[j];
//             }
//             newa[n] = a[n - 1];
//             delete[] a;
//             a = newa;
//             n++;
//         }
//     }
// }

// int main()
// {
//     int n = 3;
//     int* a = new int[n]{1, 2, 10};
//     int untill = 10;
//     missingNatural(a, n,untill);
//     delete[] a;
//     return 0;
// }

// Vector Approach
void missingNatural(vector<int> a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == a[i])
        {
            continue;
        }
        else
        {
            cout << "Missing Number: " << i + 1<<endl;
            a.resize(a.size() + 1, a.back());
        }
    }
}

int main()
{
    vector<int> a = {1, 2, 8};
    int n = 10;
    missingNatural(a,n);
    return 0;
}