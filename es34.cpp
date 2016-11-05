c

void sequenza(int x);


int main()
{
    int x;
    cout<<"inserire il valore: " ;
    cin>> x;
    sequenza(x);

    return 0;
}

void sequenza(int x)
{
    int n=5;
    while (n>0)
    {
        n--;
        x++;
        cout<< x <<endl;
    }
}
