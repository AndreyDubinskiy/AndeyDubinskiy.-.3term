#include <iostream>
#include <list>

void bebra(int n, int m) {
    std::list<int> warriors;
    for (int i = 1; i <= n; ++i) {
        warriors.push_back(i);
    }
    auto it = warriors.begin();
    std::cout << "Elimination order: ";
    while (warriors.size() > 1) {
        for (int count = 0; count < m - 1; ++count) {
            if (++it == warriors.end()) {
                it = warriors.begin();
            }
        }
        std::cout << *it << " ";
        it = warriors.erase(it);
        if (it == warriors.end()) {
            it = warriors.begin();
        }
    }
    std::cout << std::endl << "The last survivor: " << warriors.front() << std::endl;
}

int main() {
    int n, m;
    std::cout << " ";
    std::cin >> n >> m;
    bebra(n, m);

    return 0;
}