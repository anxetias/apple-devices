// name: FUN_1001deef6
// address: 1001deef6

undefined1  [16] FUN_1001deef6(long *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  
  lVar7 = *param_1;
  if (lVar7 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006b9b7f(uVar5);
    }
    FUN_1001782e9(0,0);
    lVar7 = *param_1;
  }
  uVar1 = *(uint *)((long)param_1 + 0xc);
  iVar2 = *param_2;
  uVar4 = ~(iVar2 << 0xf) + iVar2;
  uVar4 = (uVar4 >> 10 ^ uVar4) * 9;
  uVar4 = uVar4 >> 6 ^ uVar4;
  uVar4 = ~(uVar4 << 0xb) + uVar4;
  uVar11 = uVar4 >> 0x10 ^ uVar4;
  uVar8 = uVar11 & uVar1;
  piVar6 = (int *)(lVar7 + (long)(int)uVar8 * 8);
  iVar10 = *piVar6;
  uVar9 = 0;
  if (iVar10 == 0) {
    piVar12 = (int *)0x0;
  }
  else {
    uVar4 = (uVar4 >> 0x17) + ~uVar11;
    uVar4 = uVar4 * 0x1000 ^ uVar4;
    uVar4 = uVar4 >> 7 ^ uVar4;
    uVar4 = uVar4 * 4 ^ uVar4;
    piVar12 = (int *)0x0;
    do {
      if (iVar10 == iVar2) {
        uVar5 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        goto LAB_1001deff9;
      }
      if (iVar10 == -1) {
        piVar12 = piVar6;
      }
      if (uVar9 == 0) {
        uVar9 = uVar4 >> 0x14 ^ uVar4 | 1;
      }
      uVar8 = uVar8 + uVar9 & uVar1;
      piVar6 = (int *)(lVar7 + (long)(int)uVar8 * 8);
      iVar10 = *piVar6;
    } while (iVar10 != 0);
  }
  if (piVar12 != (int *)0x0) {
    piVar6 = piVar12;
  }
  uVar5 = 0;
LAB_1001deff9:
  auVar13._8_8_ = uVar5;
  auVar13._0_8_ = piVar6;
  return auVar13;
}

