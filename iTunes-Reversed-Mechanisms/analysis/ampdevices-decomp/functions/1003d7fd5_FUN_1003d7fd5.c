// name: FUN_1003d7fd5
// address: 1003d7fd5

void FUN_1003d7fd5(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0xc4) == '\0') {
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    *(int *)(param_1 + 0xbc) = iVar1;
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  for (lVar2 = FUN_10049b5df(); lVar2 != 0; lVar2 = FUN_10049b6f5(lVar2)) {
    FUN_1003d7fd5(lVar2,param_2);
  }
  return;
}

