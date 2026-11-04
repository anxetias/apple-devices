// name: FUN_10015c522
// address: 10015c522

int FUN_10015c522(undefined8 param_1,uint param_2,int param_3,short param_4)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  
  sVar8 = 0;
  if ((param_2 != 0) && (sVar8 = 0, param_2 != 0xc)) {
    iVar1 = FUN_1001c5d9c();
    lVar2 = FUN_1001c627e(param_1);
    uVar5 = *(ushort *)(lVar2 + 0x1a);
    iVar6 = 0;
    if (uVar5 != 0) {
      puVar3 = (uint *)(lVar2 + 0xc);
      uVar4 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
      uVar7 = 0xc;
      uVar10 = 0;
      do {
        sVar8 = -0x32;
        if (((int)param_2 < (int)uVar7) || ((long)iVar1 - 0x14U < (ulong)(long)(int)uVar7))
        goto LAB_10015c628;
        if (uVar7 == param_2) break;
        uVar9 = *puVar3;
        uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        if (param_2 < uVar9 + uVar7) {
          uVar4 = (uint)(ushort)(*(ushort *)((long)puVar3 + 0xe) << 8 |
                                *(ushort *)((long)puVar3 + 0xe) >> 8);
          uVar9 = uVar9 + param_3;
          *puVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                    uVar9 * 0x1000000;
          puVar3 = puVar3 + 5;
          iVar6 = 1;
          uVar10 = uVar7;
          uVar7 = uVar7 + 0x14;
        }
        else {
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            if ((int)uVar4 < iVar6) goto LAB_10015c628;
            iVar6 = iVar6 + 1;
          }
          puVar3 = (uint *)((long)puVar3 + (long)(int)uVar9);
          uVar7 = uVar9 + uVar7;
        }
      } while (uVar4 != 0);
      if (uVar10 != 0) {
        lVar2 = FUN_1001c627e(param_1);
        uVar5 = *(ushort *)(lVar2 + 0xe + (long)(int)uVar10);
        uVar5 = param_4 + (uVar5 << 8 | uVar5 >> 8);
        *(ushort *)(lVar2 + 0xe + (long)(int)uVar10) = uVar5 * 0x100 | uVar5 >> 8;
      }
    }
    sVar8 = 0;
  }
LAB_10015c628:
  return (int)sVar8;
}

