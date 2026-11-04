// name: FUN_1002d8b31
// address: 1002d8b31

void FUN_1002d8b31(long *param_1,short *param_2)

{
  int iVar1;
  long lVar2;
  short sVar3;
  long lVar4;
  
  iVar1 = (int)param_1[1];
  if (iVar1 != 0) {
    lVar2 = *param_1;
    lVar4 = 0;
    do {
      *(undefined8 *)(param_2 + lVar4 * 4 + 1) = *(undefined8 *)(lVar2 + lVar4 * 8);
      lVar4 = lVar4 + 1;
    } while (iVar1 != (int)lVar4);
  }
  sVar3 = (short)(iVar1 << 2);
  *param_2 = sVar3;
  if ((int)param_1[2] != 0) {
    *param_2 = -sVar3;
  }
  return;
}

