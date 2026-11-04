// name: FUN_1001e4f5a
// address: 1001e4f5a

ulong FUN_1001e4f5a(ushort *param_1,int param_2,ushort *param_3,int param_4,ulong param_5)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ushort *puVar12;
  int local_70 [4];
  ushort *local_60;
  int local_54;
  ushort *local_50;
  ulong local_48;
  ushort *local_40;
  int local_38;
  ushort local_32;
  
  if (param_1 == (ushort *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006be654(uVar5);
    }
LAB_1001e50e9:
    FUN_1001782e9(0,0);
    return 0;
  }
  if (param_3 == (ushort *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006be5de(uVar5);
    }
    goto LAB_1001e50e9;
  }
  if (param_2 == 0 || param_4 == 0) {
    return 0;
  }
  local_54 = param_2;
  if ((param_5 & 4) == 0) {
    cVar1 = FUN_1001e40ed(param_3,param_4,param_5 & 0xffffffff);
    uVar7 = (uint)param_5;
    param_5 = param_5 & 0xffffffff;
    if (cVar1 == '\0') {
      param_5 = (ulong)(uVar7 | 4);
    }
  }
  iVar8 = param_4;
  if ((param_5 & 4) == 0) {
    local_32 = *param_3;
    puVar12 = param_1;
    iVar11 = local_54;
    local_50 = param_3;
    local_48 = param_5;
    local_40 = param_1;
    local_38 = param_4;
    if ((param_5 & 1) != 0) {
      local_32 = FUN_1001e5279(local_32);
      param_5 = local_48;
      puVar12 = local_40;
      iVar11 = local_54;
    }
    do {
      uVar3 = local_32;
      uVar2 = *puVar12;
      if (0x7f < uVar2) {
LAB_1001e5107:
        param_5 = (ulong)((uint)param_5 | 4);
        param_1 = local_40;
        param_3 = local_50;
        iVar8 = local_38;
        break;
      }
      if ((param_5 & 1) != 0) {
        uVar2 = FUN_1001e5279(uVar2);
        param_5 = local_48;
      }
      local_60 = puVar12 + 1;
      if (uVar2 == uVar3) {
        lVar9 = 1;
        do {
          iVar8 = (int)lVar9;
          if ((iVar11 == iVar8) || (param_4 == iVar8)) {
            if (param_4 == iVar8) {
              return (ulong)((long)local_60 - (long)local_40) >> 1 & 0xffffffff;
            }
            break;
          }
          uVar2 = puVar12[lVar9];
          if (0x7f < uVar2) goto LAB_1001e5107;
          if ((param_5 & 1) == 0) {
            uVar3 = local_50[lVar9];
          }
          else {
            uVar2 = FUN_1001e5279(uVar2);
            uVar3 = FUN_1001e5279(local_50[lVar9]);
            param_5 = local_48;
          }
          lVar9 = lVar9 + 1;
        } while (uVar2 == uVar3);
      }
      iVar11 = iVar11 + -1;
      param_1 = local_40;
      puVar12 = local_60;
      param_3 = local_50;
      iVar8 = local_38;
    } while (iVar11 != 0);
  }
  if ((param_5 & 4) == 0) {
    return 0;
  }
  uVar5 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
  local_48 = param_5;
  lVar9 = FUN_1001735df(DAT_1008c4d98,param_1,local_54,uVar5);
  if (lVar9 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006be4f2(uVar6);
    }
    uVar10 = 0;
    FUN_1001782e9(0,0);
    lVar4 = FUN_1001735df(DAT_1008c4d98,param_3,iVar8,uVar5);
    if (lVar4 != 0) goto LAB_1001e522d;
  }
  else {
    lVar4 = FUN_1001735df(DAT_1008c4d98,param_3,iVar8,uVar5);
    if (lVar4 != 0) {
      uVar7 = (uint)local_48;
      uVar5 = _CFStringGetLength(lVar9);
      cVar1 = FUN_100173c2a(lVar9,lVar4,0,uVar5,(uVar7 & 8) << 4 | uVar7 & 1 | 0x110,local_70);
      uVar10 = (ulong)(local_70[0] + 1);
      if (cVar1 == '\0') {
        uVar10 = 0;
      }
      goto LAB_1001e522d;
    }
  }
  uVar5 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar5,0x10);
  if (cVar1 != '\0') {
    FUN_1006be568(uVar5);
  }
  lVar4 = 0;
  FUN_1001782e9(0,0);
  uVar10 = 0;
LAB_1001e522d:
  FUN_10017060f(lVar9);
  FUN_10017060f(lVar4);
  return uVar10;
}

