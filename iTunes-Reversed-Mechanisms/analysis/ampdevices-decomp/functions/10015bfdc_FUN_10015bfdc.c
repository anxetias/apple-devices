// name: FUN_10015bfdc
// address: 10015bfdc

int FUN_10015bfdc(long param_1,int param_2,int *param_3,undefined8 *param_4)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  cVar2 = FUN_10015b91e(param_1,param_2);
  if (cVar2 == '\0') {
    sVar5 = -0x83a;
  }
  else {
    lVar3 = FUN_1001c627e(param_1);
    iVar6 = 0xc;
    if (param_2 != 0) {
      iVar6 = param_2;
    }
    sVar5 = -0x836;
    if (((*(short *)(lVar3 + 0xe + (long)iVar6) == 0) && (sVar5 = -0x32, param_1 != 0)) &&
       (param_3 != (int *)0x0 || param_4 != (undefined8 *)0x0)) {
      lVar3 = FUN_1001c627e(param_1);
      puVar4 = (uint *)(lVar3 + iVar6);
      if (param_3 != (int *)0x0) {
        uVar1 = *puVar4;
        *param_3 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
                   - 0x14;
      }
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = puVar4 + 5;
      }
      sVar5 = 0;
    }
  }
  return (int)sVar5;
}

