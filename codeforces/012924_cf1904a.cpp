// Problem: https://codeforces.com/problemset/problem/1904/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <set>
#include <cstdint>
#include <cmath>
#include <iomanip>
/* #define _DEBUG */

using std::sqrt, std::pow, std::abs, std::fabs;
using std::cin, std::cout, std::endl;
using std::vector, std::set;

typedef int64_t i64;

double EPSILON = 1e-8;
bool equal(double a, double b){
    return fabs(a - b) <= EPSILON;
}

struct Point{
    i64 x, y;   

    // overload the < operator when comparing to another Point
    bool operator<(const Point& other) const{
        if(x == other.x) return y < other.y;
        return x < other.x;
    }
};


double distance(const Point& A, const Point& B){
    i64 dx = abs(A.x - B.x); 
    i64 dy = abs(A.y - B.y); 
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

double distance(const i64 a, const i64 b){
    return sqrt(pow(a, 2) + pow(b, 2)); 
}

set<Point> in_range(const Point& A,const i64 a,const i64 b){
    set<Point> points;

    Point p1;
    p1.x = A.x + a; p1.y = A.y + b; 
    Point p2;
    p2.x = A.x - a; p2.y = A.y - b; 
    Point p3;
    p3.x = A.x + a; p3.y = A.y - b; 
    Point p4;
    p4.x = A.x - a; p4.y = A.y + b; 

    Point p5;
    p5.x = A.x + b; p5.y = A.y + a; 
    Point p6;
    p6.x = A.x - b; p6.y = A.y - a; 
    Point p7;
    p7.x = A.x + b; p7.y = A.y - a; 
    Point p8;
    p8.x = A.x - b; p8.y = A.y + a; 

    points.insert(p1);
    points.insert(p2);
    points.insert(p3);
    points.insert(p4);
    points.insert(p5);
    points.insert(p6);
    points.insert(p7);
    points.insert(p8);

    return points;
}

void solve(){
    i64 a, b;
    cin >> a >> b;
    Point King, Queen;
    cin >> King.x >> King.y;
    cin >> Queen.x >> Queen.y;
    double dist1 = distance(King, Queen);
    double dist2 = distance(a, b);

    if(dist1 > 2*dist2 + EPSILON){
        cout << 0 << '\n';
        return;
    }
    if(equal(dist1, 2*dist2)){
        cout << 1 << '\n';
        return;
    }

    int count = 0;
    set<Point> points = in_range(King,a,b);
    for(Point x : points){
        if(equal(distance(Queen, x), dist2)){
            count++;
        }
    }
    cout << count << '\n';
}

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);
    cout << std::setprecision(10);
#ifdef _DEBUG
    std::freopen("input.txt", "r", stdin);
    // std::freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
