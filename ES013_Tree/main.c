#include <stdio.h>

struct  tree_node{
    struct tree_node *left;
    struct tree_node *right;
    int key;
    int val;
};

void insert(struct tree_node **tree, struct tree_node* new){
    if (*tree==NULL){
        *tree=new;
        (*tree)->left=NULL;
        (*tree)->right=NULL;
    }
    else{
        if (new->key<(*tree)->key){
            insert(&(*tree)->left, new);
        } else if (new->key>(*tree)->key){
            insert(&(*tree)->right, new);
        } else
            printf("Chiave già esistente!");
    }
}

void in_order_view(struct tree_node* tree){
    if (tree!=NULL){
        in_order_view(tree->left);
        printf("Key: %d, value: %d\n", tree->key, tree->val);
        in_order_view(tree->right);
    }
}

int main() {
    struct tree_node **tree;
    struct tree_node *val;
    int ans=1;
    //printf("Per inserire un valore premere 1, per stampare la lista premere 2:  ");
    //scanf("%d", ans);

    switch (ans) {
        case 1:
            printf("Che valore si desidera inserire?");
            scanf("%d", val);
            insert(tree, val);
            printf("Valore inserito!");
            break;
        case 2:
            in_order_view(tree);
            break;
    }

    return 0;
}