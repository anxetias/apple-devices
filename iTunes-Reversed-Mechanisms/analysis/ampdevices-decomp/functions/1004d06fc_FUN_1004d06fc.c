// name: FUN_1004d06fc
// address: 1004d06fc

long FUN_1004d06fc(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  if (param_1 == 0) {
LAB_1004d07af:
    param_1 = 0;
  }
  else {
    uVar1 = ~(param_3 << 0xf) + param_3;
    uVar1 = (uVar1 >> 10 ^ uVar1) * 9;
    uVar1 = uVar1 >> 6 ^ uVar1;
    uVar1 = ~(uVar1 << 0xb) + uVar1;
    uVar4 = uVar1 >> 0x10 ^ uVar1;
    uVar2 = uVar4 & param_2;
    lVar5 = (long)(int)uVar2 * 0x10;
    iVar3 = *(int *)(param_1 + lVar5);
    if (iVar3 != param_3) {
      uVar4 = (uVar1 >> 0x17) + ~uVar4;
      uVar4 = uVar4 * 0x1000 ^ uVar4;
      uVar4 = uVar4 >> 7 ^ uVar4;
      uVar4 = uVar4 * 4 ^ uVar4;
      uVar1 = 0;
      do {
        if (iVar3 == 0) goto LAB_1004d07af;
        if (uVar1 == 0) {
          uVar1 = uVar4 >> 0x14 ^ uVar4 | 1;
        }
        uVar2 = uVar2 + uVar1 & param_2;
        lVar5 = (long)(int)uVar2 * 0x10;
        iVar3 = *(int *)(param_1 + lVar5);
      } while (iVar3 != param_3);
    }
    param_1 = param_1 + lVar5;
  }
  return param_1;
}

