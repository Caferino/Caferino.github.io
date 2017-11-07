#include <iostream>
using namespace std;

int iRow, iColumn, iX, iY;

int main()
{
    cout << "Insert the number of rows: ";
    cin >> iRow;
    cout << "Now, the columns: ";
    cin >> iColumn;
    iX=1;
    while(iX<=iRow)
    {
        iY=1;
        while(iY<=iColumn)
        {
            if(iX==1 || iY==1 || iColumn==iY || iX==iRow)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            iY++;
        }
        cout << endl;
        iX++;
    }
    return 0;
}
