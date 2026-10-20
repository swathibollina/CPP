int func1(int& a)
{
    a = 5;
    return 4;
}

int func2(int* a)
{
    *a = 2;
    return 5;
}

int main() {
 int a = 1;
 int* p = &a;
 cout<<*p<<endl; // 1
 int t = func2(p);
 cout<<a<<" "<<t<<endl;
 // 2 5 
 
 cout<<a<<" "<<func1(a)<<endl;
 // 2 4
 cout<<a<<endl; // 5

}
