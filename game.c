#include <stdio.h>
#include "game.h"
#include "board.h"
#include "utils.h"

void play_game() {
    char board[3][3];
    char current_player = 'X';
    int moves = 0;
    initialize_board(board);

    while (1) {
        print_board(board);
        printf("Player %c, enter your move (row and column): ", current_player);
        int row, col;
        scanf("%d %d", &row, &col);

        if (make_move(board, row, col, current_player)) {
            moves++;
            if (check_winner(board, current_player)) {
                print_board(board);
                printf("Player %c wins!\n", current_player);
                break;
            }
            if (moves == 9) {
                print_board(board);
                printf("It's a draw!\n");
                break;
            }
            current_player = (current_player == 'X') ? 'O' : 'X'; // Switch player
        } else {
            printf("Invalid move. Try again.\n");
        }
    }
}
