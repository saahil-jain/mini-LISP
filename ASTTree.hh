#ifndef ASTNODE_HH
#define ASTNODE_HH

class ASTNode{
    public:
    int number_of_children;
    ASTNode *child[3];
    int type;
    /*
        0 - NULL value
        1 - operator - for/while/if/+/-....
        2 - id
        3 - number value
        4 - bool value
        5 - string value
    */
    char ope[16];
    char id[100];
    int num_value;
    bool bool_value;
    char *str_value;
};


ASTNode* makeLeafNode_id(char *n);
ASTNode* makeLeafNode_num(int n);
ASTNode* makeLeafNode_bool(bool n);
ASTNode* makeLeafNode_str(char *n);
ASTNode* makeNode1(char *value, ASTNode *c1);
ASTNode* makeNode2(char *value, ASTNode *c1, ASTNode *c2);
ASTNode* makeNode3(char *value, ASTNode *c1, ASTNode *c2, ASTNode *c3);
#endif