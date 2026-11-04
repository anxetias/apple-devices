// name: FUN_1005f116e
// address: 1005f116e

void FUN_1005f116e(int param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  uint uStack_78;
  undefined2 uStack_74;
  long *local_68;
  long local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005e9a2c();
  piVar6 = DAT_1008c7bc0;
  if (DAT_1008c7bc0 != (int *)0x0 && param_1 != 0) {
    do {
      if (piVar6[0x1a21] == param_1) {
        FUN_1005eda55(piVar6);
        if ((((char)piVar6[1] == '\x01') && (*(long *)(piVar6 + 0x1a2c) != 0)) &&
           (iVar3 = _AMRestorableDeviceGetState(), iVar3 == 2)) {
          iVar3 = *piVar6;
          cVar2 = FUN_100247cdd(iVar3);
          if (cVar2 == '\0') {
            *(undefined1 *)((long)piVar6 + 6) = 1;
            goto LAB_1005f1235;
          }
        }
        else {
LAB_1005f1235:
          iVar3 = *piVar6;
        }
        if (iVar3 == 0x6950686e) {
          uStack_78 = piVar6[0x1a21];
          local_88._0_4_ = 0x852528;
          local_88._4_4_ = 1;
          uStack_80 = 0x5f0636;
          uStack_7c = 1;
          uStack_7a = 0;
          local_40 = 0;
          uStack_38 = 0;
          local_30 = (long *)0x0;
          uStack_50 = 0;
          uStack_49 = 0;
          local_58 = (ulong)uStack_78 << 0x20;
          local_68 = &local_88;
          FUN_10017869a(&local_88);
          if (local_30 != (long *)0x0) {
            LOCK();
            plVar1 = local_30 + 1;
            lVar5 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar5 == 0) {
              (**(code **)(*local_30 + 0x10))(local_30);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_68 == &local_88) {
            lVar5 = 0x20;
          }
          else {
            lVar5 = 0x28;
            if (local_68 == (long *)0x0) goto LAB_1005f11e1;
          }
          (**(code **)(*local_68 + lVar5))();
        }
        else {
          if (piVar6[0x1a26] != 1) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_88._0_4_ = 0x8220202;
              local_88._4_4_ = 0x7a0a90;
              uStack_80 = 1;
              uStack_7c = 0x822;
              uStack_7a = 0x2830;
              uStack_78 = 0x1007f;
              uStack_74 = 0;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
            }
            FUN_1001782e9(0,0);
          }
          piVar6[0x1a2e] = 0;
          piVar6[0x1a2f] = 0;
          FUN_1005ee196(&DAT_1008c7b60,piVar6);
        }
        goto LAB_1005f11e1;
      }
      piVar6 = *(int **)(piVar6 + 0x1a1e);
    } while (piVar6 != (int *)0x0);
  }
  uVar4 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar4,0x10);
  if (cVar2 != '\0') {
    local_88._0_4_ = 0x8220202;
    local_88._4_4_ = 0x7a0a90;
    uStack_80 = 1;
    uStack_7c = 0x822;
    uStack_7a = 0xf686;
    uStack_78 = 0x1007a;
    uStack_74 = 0;
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1005f11e1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

