#include<iostream>
#define maxSize 100

using namespace std;

int main()
{
    int set[maxSize], size;
    int temp = 0, temp_1 = 0;

    cout << "********************************************" << endl;
    cout << " Enter the set having maximum four elements" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    // Scanning the cardinal number of set
    cout << "Enter the cardinal number of set: ";
    cin >> size;

    if(size > 0 && size < 5)
    {
        // Scanning the elements of the set
        cout << "Enter the " << size << " elements of set: " << endl;
        for(int i=0; i<size; i++)
        {
            cout << "Element [" << i+1 << "]: ";
            cin >> set[i];
        }

        // Printing the set
        cout << endl;
        cout << "Set: " << endl;
        cout << "{ ";
        for(int i=0; i<size-1; i++)
        {
            cout << set[i] << ", ";
            temp++;
        }
        cout << set[temp];
        cout << "}";
    }

    // Printing the power set
    if(size < 5)
    {
        cout << endl << endl;
        cout << "Power Set: " << endl;
        cout << "{";
        switch(size)
        {
            // If the cardinal number is zero
            case 0:
            {
                cout << "{}";
                break;
            }

            // If the cardinal number is 1
            case 1:
            {
                cout << "{}, ";
                for(int i=0; i<size; i++)
                {
                    cout <<"{" << set[i] << "}";
                }
                break;
            }

            // If the cardinal number is 2
            case 2:
            {
                cout << "{}, ";

                for(int i=0; i<size; i++)
                {
                    cout << "{" << set[i] << "}, ";
                }

                for(int i=0; i<size; i++)
                {
                    for(int j=i+1; j<size; j++)
                    {
                        cout << "{" << set[i] << ", " << set[j] << "}";
                    }
                }
                break;
            }

            // If cardinal number is 3
            case 3:
            {
                cout << "{}, ";

                for(int i=0; i<size; i++)
                {
                    cout << "{" << set[i] << "}, ";
                }

                for(int i=0; i<size; i++)
                {
                    for(int j=i+1; j<size; j++)
                    {
                        cout << "{" << set[i] << ", " << set[j] << "}, ";
                    }
                }

                cout << "{";
                for(int i=0; i<size-1; i++)
                {
                    cout << set[i] << ", ";
                    temp_1++;
                }
                cout << set[temp_1];
                cout << "}";

                break;
            }

            // If the cardinal nummber is 4
            case 4:
            {
                cout << "{}, ";

                for(int i=0; i<size; i++)
                {
                    cout << "{" << set[i] << "}, ";
                }

                for(int i=0; i<size; i++)
                {
                    for(int j=i+1; j<size; j++)
                    {
                        cout << "{" << set[i] << ", " << set[j] << "}, ";
                    }
                }

                for(int i=0; i<size; i++)
                {
                    for(int j=i+1; j<size; j++)
                    {
                        for(int k = j+1; k<size; k++)
                        {
                            cout << "{" << set[i] << ", " << set[j] << ", " << set[k] << "}, ";
                        }
                    }
                }

                cout << "{";
                for(int i=0; i<size-1; i++)
                {
                    cout << set[i] << ", ";
                    temp_1++;
                }
                cout << set[temp_1];
                cout << "}";

                break;
            }
        }
        cout << "}";
    }

    // If the cardinal number is greater than 4
    if(size > 4)
    {
        cout << "Do enter maximum cardinal number = 4";
    }

    return 0;
}
