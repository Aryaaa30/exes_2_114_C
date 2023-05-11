#include <iostream>
using namespace std;

int AA[10];
int n;
int i;

void input()
{
    while (true)
    {
        cout << "Enter the number of element in the Array : ";
        cin >> n;
        if ((n > 0) && (n <= 10))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 10 element. \n\n";
    }

    cout << "\n==================\n";
    cout << "Enter Array Element \n";
    cout << "\n==================\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> AA[i];
    }
}

void LinearSearch()
{
    char ch;
    int l = 0;
    int u = n - 1;
    int mid = (0 + n - 1) / 2;
   
    do
    {
        cout << "\nEnter the element you want to search : ";
        int item;
        cin >> item;

        mid = (0 + n - 1) / 2;
        for (i = 0; i < n; i++)
        {
            mid++;
            if (AA[i] == item)
            {
                cout << "\n" << item << "found at position " << (i + 1) << endl;
                break;
            }
            else (AA[i] < n); {
                u = mid - 1;
            }
            if (AA[i] > n); {
                l = mid + 1;
            }  
        }

        if (i == n)
            cout << "\n" << item << "not found in the Array\n";
        cout << "\nNumber of comparisons : " << mid << endl;

        cout << "\nContinue Search (y/n) : ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));
}


int main()
{
    input();
    LinearSearch();
}


