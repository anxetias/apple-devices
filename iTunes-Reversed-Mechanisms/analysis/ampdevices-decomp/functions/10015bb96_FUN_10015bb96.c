// name: FUN_10015bb96
// address: 10015bb96

int FUN_10015bb96(undefined8 param_1,undefined4 param_2,undefined4 param_3,short param_4,
                 uint *param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  cVar2 = FUN_10015b91e();
  iVar3 = 0;
  if ((param_4 != 0) && (iVar3 = 0, cVar2 != '\0')) {
    iVar3 = 0;
    lVar4 = FUN_10015baa6(param_1,param_2,param_3,(int)param_4,0,0,0);
    if (lVar4 != 0) {
      iVar3 = FUN_1001c627e(param_1);
      iVar3 = (int)lVar4 - iVar3;
      if (param_5 != (uint *)0x0) {
        uVar1 = *(uint *)(lVar4 + 8);
        *param_5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      }
    }
  }
  return iVar3;
}

