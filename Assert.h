//
// Created by Никита on 07.07.2020.
//

#include <exception>
#include <string>

#ifndef NEWL_ASSERT_H
#define NEWL_ASSERT_H

#define ASSERT(x, y)  \
if (x != y) { \
    throw __LINE__; \
}

template <class T>
class Assert {
    void operator()(T x, T y) {
        ASSERT(x, y);
    }
};



#endif //NEWL_ASSERT_H
