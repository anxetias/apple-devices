// name: FUN_10017d7a3
// address: 10017d7a3

void FUN_10017d7a3(long param_1,char *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if ((uVar1 & 7) == 0) {
    uVar2 = uVar1 | 4;
    if (param_2[1] == '\0') {
      uVar2 = uVar1;
    }
    *(ushort *)(param_1 + 4) = (uVar2 - (*param_2 == '\0')) + 2;
  }
  return;
}

