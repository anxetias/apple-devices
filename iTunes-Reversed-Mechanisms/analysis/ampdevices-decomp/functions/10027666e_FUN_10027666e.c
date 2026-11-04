// name: FUN_10027666e
// address: 10027666e

int FUN_10027666e(long param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  long *local_98;
  long local_90;
  int local_84;
  ulong local_80;
  long local_78;
  long local_70;
  long local_68;
  uint local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_4a = "TrackInfoIsValid(trackInfo)";
LAB_100276905:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
LAB_10027685e:
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_10027686d;
  }
  iVar4 = 0;
  if ((*(byte *)(lVar1 + 0x1bb5) & 4) != 0) goto LAB_10027686d;
  lVar8 = *(long *)(param_1 + 0x28);
  local_70 = lVar8;
  if (lVar8 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_4a = "albumInfo != nullptr";
      goto LAB_100276905;
    }
    goto LAB_10027685e;
  }
  lVar6 = FUN_1003a0291(lVar8);
  plVar10 = *(long **)(param_1 + 0x40);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_1005e35f0(plVar10);
  }
  if ((*(int *)(lVar8 + 0x10) == 2) && (*(char *)(lVar8 + 0x108) != '\0')) {
    local_84 = *(int *)(lVar8 + 0xc0);
    local_78 = lVar1 + 0x1c60;
    local_68 = lVar6;
    iVar4 = FUN_1001dcecf();
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    lVar8 = FUN_100276e24(*(undefined8 *)(param_1 + 0x10));
    uVar7 = 0;
    local_70 = lVar8;
    if (lVar8 != 0) {
      iVar4 = FUN_1003a371d(param_1,lVar8);
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        local_80 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(local_80,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,local_80,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      uVar7 = FUN_1003a040b(lVar8);
      local_70 = 0;
    }
    lVar8 = local_78;
    iVar4 = local_84;
    local_80 = CONCAT44(local_80._4_4_,(int)CONCAT71((int7)((ulong)uVar7 >> 8),1));
    lVar6 = local_68;
    if (local_84 != 0) {
      local_98 = plVar10;
      FUN_1001dccc7(local_78);
      iVar4 = FUN_1001de13c(lVar8,iVar4,&local_c0,&local_a4);
      uVar9 = local_a4 >> 1;
      if (iVar4 == -0x80) {
LAB_100276952:
        local_a4 = uVar9;
        FUN_1001dcd18(local_78);
        plVar10 = local_98;
        lVar6 = local_68;
      }
      else {
        if (iVar4 != 0) {
          local_a4 = uVar9;
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          uVar9 = local_a4;
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            uVar9 = local_a4;
          }
          goto LAB_100276952;
        }
        if (local_a4 < 2) {
          local_a4 = uVar9;
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "albumNameLen != 0";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar9 = local_a4;
          goto LAB_100276952;
        }
        local_a4 = uVar9;
        lVar8 = FUN_100277149(lVar1);
        plVar10 = local_98;
        lVar6 = local_68;
        if (lVar8 != 0) {
          local_90 = 0;
          do {
            lVar11 = local_90;
            if ((((*(int *)(lVar8 + 0x10) == 2) && (*(long *)(lVar8 + 0xb8) != 0)) &&
                (*(int *)(lVar8 + 0xc0) != 0)) && (*(char *)(lVar8 + 0x108) != '\0')) {
              FUN_1003a0f7a(lVar8,0,&local_b8,&local_a0);
              uVar7 = local_c0;
              local_5c = local_a4;
              local_b0 = local_b8;
              local_9c = local_a0;
              uVar5 = FUN_1003a3194();
              cVar2 = FUN_1001e339d(uVar7,local_5c,local_b0,local_9c,uVar5);
              lVar6 = local_68;
              lVar11 = local_90;
              if (((cVar2 != '\0') && (lVar11 = lVar8, local_90 != 0)) &&
                 (lVar11 = local_90, *(int *)(lVar8 + 0x104) == *(int *)(local_90 + 0x104))) {
                FUN_1001dcd18(local_78);
                goto LAB_100276d69;
              }
            }
            local_90 = lVar11;
            lVar8 = FUN_10027728e(lVar8);
          } while (lVar8 != 0);
        }
      }
      lVar11 = local_78;
      FUN_1001dcd18(local_78);
      goto LAB_100276972;
    }
  }
  else {
    local_80 = local_80 & 0xffffffff00000000;
  }
  goto LAB_10027697d;
  while( true ) {
    local_5c = *(uint *)(lVar8 + 0x14);
    iVar4 = FUN_1003a371d(*(long *)(lVar8 + 0x60),local_90);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    plVar10 = local_98;
    lVar11 = local_78;
    lVar6 = local_68;
    if (local_5c == 1) break;
LAB_100276d69:
    if ((*(byte *)(lVar8 + 0xf8) & 2) == 0) {
      FUN_10055ea6a(lVar8);
    }
    plVar10 = local_98;
    lVar11 = local_78;
    lVar6 = local_68;
    if (*(long *)(lVar8 + 0x60) == 0) break;
  }
LAB_100276972:
  FUN_1001dcff5(lVar11,local_84);
LAB_10027697d:
  iVar4 = FUN_100274af4(lVar1,param_1,0,&local_70,0);
  if (iVar4 != -0x80) {
    if (iVar4 != 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar4 != 0) goto LAB_100276b90;
    }
    cVar2 = (char)local_80;
    if (lVar6 == local_70) {
LAB_100276a11:
      iVar4 = 0;
      if (cVar2 != '\0') {
        iVar4 = FUN_1003a371d(param_1,lVar6);
      }
    }
    else {
      if (cVar2 == '\0') {
        if (*(uint *)(lVar6 + 0x14) < 2) goto LAB_1002769f7;
      }
      else if (*(uint *)(lVar6 + 0x14) == 0) {
LAB_1002769f7:
        if ((*(int *)(local_70 + 0x14) == 0) && (cVar3 = FUN_1003a362a(lVar6), cVar3 != '\0'))
        goto LAB_100276a11;
      }
      iVar4 = FUN_1003a371d(param_1,local_70);
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    FUN_1003a040b(local_70);
  }
LAB_100276b90:
  FUN_1003a040b(lVar6);
  if (plVar10 != (long *)0x0) {
    FUN_1005e37a3(plVar10);
  }
LAB_10027686d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

