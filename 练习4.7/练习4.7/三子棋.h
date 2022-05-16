
#define ROW 3
#define COL 3
void initBoard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char win(char board[ROW][COL], int row, int col);
int full(char board[ROW][COL], int row, int col);

