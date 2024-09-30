#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    vector<string> businessNames;
    string businessName;

    cout << "Welcome to the Business Sorting Program!\n\n";

    do {
        //Get Business names
        cout << "Please enter the name of a business:  ";
        getline(cin, businessName);

        // add the inputed business to the list
        businessNames.push_back(businessName);

        // sort the busnisses
        sort(businessNames.begin(), businessNames.end());

        // list out the busnisses
        cout << "\nYour business(es):\n\n";
        for (const string& name : businessNames) {
            cout << "    " << name << endl;
        }
        cout << endl;

        //Ask if they want to enter another business
        string input;
        cout << "Another business? ";
        getline(cin, input);

        //convert input to lower case
        for (char& inputLow : input) {
            inputLow = tolower(inputLow);
        }


        if (input != "y" && input != "yes") {
            break;
        }

    } while (true);


    cout << "Thank you for using the Business Sorting Program!\n";

    return 0;
}
