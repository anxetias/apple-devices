// name: observeValueForKeyPath:ofObject:change:context:
// address: 100452165

/* Function Stack Size: 0x30 bytes */

void MediaLibraryObserver::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  ulong uVar1;
  char *pcVar2;
  void *pvVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  char cVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  size_t sVar16;
  long lVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_42;
  long local_38;
  
  puVar5 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 != (void *)param_1) {
    uVar8 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar8,0x10);
    if (cVar7 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xf65c;
      uStack_48 = 0x7c;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004524d4;
  }
  local_78 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  local_70 = (*(code *)puVar5)(param_3);
  (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 0x30),PTR_s_lock_10088d288);
  lVar11 = param_1 + 0x38;
  auVar19 = FUN_1004545fc(lVar11,&local_78);
  plVar10 = auVar19._0_8_;
  if (plVar10 == auVar19._8_8_) {
    plVar9 = (long *)0x0;
LAB_10045249e:
    bVar18 = true;
    plVar15 = plVar9;
  }
  else {
    plVar15 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar9 = (long *)0x0;
    do {
      pcVar2 = (char *)plVar10[6];
      if (*pcVar2 == '\x01') {
        if (plVar15 < local_68) {
          *plVar15 = (long)pcVar2;
          plVar15 = plVar15 + 1;
        }
        else {
          sVar16 = (long)plVar15 - (long)plVar9;
          lVar17 = (long)sVar16 >> 3;
          uVar1 = lVar17 + 1;
          local_60 = plVar9;
          if (0x1fffffffffffffff < uVar1) {
            FUN_100453cc4();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar13 = (long)local_68 - (long)plVar9 >> 2;
          if (uVar13 <= uVar1) {
            uVar13 = uVar1;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_68 - (long)plVar9)) {
            uVar13 = 0x1fffffffffffffff;
          }
          if (uVar13 == 0) {
            plVar9 = (long *)0x0;
          }
          else {
            if (0x1fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_1001082d0();
            }
            plVar9 = operator_new(uVar13 * 8);
          }
          plVar6 = local_60;
          local_68 = plVar9 + uVar13;
          plVar15 = plVar9 + lVar17 + 1;
          plVar9[lVar17] = (long)pcVar2;
          _memcpy(plVar9,local_60,sVar16);
          if (plVar6 != (long *)0x0) {
            operator_delete(plVar6);
          }
        }
      }
      else if (pcVar2[1] == '\x01') {
        iVar12 = FUN_1001e9809(pcVar2 + 0x40);
        if ((iVar12 != -0x80) && (iVar12 != 0)) {
          uVar8 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar8,0x10);
          if (cVar7 != '\0') {
            uStack_4a = (undefined2)iVar12;
            uStack_48 = (undefined2)((uint)iVar12 >> 0x10);
LAB_1004523b2:
            uStack_4c = 0x400;
            uStack_50 = 1;
            local_58._4_4_ = 0x7a0a90;
            local_58._0_4_ = 0x8220202;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
      else if (((pcVar2[2] == '\x01') && (iVar12 = FUN_1001e8f15(pcVar2 + 0x50), iVar12 != -0x80))
              && (iVar12 != 0)) {
        uVar8 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar8,0x10);
        if (cVar7 != '\0') {
          uStack_4a = (undefined2)iVar12;
          uStack_48 = (undefined2)((uint)iVar12 >> 0x10);
          goto LAB_1004523b2;
        }
      }
      plVar6 = (long *)plVar10[1];
      plVar14 = plVar10;
      if ((long *)plVar10[1] == (long *)0x0) {
        do {
          plVar10 = (long *)plVar14[2];
          bVar18 = (long *)*plVar10 != plVar14;
          plVar14 = plVar10;
        } while (bVar18);
      }
      else {
        do {
          plVar10 = plVar6;
          plVar6 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
    } while (plVar10 != auVar19._8_8_);
    if (plVar9 == plVar15) goto LAB_10045249e;
    plVar10 = plVar9;
    do {
      FUN_100452695(lVar11,&local_78,plVar10);
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar15);
    uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(local_78);
    local_58._0_4_ = (undefined4)uVar8;
    local_58._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
    uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(local_70);
    uStack_50 = (undefined4)uVar8;
    uStack_4c = (undefined2)((ulong)uVar8 >> 0x20);
    uStack_4a = (undefined2)((ulong)uVar8 >> 0x30);
    lVar17 = *plVar9;
    uStack_48 = (undefined2)lVar17;
    uStack_46 = (undefined4)((ulong)lVar17 >> 0x10);
    uStack_42 = (undefined2)((ulong)lVar17 >> 0x30);
    FUN_100454770(lVar11);
    FUN_100453b6a(&local_58);
    bVar18 = false;
  }
  (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 0x30),PTR_s_unlock_10088d290);
  local_60 = plVar9;
  if (!bVar18) {
    iVar12 = 0;
    do {
      plVar10 = *(long **)(*plVar9 + 0x30);
      if (plVar10 != (long *)0x0) {
        local_58 = param_3;
        (**(code **)(*plVar10 + 0x30))(plVar10,&local_58);
      }
      bVar18 = iVar12 != 0;
      iVar12 = iVar12 + -1;
      if (bVar18) {
        uVar8 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar8,0x10);
        if (cVar7 != '\0') {
          local_58._0_4_ = 0x8220202;
          local_58._4_4_ = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0xf66c;
          uStack_48 = 0x7c;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        pvVar3 = (void *)*plVar9;
        if (pvVar3 != (void *)0x0) {
          plVar10 = *(long **)((long)pvVar3 + 0x30);
          if (plVar10 == (long *)((long)pvVar3 + 0x10)) {
            lVar11 = 0x20;
LAB_10045256f:
            (**(code **)(*plVar10 + lVar11))();
          }
          else {
            lVar11 = 0x28;
            if (plVar10 != (long *)0x0) goto LAB_10045256f;
          }
          operator_delete(pvVar3);
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar15);
  }
  if (local_60 != (long *)0x0) {
    operator_delete(local_60);
  }
  FUN_100453b6a(&local_78);
LAB_1004524d4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

