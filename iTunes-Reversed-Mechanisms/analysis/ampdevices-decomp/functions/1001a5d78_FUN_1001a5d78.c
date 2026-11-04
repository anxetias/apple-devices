// name: FUN_1001a5d78
// address: 1001a5d78

undefined1 FUN_1001a5d78(byte *param_1,int param_2,int param_3,char param_4,long param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  param_2 = param_2 - (int)param_1;
  if (param_3 == 0) {
    if (param_2 != 3) {
      return 0;
    }
    iVar1 = *param_1 - 0x47;
    if ((iVar1 == 0) && (iVar1 = param_1[1] - 0x4d, iVar1 == 0)) {
      iVar1 = 0x54 - (uint)param_1[2];
    }
    else {
      iVar1 = -iVar1;
    }
    if (iVar1 != 0) {
      iVar1 = *param_1 - 0x55;
      if ((iVar1 == 0) && (iVar1 = param_1[1] - 0x54, iVar1 == 0)) {
        iVar1 = 0x43 - (uint)param_1[2];
      }
      else {
        iVar1 = -iVar1;
      }
      if (iVar1 != 0) {
        FUN_1001dfaed((int)param_1,3,param_5 + 0x1d,4);
        return 1;
      }
    }
    *(undefined4 *)(param_5 + 0x18) = 0;
  }
  else if (param_2 == 4) {
    iVar2 = ((int)(char)param_1[1] + (char)*param_1 * 10) * 0xe10;
    iVar4 = ((int)(char)param_1[3] + (char)param_1[2] * 10) * 0x3c;
    iVar1 = 0x1d7cc0 - (iVar4 + iVar2);
    if (param_4 != '-') {
      iVar1 = iVar2 + iVar4 + -0x1d7cc0;
    }
    *(int *)(param_5 + 0x18) = iVar1;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    iVar1 = ((int)(char)param_1[1] + (char)*param_1 * 10) * 0x3c + -0x7bc0;
    cVar3 = *(char *)(param_5 + 0x1c);
    if (cVar3 == '\0') {
      iVar1 = iVar1 * 0x3c;
      *(char *)(param_5 + 0x1c) = param_4;
      cVar3 = param_4;
    }
    iVar2 = -iVar1;
    if (cVar3 != '-') {
      iVar2 = iVar1;
    }
    *(int *)(param_5 + 0x18) = *(int *)(param_5 + 0x18) + iVar2;
  }
  return 1;
}

