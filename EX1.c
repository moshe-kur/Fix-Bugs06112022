//FROM <stdio.h< TO <stdio.h>
#include <stdio.h>

//ADD #pragma warning(disable:4996)
#pragma warning(disable:4996)

int main1() {

  int a = 4; 
  //CHANGE FROM b TO int b
  int b = 7;

  float c;
  //ADD & TO c 
  scanf("%f", &c);

  //FROM 5 = c
  //TO c==5
  if (c==5)
  {
      //CHANGE FROM print TO printf

       printf("%f", c);

  }

  //ADD return
  return 0;
}