// name: FUN_1001a1c9c
// address: 1001a1c9c

void FUN_1001a1c9c(uint *param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_4 != 0 || param_3 != 0) {
    bVar1 = 0;
    uVar3 = 1;
    do {
      bVar4 = param_4 == 0;
      if (bVar4) {
        param_4 = 0;
      }
      else {
        param_1[1] = param_1[1] | (uVar3 & param_2) >> (bVar1 & 0x1f);
        uVar3 = uVar3 * 2;
        param_4 = param_4 + -1;
      }
      bVar4 = !bVar4;
      iVar2 = 0;
      if (param_3 != 0) {
        *param_1 = *param_1 | (uVar3 & param_2) >> (bVar4 + bVar1 & 0x1f);
        uVar3 = uVar3 * 2;
        iVar2 = param_3 + -1;
      }
      bVar1 = bVar1 + bVar4 + (param_3 != 0) + 1;
      param_3 = iVar2;
    } while (param_4 != 0 || iVar2 != 0);
  }
  return;
}

