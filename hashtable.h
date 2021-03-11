typedef struct Node AVL;

typedef struct tnode
{
	char *info;
   int balance;
	struct tnode *next,*right;
}Node;
typedef struct
{
   Node *first;
}Hash;

//Funcoes AVL

AVL *createAVL(void);
AVL *searchAVL(AVL *avl,Info *inf);
int insertAVL(AVL **avl,Info *inf);
int auxInsertAVL(AVL** avl, Info *inf, int *growup);
void LL_RotationAVL(AVL** avl);
void RR_RotationAVL(AVL** avl);
void LR_RotationAVL(AVL** avl);
void RL_RotationAVL(AVL** avl);
AVL *deleteAVL(AVL *avl,Info *inf);
void printAVL(AVL *avl);
void auxprintAVL(AVL *avl);

//Funcoes Hash Table
void createHT(Hash hashtable[],int sizeht);                //Funcao que cria uma hashtable
int functionHT(char *inf,int sizeht);                       //Funcao que calcula o valor hash de uma chave
void printHT(Hash hashtable[],int sizeht);                 //Funcao que printa a hashtable
void insertHT(Hash hashtable[],int sizeht, char *name);    //Funcao que insere uma chave na hashtable
void deleteHT(Hash hashtable[], int sizeht, char *wd);     //Funcao que deleta uma chave da hashtable
void searchHT(Hash hashtable[], int sizeht, char *word);   //Funcao que busca uma chave na hashtable
