//
// Created by Brezak on 2022-06-27.
//

#ifndef BREZAKS_RANDOM_BULLSHIT_BULLSHIT_H
#define BREZAKS_RANDOM_BULLSHIT_BULLSHIT_H

#include <stddef.h>

#define BREZAKS_RANDOM_BULLSHIT_VER 0_1_0

#define DEFINE_VEC_PROTOTYPES(type, suffix)                                \
typedef struct vec_ ## suffix {                                            \
    type *  __data                                                         \
    size_t __len                                                           \
    size_t __capacity                                                      \
} vec_ ## suffix;                                                          \
                                                                           \
vec_ ## suffix new_vec_ ## suffix ()                                       \
vec_ ## suffix new_vec_ ## suffix ## _with_capacity(size_t capacity)       \
void vec_ ## suffix ## _push_front(vec_ ## suffix * vec, type item)        \
void vec_ ## suffix ## _push_back(vec_ ## suffix * vec, type item)         \
type vec_ ## suffix ## _pop_front(vec_ ## suffix * vec)                    \
type vec_ ## suffix ## _pop_back(vec_ ## suffix * vec)                     \
type * vec_ ## suffix ## _get(vec_ ## suffix * vec, size_t index)          \
void vec_ ## suffix ## _set(vec_ ## suffix * vec, size_t index, type item) \
void vec_ ## suffix ## _remove(vec_ ## suffix * vec, size_t index)         \
size_t vec_ ## suffix ## _len(vec_ ## suffix * vec)                        \
size_t vec_ ## suffix ## _capacity(vec_ ## suffix * vec)                   \
void vec_ ## suffix ## _destroy (vec_ ## suffix * vec)                     \
void vec_ ## suffix ## _resize (vec_ ## suffix  * vec, size_t new_size)


#define DEFINE_VEC_FUNCTION(type, suffix, comparator_function)

#endif //BREZAKS_RANDOM_BULLSHIT_BULLSHIT_H

