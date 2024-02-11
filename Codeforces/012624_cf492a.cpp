#include <iostream>
#include <vector>

int sum_natural(int n){
    return n * (n + 1) / 2;
}

int main(){
    int n;
    std::cin >> n;
    std::vector<int> memo(1,0);
    int sum = 0;
    for(int i=1; i<41; i++){
        sum += sum_natural(i);
        memo.push_back(sum);
        if(sum > n){
            std::cout << i-1 << '\n';
            return 0;
        }
    }
}
