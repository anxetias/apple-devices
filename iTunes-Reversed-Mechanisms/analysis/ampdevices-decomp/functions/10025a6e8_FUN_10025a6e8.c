// name: FUN_10025a6e8
// address: 10025a6e8

void FUN_10025a6e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  
  if (*(char *)(param_3 + 2) != '\0') {
    return;
  }
  cVar1 = FUN_100173f7c(*param_3,param_1);
  if (cVar1 != '\0') {
    param_3[1] = param_2;
    *(undefined1 *)(param_3 + 2) = 1;
  }
  return;
}

