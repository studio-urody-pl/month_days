#include <iostream>

using namespace std;
struct
    {
    char *month;
    int days;
    } md[] =
        {
                "january", 31,
                "february", 28,
                "march", 31,
                "april", 30,
                "may", 31,
                "june", 30,
                "july", 31,
                "august", 31,
                "september", 30,
                "october", 31,
                "november", 30,
                "december", 31
        };

// printing months and number of days
int main(int, char**) {
    for (auto & i : md) {
        cout << i.month << " " << i.days << endl;
    }


    return 0;
}
