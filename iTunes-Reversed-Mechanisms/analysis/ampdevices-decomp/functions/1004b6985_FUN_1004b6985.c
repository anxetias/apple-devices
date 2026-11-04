// name: FUN_1004b6985
// address: 1004b6985

void FUN_1004b6985(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x135c);
  *(int *)(param_1 + 0x135c) = iVar2 + 1;
  if (iVar2 < 9) {
    *param_3 = 1;
    cVar1 = *(char *)(param_2 + 1);
    FUN_10017060f(*(undefined8 *)(param_1 + 0x1320));
    if (cVar1 == '\0') {
      *(undefined8 *)(param_1 + 0x1320) = 0;
    }
    else {
      uVar3 = FUN_1001705fc(*param_2);
      *(undefined8 *)(param_1 + 0x1320) = uVar3;
    }
  }
  else {
    FUN_1004ac2b6(param_1,0,0x1f44,0);
    *param_3 = 0;
  }
  return;
}

