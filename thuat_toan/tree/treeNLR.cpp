// nhập vào cây nhị phân, xuất các phần tử của cây nhị phân
#include <iostream>
using namespace std;
struct node
{
    int data;           // du lieu cua node ==> du lieu luu tru
    struct node *left;  // cây con trái
    struct node *right; // cây con phải
};
typedef struct node NODE;
typedef NODE *TREE;
void Khoitaocay(TREE &t)
{
    t = NULL;
}
// ham them phan tu x vao cay nhi phan
void themvaocay(TREE &t, int x)
{
    if (t == NULL)
    {
        NODE *p = new NODE; // khoi tao node de them vao cay
        p->data = x;        // thêm dữ liệu x vào data
        p->left = NULL;
        p->right = NULL;
        t = p; // node p là node gốc
    }
    else
    {
        // neu phan tu them vao nho hon node goc => them vao ben trai
        if (x < t->data)
        {
            themvaocay(t->left, x); // duyệt qua trái
        }
        else if (x > t->data)
        {
            themvaocay(t->right, x); // duyệt qua bên phải
        }
    }
}
void NLR(TREE t)
{ // duye cay node left right
    if (t != NULL)
    {
        cout << t->data << " "; // xuat du lieu trong node
        NLR(t->left);
        NLR(t->right);
    }
}
// ham nhap du lieu
void input(TREE &t)
{
    while (true)
    {
        cout << "\n\n\t\tMENU" << endl;
        cout << "1.Nhap du lieu " << endl;
        cout << "2.Xuat du lieu " << endl;
        cout << "0.Thoat" << endl;
        int choice;
        cin >> choice;
        if (choice < 0 || choice > 2)
        {
            cout << "INVALID" << endl;
            system("pause");
        }
        else if (choice == 1)
        {
            int x;
            cin >> x;
            themvaocay(t, x);
        }
        else if (choice == 2)
        {
            cout << "NLR";
            NLR(t);
        }
        else
        {
            break;
        }
    }
}
int main()
{
    TREE t;
    Khoitaocay(t);
    input(t);
    NLR(t);
    system("pause");
    return 0;
}