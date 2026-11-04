// name: FUN_100296402
// address: 100296402

int FUN_100296402(undefined1 *param_1,undefined1 *param_2,long param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = 0;
  param_1[4] = (char)((uint)(param_4 + 2) >> 8);
  param_1[5] = (char)(param_4 + 2);
  param_1[6] = 0;
  if (param_4 == 0) {
    uVar1 = 7;
  }
  else {
    lVar2 = 0;
    do {
      param_1[lVar2 + 7] = *(undefined1 *)(param_3 + lVar2);
      lVar2 = lVar2 + 1;
    } while (param_4 != (int)lVar2);
    uVar1 = (int)lVar2 + 7;
  }
  param_1[uVar1] = 0;
  return uVar1 + 1;
}

