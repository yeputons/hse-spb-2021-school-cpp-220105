// Общее про шаблоны: https://www.youtube.com/watch?v=tyvCfrMUNQ0
template<typename T>
struct my_stack {
    // Пока неизвестен T, нельзя сгенирировать код.
    // Мы не можем скомпилировать для всех известных T, их бесконечно много.
    // Вывод: если используется my_vector, то надо дать компилятору текст шаблона целиком.
    std::vector<T> data;

    void push(T value) {
        data.push_back(value);
    }

    T pop() {
        T value = data.back();
        data.pop_back();
        return value;
    }
};

int main() {
    my_stack<int> s;
    s.push(10);
    s.push(20);
    assert(s.pop() == 20);
}
