// name: FUN_1003a1958
// address: 1003a1958

undefined8 FUN_1003a1958(long param_1,int param_2,uint param_3,undefined2 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_4 = 0;
  if (param_2 < 199) {
    if (param_2 - 2U < 2) {
LAB_1003a19a0:
      if ((param_3 & 4) == 0) {
        uVar3 = FUN_1003a0c80();
        return uVar3;
      }
      uVar3 = FUN_1003a1a42(param_1,param_3,param_4);
      return uVar3;
    }
    if (param_2 != 4) {
LAB_1003a1a08:
      lVar2 = FUN_1003a18fc(param_1,param_2);
      if (lVar2 == 0) {
        *param_4 = 0;
        return 0;
      }
      uVar3 = FUN_1003a1736(lVar2,param_2,param_3,param_4);
      return uVar3;
    }
  }
  else {
    if (param_2 != 200) {
      if (param_2 != 199) goto LAB_1003a1a08;
      goto LAB_1003a19a0;
    }
    uVar1 = *(uint *)(param_1 + 0xf8);
    if ((uVar1 >> 0xd & 1) == 0) {
      FUN_1003a1ada(param_1);
      uVar1 = (uint)*(ushort *)(param_1 + 0xf8);
    }
    if ((uVar1 & 4) == 0) {
      return 0;
    }
  }
  uVar3 = FUN_1003a12b6(param_1,0,param_3,param_4,0,0);
  return uVar3;
}

