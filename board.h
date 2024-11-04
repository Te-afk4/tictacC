#ifndef BOARD_H
#define BOARD_H

void initialize_board(char board[3][3]);
void print_board(char board[3][3]);
int make_move(char board[3][3], int row, int col, char player);

#endif // BOARD_H
