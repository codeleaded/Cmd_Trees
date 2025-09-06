#include "C:/Wichtig/System/Static/Container/BinTree.h"
#include "C:/Wichtig/System/Static/Container/Tree.h"

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