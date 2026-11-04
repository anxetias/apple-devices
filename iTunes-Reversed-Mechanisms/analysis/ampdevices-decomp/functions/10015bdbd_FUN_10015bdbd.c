// name: FUN_10015bdbd
// address: 10015bdbd

int FUN_10015bdbd(long param_1,int param_2,char param_3,int param_4,long param_5,int *param_6)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  
  cVar2 = FUN_10015b91e();
  if (cVar2 == '\0') {
    sVar4 = -0x83a;
  }
  else {
    if (param_5 != 0 && param_4 != 0) {
      lVar3 = FUN_1001c627e(param_1);
      iVar6 = 0xc;
      if (param_2 != 0) {
        iVar6 = param_2;
      }
      lVar5 = (long)iVar6;
      sVar4 = -0x836;
      if (*(short *)(lVar3 + 0xe + lVar5) != 0) goto LAB_10015be46;
      if (param_1 != 0) {
        lVar3 = FUN_1001c627e(param_1);
        uVar1 = *(uint *)(lVar3 + lVar5);
        iVar6 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) -
                0x14;
        if (iVar6 <= param_4) {
          if ((param_3 != '\0') || (sVar4 = -0x32, param_4 <= iVar6)) {
            FUN_1001c631b(lVar3 + lVar5 + 0x14,param_5,(long)iVar6);
            sVar4 = 0;
            goto LAB_10015be49;
          }
          goto LAB_10015be46;
        }
      }
    }
    sVar4 = -0x32;
  }
LAB_10015be46:
  iVar6 = 0;
LAB_10015be49:
  if (param_6 != (int *)0x0) {
    *param_6 = iVar6;
  }
  return (int)sVar4;
}

