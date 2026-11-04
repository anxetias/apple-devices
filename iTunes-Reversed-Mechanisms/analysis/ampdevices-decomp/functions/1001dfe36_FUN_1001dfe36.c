// name: FUN_1001dfe36
// address: 1001dfe36

void FUN_1001dfe36(char *param_1,char param_2,char param_3)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (cVar1 == param_2) {
      *param_1 = param_3;
    }
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}

