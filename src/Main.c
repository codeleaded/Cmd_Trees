#if defined(__linux__)
#include "/home/codeleaded/System/Static/Container/BinTree.h"
#include "/home/codeleaded/System/Static/Container/Tree.h"
#elif defined(_WINE)
#include "/home/codeleaded/System/Static/Container/BinTree.h"
#include "/home/codeleaded/System/Static/Container/Tree.h"
#elif defined(_WIN32)
#include "F:/home/codeleaded/System/Static/Container/BinTree.h"
#include "F:/home/codeleaded/System/Static/Container/Tree.h"
#elif defined(__APPLE__)
#error "Apple not supported!"
#else
#error "Platform not supported!"
#endif

int main(){

    BinTree tree = BinTree_New();

    BinTree_Add(&tree,LAYER_ROOT,   BRANCH_DONTCARE,        BRANCH_FIRST,   (int[]){69},sizeof(int));
    BinTree_Add(&tree,LAYER(1),     (int[]){BRANCH_FIRST},  BRANCH_FIRST,   (int[]){69},sizeof(int));
    BinTree_Add(&tree,LAYER(1),     (int[]){BRANCH_FIRST},  BRANCH_SECOND,  (int[]){69},sizeof(int));

    BinTree_Add(&tree,LAYER_ROOT,   BRANCH_DONTCARE,        BRANCH_SECOND,  (int[]){69},sizeof(int));
    BinTree_Add(&tree,LAYER(1),     (int[]){BRANCH_SECOND}, BRANCH_SECOND,  (int[]){69},sizeof(int));

    BinTree_Print(&tree);

    BinTree_Free(&tree);

    return 0;
}