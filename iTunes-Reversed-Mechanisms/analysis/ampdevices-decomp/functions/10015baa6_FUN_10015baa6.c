// name: FUN_10015baa6
// address: 10015baa6

uint * FUN_10015baa6(long param_1,int param_2,uint param_3,short param_4,uint param_5,int *param_6,
                    short *param_7)

{
  uint uVar1;
  short sVar2;
  uint *puVar3;
  long lVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  
  if (param_1 != 0) {
    puVar3 = (uint *)FUN_10015b989();
    if (puVar3 != (uint *)0x0) {
      lVar4 = FUN_1001c627e(param_1);
      iVar5 = 0xc;
      if (param_2 != 0) {
        iVar5 = param_2;
      }
      uVar7 = *(ushort *)(lVar4 + 0xe + (long)iVar5);
      uVar7 = uVar7 << 8 | uVar7 >> 8;
      if (0 < (short)uVar7) {
        sVar2 = 1;
        sVar6 = 0;
        do {
          uVar1 = puVar3[1];
          if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
              param_3) {
            if (param_4 == 0) {
              if (sVar6 == 0) {
                sVar6 = sVar2;
              }
              uVar1 = puVar3[2];
              if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
                  == param_5) {
                if (param_6 != (int *)0x0) {
                  *param_6 = (int)sVar2;
                }
                if (param_7 == (short *)0x0) {
                  return puVar3;
                }
                *param_7 = (sVar2 - sVar6) + 1;
                return puVar3;
              }
              param_4 = 0;
            }
            else {
              param_4 = param_4 + -1;
              if (param_4 == 0) {
                if (param_6 == (int *)0x0) {
                  return puVar3;
                }
                *param_6 = (int)sVar2;
                return puVar3;
              }
            }
          }
          uVar1 = *puVar3;
          puVar3 = (uint *)((long)puVar3 +
                           (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                                  uVar1 << 0x18));
          sVar2 = sVar2 + 1;
        } while (sVar2 <= (short)uVar7);
      }
    }
    if (param_6 != (int *)0x0) {
      *param_6 = 0;
    }
  }
  return (uint *)0x0;
}

