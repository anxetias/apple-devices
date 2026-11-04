// name: FUN_1001c09e4
// address: 1001c09e4

undefined1  [16] FUN_1001c09e4(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  lVar7 = *param_1;
  if (lVar7 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006a49db(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
    lVar7 = *param_1;
  }
  uVar1 = *(uint *)((long)param_1 + 0xc);
  lVar2 = *param_2;
  uVar5 = ~(lVar2 << 0x20) + lVar2;
  uVar5 = uVar5 >> 0x16 ^ uVar5;
  uVar5 = ~(uVar5 << 0xd) + uVar5;
  uVar5 = (uVar5 >> 8 ^ uVar5) * 9;
  uVar5 = uVar5 >> 0xf ^ uVar5;
  uVar5 = ~(uVar5 << 0x1b) + uVar5;
  uVar11 = (uint)(uVar5 >> 0x1f) ^ (uint)uVar5;
  uVar8 = uVar1 & uVar11;
  lVar6 = lVar7 + (long)(int)uVar8 * 0x10;
  lVar10 = *(long *)(lVar7 + (long)(int)uVar8 * 0x10);
  uVar9 = 0;
  if (lVar10 == 0) {
    lVar12 = 0;
  }
  else {
    uVar11 = (uVar11 >> 0x17) + ~uVar11;
    uVar11 = uVar11 * 0x1000 ^ uVar11;
    uVar11 = uVar11 >> 7 ^ uVar11;
    uVar11 = uVar11 * 4 ^ uVar11;
    lVar12 = 0;
    do {
      if (lVar10 == lVar2) {
        uVar4 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        goto LAB_1001c0b28;
      }
      if (lVar10 == -1) {
        lVar12 = lVar6;
      }
      if (uVar9 == 0) {
        uVar9 = uVar11 >> 0x14 ^ uVar11 | 1;
      }
      uVar8 = uVar8 + uVar9 & uVar1;
      lVar6 = lVar7 + (long)(int)uVar8 * 0x10;
      lVar10 = *(long *)(lVar7 + (long)(int)uVar8 * 0x10);
    } while (lVar10 != 0);
  }
  if (lVar12 != 0) {
    lVar6 = lVar12;
  }
  uVar4 = 0;
LAB_1001c0b28:
  auVar13._8_8_ = uVar4;
  auVar13._0_8_ = lVar6;
  return auVar13;
}

