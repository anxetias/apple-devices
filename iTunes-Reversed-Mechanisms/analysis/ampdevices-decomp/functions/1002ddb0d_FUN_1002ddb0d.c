// name: FUN_1002ddb0d
// address: 1002ddb0d

ulong FUN_1002ddb0d(long param_1,long param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  bool bVar12;
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined2 local_428;
  undefined1 local_426 [510];
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "trackInstance1 != nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    FUN_1001782e9(0,0);
    uVar10 = 1;
    goto LAB_1002de076;
  }
  if (param_2 == 0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "trackInstance2 != nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    FUN_1001782e9(0,0);
    uVar10 = 0xffffffff;
    goto LAB_1002de076;
  }
  if (param_3 < 0x81) {
    if (param_3 < 0x20) {
      switch(param_3) {
      case 5:
        bVar11 = *(ushort *)(param_1 + 0x54) < *(ushort *)(param_2 + 0x54);
        bVar12 = *(ushort *)(param_1 + 0x54) == *(ushort *)(param_2 + 0x54);
        break;
      case 6:
        uVar10 = 0xffffffff;
        if (*(float *)(param_2 + 0x50) <= *(float *)(param_1 + 0x50)) {
          uVar10 = (ulong)(*(float *)(param_2 + 0x50) < *(float *)(param_1 + 0x50));
        }
        goto LAB_1002de076;
      default:
        goto switchD_1002ddb78_caseD_82;
      case 10:
        bVar11 = *(uint *)(param_1 + 0x5c) < *(uint *)(param_2 + 0x5c);
        bVar12 = *(uint *)(param_1 + 0x5c) == *(uint *)(param_2 + 0x5c);
        break;
      case 0xc:
        bVar11 = *(ulong *)(param_1 + 0x68) < *(ulong *)(param_2 + 0x68);
        bVar12 = *(ulong *)(param_1 + 0x68) == *(ulong *)(param_2 + 0x68);
        break;
      case 0xd:
        if (*(int *)(param_1 + 0x70) == 0) {
          uVar6 = *(uint *)(param_1 + 100);
        }
        else {
          uVar6 = *(int *)(param_1 + 0x70) * 1000;
        }
        if (*(int *)(param_2 + 0x70) == 0) {
          uVar7 = *(uint *)(param_2 + 100);
        }
        else {
          uVar7 = *(int *)(param_2 + 0x70) * 1000;
        }
        bVar11 = uVar6 < uVar7;
        bVar12 = uVar6 == uVar7;
        goto LAB_1002de06b;
      case 0x10:
        bVar11 = *(uint *)(param_1 + 0x60) < *(uint *)(param_2 + 0x60);
        bVar12 = *(uint *)(param_1 + 0x60) == *(uint *)(param_2 + 0x60);
        break;
      case 0x14:
        bVar11 = *(ushort *)(param_1 + 0x5a) < *(ushort *)(param_2 + 0x5a);
        bVar12 = *(ushort *)(param_1 + 0x5a) == *(ushort *)(param_2 + 0x5a);
      }
      goto LAB_1002ddf79;
    }
    if (param_3 < 0x3a) {
      if (param_3 == 0x20) {
        uVar7 = *(uint *)(*(long *)(param_1 + 0x10) + 0x88);
        uVar6 = *(uint *)(*(long *)(param_2 + 0x10) + 0x88);
        bVar11 = uVar7 < uVar6;
        bVar12 = uVar7 == uVar6;
      }
      else if (param_3 == 0x22) {
        uVar7 = *(uint *)(*(long *)(param_1 + 0x10) + 0x8c);
        uVar6 = *(uint *)(*(long *)(param_2 + 0x10) + 0x8c);
        bVar11 = uVar7 < uVar6;
        bVar12 = uVar7 == uVar6;
      }
      else {
        if (param_3 != 0x29) goto switchD_1002ddb78_caseD_82;
        if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x38);
        }
        if ((*(long *)(param_2 + 8) == 0) || (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x38);
        }
        bVar11 = uVar10 < uVar9;
        bVar12 = uVar10 == uVar9;
      }
      goto LAB_1002de06b;
    }
    if ((param_3 == 0x3a) || (param_3 == 0x77)) goto switchD_1002ddb78_caseD_90;
    if (param_3 != 0x7b) goto switchD_1002ddb78_caseD_82;
    FUN_10030c4f9(param_1,&local_228,0x20);
    FUN_10030c4f9(param_2,&local_428,0x20);
    FUN_1001b7b04(local_448,&local_228);
    FUN_1001b7b04(local_438,&local_428);
    uVar6 = FUN_1001e6c16(local_448,local_438);
    FUN_1001b7a50(local_438);
    FUN_1001b7a50(local_448);
    uVar10 = (ulong)uVar6;
    goto LAB_1002de076;
  }
  if (0xa8 < param_3) {
    if (param_3 < 0xb2) {
      if (param_3 == 0xa9) {
        uVar7 = *(uint *)(*(long *)(param_1 + 0x10) + 0x90);
        uVar6 = *(uint *)(*(long *)(param_2 + 0x10) + 0x90);
        bVar11 = uVar7 < uVar6;
        bVar12 = uVar7 == uVar6;
      }
      else {
        if (param_3 != 0xb1) goto switchD_1002ddb78_caseD_82;
        uVar3 = *(ushort *)(*(long *)(param_1 + 0x18) + 2);
        uVar4 = *(ushort *)(*(long *)(param_2 + 0x18) + 2);
        bVar11 = uVar3 < uVar4;
        bVar12 = uVar3 == uVar4;
      }
    }
    else if (param_3 == 0xb2) {
      uVar3 = *(ushort *)(*(long *)(param_1 + 0x18) + 4);
      uVar4 = *(ushort *)(*(long *)(param_2 + 0x18) + 4);
      bVar11 = uVar3 < uVar4;
      bVar12 = uVar3 == uVar4;
    }
    else if (param_3 == 0xbd) {
      uVar10 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x28);
      uVar9 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x28);
      bVar11 = uVar10 < uVar9;
      bVar12 = uVar10 == uVar9;
    }
    else {
      if (param_3 != 0xbe) goto switchD_1002ddb78_caseD_82;
      uVar10 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x20);
      uVar9 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x20);
      bVar11 = uVar10 < uVar9;
      bVar12 = uVar10 == uVar9;
    }
    goto LAB_1002de06b;
  }
  switch(param_3) {
  case 0x81:
    uVar10 = FUN_1002af980();
    uVar9 = FUN_1002af980(param_2);
    goto LAB_1002ddf74;
  default:
switchD_1002ddb78_caseD_82:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      uVar10 = FUN_1002de174(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8),param_3);
      return uVar10;
    }
    goto LAB_1002de094;
  case 0x84:
    uVar10 = FUN_1002afe3f();
    uVar9 = FUN_1002afe3f(param_2);
    goto LAB_1002ddf74;
  case 0x88:
    bVar11 = *(ushort *)(param_1 + 0x56) < *(ushort *)(param_2 + 0x56);
    bVar12 = *(ushort *)(param_1 + 0x56) == *(ushort *)(param_2 + 0x56);
    goto LAB_1002ddf79;
  case 0x89:
    uVar10 = FUN_1002afd8b();
    uVar9 = FUN_1002afd8b(param_2);
