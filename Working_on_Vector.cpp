#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
template <typename T>
class Vector {
private:
    vector<T> elements;
public:
    Vector(const vector<T>& data) : elements(data) {}
    T findSmallest() const {
        if (elements.empty()) {
            throw out_of_range("Vector is empty.");
        }
        return *min_element(elements.begin(), elements.end());
    }
    bool searchElement(const T& element) const {
        return find(elements.begin(), elements.end(), element) != elements.end();
    }
    double findAverage() const {
        if (elements.empty()) {
            throw out_of_range("Vector is empty.");
        }
        T sum = accumulate(elements.begin(), elements.end(), T());
        return static_cast<double>(sum) / elements.size();
    }
};
int main() {
    vector<int> data = {10, 5, 8, 3, 12};
    Vector<int> intVector(data);
    try {
        cout << "Smallest element: " << intVector.findSmallest() << std::endl;
        int elementToSearch = 8;
        cout << "Element " << elementToSearch << " is "<< (intVector.searchElement(elementToSearch) ? "found." : "not found.") << std::endl;
        cout << "Average of elements: " << intVector.findAverage() << std::endl;
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
