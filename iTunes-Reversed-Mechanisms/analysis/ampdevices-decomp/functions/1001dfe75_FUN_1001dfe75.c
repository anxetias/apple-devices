// name: FUN_1001dfe75
// address: 1001dfe75

void FUN_1001dfe75(ushort *param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    lVar2 = 0;
    do {
      if (param_1[lVar2 + 1] == param_2) {
        param_1[lVar2 + 1] = param_3;
      }
      lVar2 = lVar2 + 1;
    } while ((uint)uVar1 != (uint)lVar2);
  }
  return;
}

