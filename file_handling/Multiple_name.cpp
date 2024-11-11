
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string filename = "name.txt";
    ifstream file(filename);
    if (!file)
    {
        cout << "Unable to open file " << filename << endl;
        return 1;
    }
    string nameToFind;
    cout << "Enter the name to search: ";
    getline(std::cin, nameToFind);
    string name;
    int count = 0;
    while (file >> name)
    {
        if (name == nameToFind)
        {
            count++;
        }
    }
    file.close();
    if (count > 0)
    {
        cout << nameToFind << " found " << count << " times in the file."
             << endl;
    }
    else
    {
        cout << nameToFind << " not found in the file." << endl;
    }
    return 0;
}