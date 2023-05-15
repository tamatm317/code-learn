void Output_combine(int a[], int b[], int c[], int n, int m, int x)
{
    combine_a_b(a,b,c,n,m,x);
    for ( int i = 0; i<x; i++)
    {
        cout << c[i] << " ";
    }
}