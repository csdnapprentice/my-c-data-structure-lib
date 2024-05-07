#ifndef ARRAY_MYARRAY_H
#define ARRAY_MYARRAY_H
struct Array{
    void **item;
    int length;
    int maxLength;
};
int arrayLength(int size, int type_size);
int initArray(struct Array *a, int maxSize);
int insertItem(struct Array *a, int index, void *element, int elementSize);
int deleteItem(struct Array *a, int index);
#endif //ARRAY_MYARRAY_H
