// Bạn có r quả bóng bay màu đỏ, g quả bóng bay màu xanh lá và b quả bóng bay màu xanh da trời.
// Bạn muốn dùng số bóng bay này để trang trí các phòng sao cho mỗi phòng phải có 3 quả bóng bay với ít nhất 2 màu.
// Hãy viết hàm xác định số phòng tối đa có thể trang trí được.
// Ví dụ
// Cho r = 2,
// g = 1, b = 3, output là decorateRoom(r, g, b) = 2.
// Giải thích : Phòng thứ nhất : 2 quả bóng màu xanh da trời và 1 quả bóng màu xanh lá cây.
// Phòng thứ hai : 2 quả bóng màu đỏ và 1 quả bóng màu xanh da trời.Nếu bạn dùng 1 quả màu xanh lá cây và 2 quả màu đỏ để trang trí thì bạn chỉ có thể trang trí được 1 phòng.
// Cho r = 3, g = 3, b = 20, output là decorate(r, g, b) = 6
#include <bits/stdc++.h>
using namespace std;
long long decorateRoom(int r, int g, int b)
{
    if (r == g && g == b)
        return r;
    return min((r + g + b) / 3, r + g + b - max(r, max(g, b)));
}
int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    cout << decorateRoom(r, g, b);
}