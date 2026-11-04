// name: FUN_1001e43b6
// address: 1001e43b6

ulong FUN_1001e43b6(ushort *param_1,int param_2,ushort *param_3,int param_4,ulong param_5)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  if (param_1 == (ushort *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006bd971(uVar4);
    }
    FUN_1001782e9(0,0);
    param_5 = param_5 & 0xffffffff;
  }
  if (param_3 == (ushort *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006bd9f9(uVar4);
    }
    FUN_1001782e9(0,0);
    param_5 = param_5 & 0xffffffff;
  }
  uVar9 = (uint)param_5;
  uVar5 = param_5 >> 3;
  if ((param_5 & 2) != 0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      if (0x20 < *param_1) goto joined_r0x0001001e4464;
      param_1 = param_1 + 1;
    }
    param_2 = 0;
joined_r0x0001001e4464:
    do {
      if (param_4 == 0) goto LAB_1001e4475;
      if (0x20 < *param_3) break;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while( true );
  }
LAB_1001e4477:
  if ((uVar5 & 4) == 0 && (param_5 & 4) == 0) {
    if (DAT_1008a2770 != -1) {
      FUN_1006bc86f();
      param_5 = param_5 & 0xffffffff;
    }
    if (param_4 != 0 && param_2 != 0) {
      lVar11 = 0;
      do {
        uVar1 = param_1[lVar11];
        uVar8 = (uint)uVar1;
        if ((0x7a < uVar1) || ((&DAT_1008a2780)[uVar1] == '\0')) goto LAB_1001e45ba;
        uVar2 = param_3[lVar11];
        if (((0x7a < uVar2) || ((&DAT_1008a2780)[uVar2] == '\0')) ||
           (((param_5 & 0x10) != 0 &&
            (((ushort)(uVar1 - 0x30) < 10 || ((ushort)(uVar2 - 0x30) < 10)))))) goto LAB_1001e45ba;
        uVar10 = (uint)uVar2;
        if ((param_5 & 1) != 0) {
          uVar8 = uVar1 - 0x20;
          if (uVar1 < 0x61) {
            uVar8 = (uint)uVar1;
          }
          uVar10 = uVar2 - 0x20;
          if (uVar2 < 0x61) {
            uVar10 = (uint)uVar2;
          }
        }
        iVar7 = (int)lVar11;
        if ((int)uVar10 < (int)uVar8) {
          if (((uint)(param_2 - iVar7) < 2) || (param_1[lVar11 + 1] < 0x80)) {
            uVar6 = 1;
LAB_1001e45ac:
            if ((uint)(param_4 - iVar7) < 2) {
              return uVar6;
            }
            if (param_3[lVar11 + 1] < 0x80) {
              return uVar6;
            }
          }
          goto LAB_1001e45ba;
        }
        if ((int)uVar8 < (int)uVar10) {
          if (((uint)(param_2 - iVar7) < 2) || (param_1[lVar11 + 1] < 0x80)) {
            uVar6 = 0xffffffff;
            goto LAB_1001e45ac;
          }
          goto LAB_1001e45ba;
        }
        lVar11 = lVar11 + 1;
      } while ((param_2 + -1 != iVar7) && (param_4 + -1 != iVar7));
      param_2 = param_2 - (int)lVar11;
      param_4 = param_4 - (int)lVar11;
    }
    uVar5 = 1;
    if (param_2 == 0) {
      uVar5 = (ulong)-(uint)(param_4 != 0);
    }
  }
  else {
LAB_1001e45ba:
    uVar5 = FUN_1001e7036(param_1,param_2,param_3,param_4,(uint)uVar5 & 4 | uVar9);
  }
  return uVar5;
LAB_1001e4475:
  param_4 = 0;
  goto LAB_1001e4477;
}