LAB_1002ddf74:
    bVar11 = uVar10 < uVar9;
    bVar12 = uVar10 == uVar9;
LAB_1002ddf79:
    uVar10 = 0xffffffff;
    if (!bVar11) {
      uVar10 = (ulong)(!bVar11 && !bVar12);
    }
    break;
  case 0x8a:
    uVar6 = FUN_1002aff0b();
    uVar7 = FUN_1002aff0b(param_2);
    bVar11 = uVar6 < uVar7;
    bVar12 = uVar6 == uVar7;
    goto LAB_1002ddf79;
  case 0x90:
  case 0x91:
  case 0x94:
  case 0x95:
switchD_1002ddb78_caseD_90:
    FUN_1002d18cd(param_1,param_3,0,&local_228);
    FUN_1002d18cd(param_2,param_3,0,&local_428);
    uVar6 = FUN_1002dd449((long)&local_228 + 2,(undefined2)local_228,local_426,local_428);
    uVar10 = (ulong)uVar6;
    break;
  case 0x97:
    uVar10 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
    uVar9 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x10);
    bVar11 = uVar10 < uVar9;
    bVar12 = uVar10 == uVar9;
    goto LAB_1002de06b;
  case 0x98:
    bVar11 = (bool)(**(byte **)(param_1 + 0x20) >> 3 & 1);
    bVar12 = (**(uint **)(param_2 + 0x20) >> 3 & 1) != 0;
    uVar10 = 0xffffffff;
    if (bVar12 <= bVar11) {
      uVar10 = (ulong)(bVar12 < bVar11);
    }
    break;
  case 0x9b:
    bVar1 = *(byte *)(*(long *)(param_1 + 0x20) + 0x1b);
    bVar2 = *(byte *)(*(long *)(param_2 + 0x20) + 0x1b);
    bVar11 = bVar1 < bVar2;
    bVar12 = bVar1 == bVar2;
LAB_1002de06b:
    uVar10 = 0xffffffff;
    if (!bVar11) {
      uVar10 = (ulong)(!bVar11 && !bVar12);
    }
  }
LAB_1002de076:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar10;
  }
LAB_1002de094:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

