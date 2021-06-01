#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char username[255], username2[255];
char *ticTacToe[3][3];

int userWon(usuario)
{
  printf("\n\n%s GANHOU!\n\n", usuario);
  return 5;
}

char insertKey(void)
{
  int X, Y;
  int numJogadas = 0;
  char *jogada = "A";

  while(numJogadas < 3)
  {
    if(jogada == "A")
    {
      printf("%s, digite a posição em que você deseja desenhar o X", username);
      printf("\n> ");
      scanf("%d %d", &X, &Y);
      fflush(stdin);

      if(ticTacToe[X-1][Y-1] == '\0' || ticTacToe[X-1][Y-1] == NULL)
      {
        ticTacToe[X-1][Y-1] = "X";
        
        for(int i = 0; i < 3; i++)
        {
          for(int j = 0; j< 3; j++)
          {
            if(ticTacToe[i][j] != NULL || ticTacToe[i][j] != '\0')
            {
              printf(" %s", ticTacToe[i][j]);
            }
            else{
              printf(" █");
            }
          }
          printf("\n");
        }
        numJogadas++;
        jogada = "B";
      }
      else
      {
        printf("\nVocê não pode inserir algo em uma casa já preenchida\n");
      }
    }
    else if(jogada == "B")
    {
      printf("%s, digite a posição em que você deseja desenhar o 0", username2);
      printf("\n> ");
      scanf("%d %d", &X, &Y);
      fflush(stdin);

      if(ticTacToe[X-1][Y-1] == '\0' || ticTacToe[X-1][Y-1] == NULL)
      {
        ticTacToe[X-1][Y-1] = "0";
        
        for(int i = 0; i < 3; i++)
        {
          for(int j = 0; j< 3; j++)
          {
            if(ticTacToe[i][j] != NULL || ticTacToe[i][j] != '\0')
            {
              printf(" %s", ticTacToe[i][j]);
            }
            else{
              printf(" █");
            }
          }
          printf("\n");
        }
        numJogadas++;
        jogada = "A";
      }
      else
      {
        printf("\nVocê não pode inserir algo em uma casa já preenchida\n");
      }
    }

    char *keyType = "X";

    for(int i = 0; i < 2; i++)
    {
      if(ticTacToe[0][0] == keyType && ticTacToe[0][1] == keyType && ticTacToe[0][2] == keyType)
      {
        if(keyType == "X")
        {
          userWon(username);
        }
        else if(keyType == "0")
        {
          userWon(username2);
        }
        numJogadas = 5;

        for(int i = 0; i < 3; i++)
        {
          for(int j = 0; j< 3; j++)
          {
            if(ticTacToe[i][j] != NULL || ticTacToe[i][j] != '\0')
            {
              printf(" %s", ticTacToe[i][j]);
            }
            else{
              printf(" █");
            }
          }
          printf("\n");
        }
        return 0;
      }
      else if(ticTacToe[1][0] == keyType && ticTacToe[1][1] == keyType && ticTacToe[1][2] == keyType)
      {
        if(keyType == "X")
        {
          userWon(username);
        }
        else if(keyType == "0")
        {
          userWon(username2);
        }
        numJogadas = 5;

        for(int i = 0; i < 3; i++)
        {
          for(int j = 0; j< 3; j++)
          {
            if(ticTacToe[i][j] != NULL || ticTacToe[i][j] != '\0')
            {
              printf(" %s", ticTacToe[i][j]);
            }
            else{
              printf(" █");
            }
          }
          printf("\n");
        }
        return 0;
      }
      else if(ticTacToe[2][0] == keyType && ticTacToe[2][1] == keyType && ticTacToe[2][2] == keyType)
      {
        if(keyType == "X")
        {
          userWon(username);
        }
        else if(keyType == "0")
        {
          userWon(username2);
        }
        numJogadas = 5;

        for(int i = 0; i < 3; i++)
        {
          for(int j = 0; j< 3; j++)
          {
            if(ticTacToe[i][j] != NULL || ticTacToe[i][j] != '\0')
            {
              printf(" %s", ticTacToe[i][j]);
            }
            else{
              printf(" █");
            }
          }
          printf("\n");
        }
        return 0;
      }
      else if(ticTacToe[0][0] == keyType && ticTacToe[1][1] == keyType && ticTacToe[2][2] == keyType)
      {
        if(keyType == "X")
        {
          userWon(username);
        }
        else if(keyType == "0")
        {
          userWon(username2);
        }
        numJogadas = 5;

        for(int i = 0; i < 3; i++)
        {
          for(int j = 0; j< 3; j++)
          {
            if(ticTacToe[i][j] != NULL || ticTacToe[i][j] != '\0')
            {
              printf(" %s", ticTacToe[i][j]);
            }
            else{
              printf(" █");
            }
          }
          printf("\n");
        }
        return 0;
      }
      else if(ticTacToe[2][2] == keyType && ticTacToe[1][1] == keyType && ticTacToe[0][2] == keyType)
      {
        if(keyType == "X")
        {
          userWon(username);
        }
        else if(keyType == "0")
        {
          userWon(username2);
        }

        for(int i = 0; i < 3; i++)
        {
          for(int j = 0; j< 3; j++)
          {
            if(ticTacToe[i][j] != NULL || ticTacToe[i][j] != '\0')
            {
              printf(" %s", ticTacToe[i][j]);
            }
            else{
              printf(" █");
            }
          }
          printf("\n");
        }
        return 0;
      }
      else
      {
        numJogadas = 0;
      }
      keyType = "0";
    }
  }
}

int main(void) 
{
  printf("Tic-Tac-Toe\n\n");

  printf("Digite seu nome de usuário\n");
  printf("> ");
  scanf("%s", username);
  fflush(stdin);

   printf("Digite seu nome de usuário\n");
  printf("> ");
  scanf("%s", username2);
  fflush(stdin);

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j< 3; j++)
    {
      printf(" █");
    }
    printf("\n");
  }
  insertKey();
  return 0;
}