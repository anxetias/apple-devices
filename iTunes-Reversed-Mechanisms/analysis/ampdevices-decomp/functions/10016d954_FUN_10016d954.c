// name: FUN_10016d954
// address: 10016d954

void FUN_10016d954(undefined8 param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = -1;
  do {
    pcVar1 = (char *)(param_2 + 1 + lVar2);
    lVar2 = lVar2 + 1;
  } while (*pcVar1 != '\0');
  FUN_10016dd2e(param_1,5);
  FUN_10016f2da(param_1,param_2,lVar2);
  return;
}

