#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

string read(int n, vector<int> book, int target)
{
    map<int, int> mpp;

    for(int i = 0; i < n; i++) {
        int a = book[i];
        int more = target - a;

        if(mpp.find(more) != mpp.end()) {
            return "YES";
        }

        mpp[a] = i;
    }

    return "NO";
}

int main()
{
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> book(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> book[i];
    }

    cout << "Enter target: ";
    cin >> target;

    cout << read(n, book, target);

    return 0;
}
