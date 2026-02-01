#include <bits/stdc++.h>
using namespace std;


/*
data_type: kieu du lieu la so thuc hay so nguyen
data_type = 0 //int
data_type = 1 //float

lst_type: trang thai duoc sap xep cua day so
lst_type = 0 //khong doi
lst_type = 1 //tang dan
lst_type = 2 //giam dan
*/
void GenerateTest(string name, bool data_type, int lst_type){
    random_device rd;

    ofstream TEST(name);
    if (data_type == 0){//int 
        mt19937 mt(rd()); 
        uniform_int_distribution<int> dist(-1000000000, 1000000000);
        int n = 1000000;
        vector <int> tmp;
        TEST << n <<endl;
        for (int i = 1; i <= n; i ++ )
            tmp.push_back(dist(mt));

            if (lst_type != 0) sort(tmp.begin(), tmp.end());
            if (lst_type == 2) reverse(tmp.begin(), tmp.end()); 
            for (int i : tmp)
                TEST << i <<" ";
    }
    if (data_type == 1){//floatt 
        mt19937 mt(rd());
        uniform_real_distribution<float> dist(-1000000000.0, 1000000000.0);
        int n = 1000000;
        vector <float> tmp;
        TEST << n <<endl;
        for (int i = 1; i <= n; i ++ )
            tmp.push_back(dist(mt));

            if (lst_type != 0) sort(tmp.begin(), tmp.end());
            if (lst_type == 2) reverse(tmp.begin(), tmp.end());

            for (float i : tmp)
                TEST << i <<" ";
    }

    TEST.close();
}

int main(){
    GenerateTest("test" + to_string(1) + ".inp", 0, 1);
    GenerateTest("test" + to_string(2) + ".inp", 1, 2);
    for (int i = 3; i <= 6; i ++ ) GenerateTest("test" + to_string(i) + ".inp", 0, 0);
    for (int i = 7; i <= 10; i ++ ) GenerateTest("test" + to_string(i) + ".inp", 1, 0);
}
