// name: FUN_100307d3d
// address: 100307d3d

undefined8 FUN_100307d3d(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  char cVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100307e2f:
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0xe894;
      uStack_38 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar9 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar9,0x10);
      if (cVar8 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7ab58c;
        local_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0xec03;
        uStack_38 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar8 = FUN_1001782e9(0,1);
      if (cVar8 == '\0') goto LAB_100307e2f;
    }
    uVar7 = uStack_3a;
    uVar6 = uStack_3c;
    uVar5 = local_40;
    if (param_2 != 0) {
      lVar1 = *(long *)(param_1 + 0x2730);
      uStack_3c = (undefined2)((ulong)param_2 >> 0x20);
      uVar3 = uStack_3c;
      uStack_3a = (undefined2)((ulong)param_2 >> 0x30);
      uVar4 = uStack_3a;
      local_40 = (undefined4)param_2;
      uVar2 = local_40;
      if (lVar1 == 0) {
        local_40 = uVar5;
        uStack_3c = uVar6;
        uStack_3a = uVar7;
        plVar11 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
        if (plVar11 == (long *)0x0) {
          *(undefined8 *)(param_1 + 0x2730) = 0;
          uVar9 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar9,0x10);
          if (cVar8 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            local_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xe753;
            uStack_38 = 0x1007b;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          uVar9 = 0xffffff94;
          uVar5 = local_40;
          uVar6 = uStack_3c;
          uVar7 = uStack_3a;
          goto LAB_100307eca;
        }
        plVar11[1] = 0;
        plVar11[2] = 0;
        *plVar11 = (long)(plVar11 + 1);
        *(long **)(param_1 + 0x2730) = plVar11;
        uVar13 = *(ulong *)(param_2 + 0x10);
      }
      else {
        lVar12 = *(long *)(lVar1 + 8);
        uVar13 = *(ulong *)(param_2 + 0x10);
        if (lVar12 != 0) {
          lVar10 = lVar1 + 8;
          do {
            bVar14 = *(ulong *)(lVar12 + 0x20) < uVar13;
            if (!bVar14) {
              lVar10 = lVar12;
            }
            lVar12 = *(long *)(lVar12 + (ulong)bVar14 * 8);
          } while (lVar12 != 0);
          if (((lVar10 != lVar1 + 8) && (*(ulong *)(lVar10 + 0x20) <= uVar13)) &&
             (*(long *)(lVar10 + 0x28) != 0)) {
            uVar9 = 0;
            if (*(char *)(*(long *)(lVar10 + 0x28) + 0x50) == '\0') {
              local_48 = (undefined4)uVar13;
              uStack_44 = (undefined4)(uVar13 >> 0x20);
              FUN_100323d54();
              uVar5 = local_40;
              uVar6 = uStack_3c;
              uVar7 = uStack_3a;
            }
            goto LAB_100307eca;
          }
        }
      }
      local_48 = (undefined4)uVar13;
      uStack_44 = (undefined4)(uVar13 >> 0x20);
      local_40 = uVar2;
      uStack_3c = uVar3;
      uStack_3a = uVar4;
      FUN_100323d54();
      uVar9 = 0;
      uVar5 = local_40;
      uVar6 = uStack_3c;
      uVar7 = uStack_3a;
      goto LAB_100307eca;
    }
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0xe742;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar9 = 0xffffffce;
  uVar5 = local_40;
  uVar6 = uStack_3c;
  uVar7 = uStack_3a;
LAB_100307eca:
  uStack_3a = uVar7;
  uStack_3c = uVar6;
  local_40 = uVar5;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

