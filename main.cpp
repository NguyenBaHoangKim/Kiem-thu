#include <bits/stdc++.h>

using namespace std;

string xetHB(int DRL, bool diemF, int tongTC, float tbhk, bool kyLuat){
    if (DRL < 0 || DRL > 100 || tongTC < 0 || tbhk < 0 || tbhk > 4.0) {
        return "Input khong hop le";
    } else if (DRL < 70 || diemF == 1 || tongTC < 14 || tbhk < 3.2 || kyLuat == 1) {
        return "Khong du dieu kien xet hoc bong";
    } else {
        return "Du dieu kien xet hoc bong";
    }
}



int main() {
    freopen("testcase.INP","r",stdin);
//    freopen("output.OUT","w",stdout);
    cout << "hehee" << endl;
    int x;
    cin >> x;
    cout << x << endl;
    while (x--) {
        cout << x << " ";
        int DRL, tongTC;
        bool diemF, kyLuat;
        float tbhk;
        cin >> DRL >> diemF >> tongTC >> tbhk >> kyLuat;
        cout << xetHB(DRL,diemF,tongTC,tbhk,kyLuat) << endl;
    }
    return 0;
}
