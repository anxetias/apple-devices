// name: FUN_10037d58e
// address: 10037d58e

void FUN_10037d58e(long *param_1,undefined8 param_2,undefined4 param_3,uint param_4,ulong param_5)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10037c504(param_2);
  if ((param_5 & 1) == 0) {
    FUN_10037d7c4(&local_48,param_2,param_3,param_4);
    local_68 = CONCAT44(uStack_44,local_48);
    plVar9 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
LAB_10037d63c:
    uStack_60 = plVar9;
    if ((param_4 & 1) != 0) {
      FUN_10037b356(&local_48,local_68);
      uVar5 = uStack_40;
      uVar4 = uStack_44;
      uVar3 = local_48;
      uVar2 = CONCAT22(uStack_3a,uStack_3c);
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_3a = 0;
      local_68 = CONCAT44(uVar4,uVar3);
      uStack_60 = (long *)CONCAT44(uVar2,uVar5);
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar9 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_68 == 0) {
        uVar8 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0x6a86;
          uStack_38 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        *param_1 = 0;
        param_1[1] = 0;
        goto LAB_10037d70f;
      }
      FUN_10037b70a(local_68);
    }
    *param_1 = local_68;
    param_1[1] = (long)uStack_60;
  }
  else {
    lVar7 = FUN_10037c952(param_2,param_3,param_4,0,0);
    if (lVar7 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_10037d737;
    }
    local_68 = *(long *)(lVar7 + 0x30);
    uStack_60 = *(long **)(lVar7 + 0x38);
    if (uStack_60 != (long *)0x0) {
      LOCK();
      uStack_60[1] = uStack_60[1] + 1;
      UNLOCK();
    }
    plVar9 = uStack_60;
    if (local_68 != 0) goto LAB_10037d63c;
    *param_1 = 0;
    param_1[1] = 0;
LAB_10037d70f:
    if (uStack_60 != (long *)0x0) {
      LOCK();
      plVar9 = uStack_60 + 1;
      lVar7 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*uStack_60 + 0x10))(uStack_60);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
LAB_10037d737:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

