// name: FUN_100119080
// address: 100119080

undefined8 FUN_100119080(float param_1,uint *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x21737474;
  if (*(long *)(param_2 + 8) == 0) {
    lVar2 = FUN_10011d9bc(param_3);
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 0x73697a65;
    if (lVar2 != 0) {
      iVar1 = FUN_100111438(param_2 + 2,param_3 >> 1);
      if (iVar1 == 0) {
        *param_2 = param_3;
        param_2[10] = ~-(uint)(param_1 == 0.0) & (uint)param_1 |
                      (uint)SQRT(DAT_100705e60 / (float)param_3) & -(uint)(param_1 == 0.0);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

