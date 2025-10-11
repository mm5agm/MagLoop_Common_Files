#ifndef CIRCULARBUFFER_H
#define CIRCULARBUFFER_H

#include <Arduino.h>

template <typename T, size_t Size>
class CircularBuffer {
public:
    CircularBuffer() : head(0), tail(0), count(0) {}

    bool isFull() const {
        return count == Size;
    }

    bool isEmpty() const {
        return count == 0;
    }

    size_t size() const {
        return count;
    }

    bool push(const T& item) {
        if (isFull()) {
            return false; // Buffer is full, cannot push
        }
        buffer[head] = item;
        head = (head + 1) % Size;
        count++;
        return true;
    }

    bool pop(T& item) {
        if (isEmpty()) {
            return false; // Buffer is empty, cannot pop
        }
        item = buffer[tail];
        tail = (tail + 1) % Size;
        count--;
        return true;
    }

    bool peek(T& item) const {
        if (isEmpty()) {
            return false; // Buffer is empty, cannot peek
        }
        item = buffer[tail];
        return true;
    }

    void clear() {
        head = 0;
        tail = 0;
        count = 0;
    }

private:
    T buffer[Size];
    size_t head;
    size_t tail;
    size_t count;
};

#endif // CIRCULARBUFFER_H