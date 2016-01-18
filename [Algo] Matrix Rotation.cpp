#include<iostream>

using namespace std;

int main()
{
    long long int row,column;
    cin>>row>>column;
    long long int r;
    cin>>r;
    long long int a[row][column],b[row][column];
    for(long long int i=0;i<row;i++)
    {
        for(long long int j=0;j<column;j++)
        {
            cin>>a[i][j];
            b[i][j] = 0;
        }
    }
    long long int ro = row;
    long long int c = column;
    long long int ct = 0;

    //r = r%(row*column - (row-2)*(column-2));
        int rotate = r;
        for(long long int j=0;row-j>0&&column-j>0;j=2)
        {
            row = row - j;
            column = column - j;
            r = rotate % (2*(row-1) + 2*(column-1));
            for(long long int i=0;i<r;i++)
            {
                for(long long int k=0;k<column;k++)
                {
                    if(k<column-1)
                        b[ct][k+ct] = a[ct][k+ct+1];
                    else
                        b[ct][k+ct] = a[1+ct][k+ct];
                }
                for(long long int k=0;k<column;k++)
                {
                    if(k==0)
                        b[row-1+ct][k+ct] = a[row-2+ct][k+ct];
                    else
                        b[row-1+ct][k+ct] = a[row-1+ct][k+ct-1];
                }
                if(row>2){
                for(long long int k=1;k<row-1;k++)
                {
                    b[k+ct][ct] = a[k+ct-1][ct];
                }
                for(long long int k=1;k<row-1;k++)
                {
                    b[k+ct][column-1+ct] = a[k+ct+1][column-1+ct];
                }
                }

                //Copy Matrix For further rotation...
                for(long long int k=ct;k<column+ct;k++)
                {
                    a[ct][k] = b[ct][k];
                    a[row-1+ct][k] = b[row-1+ct][k];
                }
                for(long long int k=ct+1;k<row-1+ct;k++)
                {
                    a[k][ct] = b[k][ct];
                    a[k][column-1+ct] = b[k][column-1+ct];
                }
            }
            ct++;

        }


    //Print Rotated Matrix...

    for(long long int k=0;k<ro;k++)
        {
            for(long long int x=0;x<c;x++)
            {
                cout<<a[k][x]<<" ";
            }
            cout<<endl;
        }

    return 0;
}
