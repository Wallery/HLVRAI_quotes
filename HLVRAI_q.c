#include <stdio.h>
//#include <stdlib.h>
#include <windows.h> 

/*
* Benrey  \011
* Gordon  \017
* Tommy   \016
* Bubby   \013
* Coomer  \002
*
* \000 black
* \001 Dark Blue
* \010 gray         G-man
* \012 light green  Frozen
* \014 bright red
* \015 magenta      Darnold
* \017 pure white
*/


int main(int argc, char *argv[]){
  char n;

  HANDLE  hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  
  while(1){
  scanf("%c", &n);

  SetConsoleTextAttribute(hConsole, '\011');
  printf( "You are- You are a little clumsy \n"
          "boy aren't you, \n"
          "lost your little hand did'ya?\n");

  printf("It means I HATE YOU!!!\n");
  scanf("%c", &n); 

  SetConsoleTextAttribute(hConsole, '\002');
  printf("Wikipedia, the free online encyclopedia \n"
        "that anyone can edit!\n");
  scanf("%c", &n);
  
  printf( "Wikipedia, the free online encyclopedia \n"
          "that anyone from Black Mesa can edit!\n");
  scanf("%c", &n);

  printf( "Wikipedia, the free online encyclopedia \n"
          "that no one will ever edit again!\n");
  scanf("%c", &n);

  printf("I had a wife, but they took her in the divorce.\n");
  scanf("%c", &n);

	MessageBox(NULL, "ERROR - Reloading data", "BBBBBBBBBBBBB", MB_ICONINFORMATION);

  // Clear
  SetConsoleTextAttribute(hConsole, '\007');
  system("cls");
  }
  return 0;
}