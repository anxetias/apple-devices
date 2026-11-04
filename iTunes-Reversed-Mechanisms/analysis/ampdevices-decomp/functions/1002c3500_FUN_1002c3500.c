// name: FUN_1002c3500
// address: 1002c3500

undefined8 FUN_1002c3500(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  code *pcVar6;
  long *plVar7;
  char cVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 local_68;
  long *plStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar9 = FUN_1001cc310();
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xa3f1;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    uVar9 = 0xffffffce;
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined1 *)(DAT_1008c76a0 + 0x1a38) = 0;
    FUN_10023e278(&local_58);
    lVar3 = CONCAT44(uStack_54,local_58);
    plVar7 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
    if (lVar3 == 0) {
      uVar9 = FUN_1001cc310();
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      cVar8 = _os_log_type_enabled(uVar9,0x10);
      if (cVar8 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x2af0;
        uStack_48 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      uVar9 = 0xffffff94;
      FUN_1001782e9(0,0);
    }
    else {
      FUN_100238ca8(&local_58,lVar3 + 0x30);
      FUN_1002c3cd0(&local_68,lVar3 + 8);
      plVar1 = plStack_60;
      uVar9 = local_68;
      local_68 = 0;
      plStack_60 = (long *)0x0;
      puVar4 = *(undefined8 **)(lVar3 + 0x20);
      if (puVar4 < *(undefined8 **)(lVar3 + 0x28)) {
        *puVar4 = uVar9;
        puVar4[1] = plVar1;
        puVar14 = puVar4 + 2;
      }
      else {
        pvVar5 = *(void **)(lVar3 + 0x18);
        lVar12 = (long)puVar4 - (long)pvVar5 >> 4;
        uVar2 = lVar12 + 1;
        if (uVar2 >> 0x3c != 0) {
          FUN_1002c3d0a();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        uVar10 = (long)*(undefined8 **)(lVar3 + 0x28) - (long)pvVar5;
        uVar15 = (long)uVar10 >> 3;
        if (uVar15 <= uVar2) {
          uVar15 = uVar2;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar15 = 0xfffffffffffffff;
        }
        if (uVar15 == 0) {
          pvVar11 = (void *)0x0;
        }
        else {
          if (0xfffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_1001082d0();
          }
          pvVar11 = operator_new(uVar15 << 4);
        }
        puVar13 = (undefined8 *)(lVar12 * 0x10 + (long)pvVar11);
        puVar14 = puVar13 + 2;
        *puVar13 = uVar9;
        puVar13[1] = plVar1;
        _memcpy(pvVar11,pvVar5,(long)puVar4 - (long)pvVar5);
        *(void **)(lVar3 + 0x18) = pvVar11;
        *(undefined8 **)(lVar3 + 0x20) = puVar14;
        *(void **)(lVar3 + 0x28) = (void *)(uVar15 * 0x10 + (long)pvVar11);
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
      }
      *(undefined8 **)(lVar3 + 0x20) = puVar14;
      if (plStack_60 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        lVar12 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_60 + 0x10))(plStack_60);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_10015a142(&local_58);
      uVar9 = 0;
    }
    *param_1 = lVar3;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

