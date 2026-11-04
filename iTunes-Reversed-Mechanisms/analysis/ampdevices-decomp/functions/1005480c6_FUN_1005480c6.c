// name: FUN_1005480c6
// address: 1005480c6

/* WARNING: Type propagation algorithm not settling */

int FUN_1005480c6(long param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  uint local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mDataHandler != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x1b;
    goto LAB_10054828d;
  }
  uVar5 = *(uint *)(param_1 + 0x1478);
  *(undefined8 *)(param_1 + 0x1488) = 0;
  if ((int)uVar5 < *(int *)(param_1 + 0x1474)) {
    lVar2 = *(long *)(param_1 + 0x808);
    if ((ulong)*(uint *)(lVar2 + 0xc) != 0) {
      uVar8 = 0;
      lVar7 = 0;
      uVar9 = 0;
      do {
        uVar1 = *(uint *)(lVar2 + 0x10 + uVar8 * 8);
        iVar4 = *(int *)(lVar2 + 0x14 + uVar8 * 8);
        lVar11 = (long)iVar4;
        uVar10 = uVar1 + uVar9;
        if (uVar5 < uVar10) {
          *(ulong *)(param_1 + 0x1488) = (ulong)(uVar5 - uVar9) * lVar11 + lVar7;
          break;
        }
        lVar7 = lVar7 + (ulong)uVar1 * lVar11;
        uVar8 = uVar8 + 1;
        uVar9 = uVar10;
      } while (*(uint *)(lVar2 + 0xc) != uVar8);
      if (iVar4 != 0) goto LAB_1005481c4;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "durationInFrames != 0";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    lVar11 = 0;
    FUN_1001782e9(0,0);
    uVar5 = *(uint *)(param_1 + 0x1478);
  }
  else {
    lVar11 = 0;
  }
LAB_1005481c4:
  *(long *)(param_1 + 0x1468) = lVar11;
  iVar4 = FUN_1005da92d(param_1 + 0x7f8,uVar5,&local_68,local_5c);
  if (local_5c[0] == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "currPacketSize > 0";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0xce;
    goto LAB_10054828d;
  }
  if (iVar4 == -0x80) goto LAB_10054828d;
  if (iVar4 != 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 == '\0') goto LAB_10054828d;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_100548606:
    local_4c = 0x400;
    local_54 = "Assertion failure";
    local_5c[1] = 0x8220202;
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
    goto LAB_10054828d;
  }
  if (*(uint *)(param_1 + 0x1458) < local_5c[0]) {
    if (*(uint *)(param_1 + 0x1458) << 3 < local_5c[0]) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "currPacketSize <= (mInputBufferSize * 8)";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
      }
      FUN_1001782e9(0,0);
      iVar4 = -0xd0;
      goto LAB_10054828d;
    }
    FUN_1001c652e(*(undefined8 *)(param_1 + 0x1450));
    *(undefined8 *)(param_1 + 0x1450) = 0;
    uVar5 = FUN_10054887e(param_1);
    *(uint *)(param_1 + 0x1458) = uVar5;
    if ((uVar5 != 0) && (local_5c[0] <= uVar5)) {
      lVar11 = FUN_1001c64e6(uVar5 + 0x10);
      *(long *)(param_1 + 0x1450) = lVar11;
      if (lVar11 == 0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "mInputBuffer != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
        FUN_1001782e9(0,0);
        iVar4 = -0x6c;
        goto LAB_10054828d;
      }
      goto LAB_10054830e;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "(mInputBufferSize != 0) && (mInputBufferSize >= currPacketSize)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
LAB_10054830e:
    local_78 = (ulong)local_5c[0];
    if ((*(int *)(param_1 + 0x48) == 0x48545450) || (*(int *)(param_1 + 0x48) == 0x53485244)) {
      uVar8 = *(ulong *)(param_1 + 0x1030);
      if (local_68 != uVar8) {
        iVar4 = -0xd0;
        if (local_68 < uVar8) goto LAB_10054828d;
        uVar5 = (int)local_68 - (int)uVar8;
        if (uVar5 == 0) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "bytesToEat != 0";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16)
            ;
          }
          FUN_1001782e9(0,0);
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x1450);
          uVar9 = *(uint *)(param_1 + 0x1458);
          do {
            uVar1 = uVar9;
            if (uVar5 < uVar9) {
              uVar1 = uVar5;
            }
            uVar8 = (ulong)uVar1;
            local_70 = uVar8;
            iVar4 = (**(code **)(**(long **)(param_1 + 0x38) + 0xa8))
                              (*(long **)(param_1 + 0x38),&local_70,uVar6);
            if ((iVar4 != 0) && (iVar4 != -0x27)) goto LAB_10054828d;
            if (local_70 == 0) goto LAB_1005484ea;
            if (local_70 != uVar8) {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 == '\0') goto LAB_1005486dc;
              local_4a = "bytesEating == readSize";
              goto LAB_1005486b7;
            }
            uVar5 = uVar5 - uVar1;
            *(long *)(param_1 + 0x1030) = *(long *)(param_1 + 0x1030) + uVar8;
          } while (uVar5 != 0);
        }
      }
    }
    else {
      iVar4 = (**(code **)(**(long **)(param_1 + 0x38) + 0x80))
                        (*(long **)(param_1 + 0x38),local_78 + local_68);
      if (iVar4 != 0) goto LAB_10054828d;
      if (local_68 != *(ulong *)(param_1 + 0x1030)) {
        iVar4 = (**(code **)(**(long **)(param_1 + 0x38) + 0xf0))();
        if (iVar4 == -0x80) goto LAB_10054828d;
        if (iVar4 != 0) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 == '\0') goto LAB_10054828d;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          goto LAB_100548606;
        }
        *(ulong *)(param_1 + 0x1030) = local_68;
      }
    }
    iVar4 = (**(code **)(**(long **)(param_1 + 0x38) + 0xa8))
                      (*(long **)(param_1 + 0x38),&local_78,*(undefined8 *)(param_1 + 0x1450));
    if ((iVar4 != 0) && (iVar4 != -0x27)) goto LAB_10054828d;
    if (local_78 != 0) {
      if (local_78 == local_5c[0]) {
        *(int *)(param_1 + 0x1478) = *(int *)(param_1 + 0x1478) + 1;
        *(long *)(param_1 + 0x1030) = *(long *)(param_1 + 0x1030) + local_78;
        *(uint *)(param_1 + 0x147c) = local_5c[0];
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_4a = "currPacketSize == currReadSize";
LAB_1005486b7:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_5c[1] = 0x8220202;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
LAB_1005486dc:
        FUN_1001782e9(0,0);
        iVar4 = -0x24;
      }
      goto LAB_10054828d;
    }
  }
LAB_1005484ea:
  iVar4 = -0x27;
LAB_10054828d:
  FUN_1001c64c1(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

