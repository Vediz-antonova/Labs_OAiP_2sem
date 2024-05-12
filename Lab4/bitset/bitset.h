#ifndef BITSET_H
#define BITSET_H

template <size_t len> class Bitset {
public:
    BitSet(int size) : m_size(size), m_bits(size, false) {}

    void set(int index, bool value = true) {
        checkIndex(index);
        m_bits[index] = value;
    }

    void reset(int index) {
        checkIndex(index);
        m_bits[index] = false;
    }

    bool test(int index) const {
        checkIndex(index);
        return m_bits[index];
    }

    int count() const {
        int count = 0;
        for (int i = 0; i < m_size; ++i) {
            if (m_bits[i]) {
                ++count;
            }
        }
        return count;
    }

    int size() const {
        return m_size;
    }

private:
    void checkIndex(int index) const {
        if (index < 0 || index >= m_size) {
            throw std::out_of_range("Index out of range");
        }
    }

    int m_size;
    QVector<bool> m_bits;
};
};

#endif // BITSET_H
