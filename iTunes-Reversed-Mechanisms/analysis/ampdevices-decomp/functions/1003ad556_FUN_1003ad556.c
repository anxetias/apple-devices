// name: FUN_1003ad556
// address: 1003ad556

int FUN_1003ad556(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_510 [16];
  undefined8 local_500;
  long local_4f8;
  long *plStack_4f0;
  undefined8 local_4e8;
  undefined1 local_4e0 [1160];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4f8 = 0;
  plStack_4f0 = (long *)0x0;
  local_4e8 = 0;
  local_500 = param_4;
  FUN_1001c62d9(local_4e0,0x488);
  iVar5 = FUN_1001d58b4(&local_4e8,param_1,3,0);
  if (iVar5 != -0x80) {
    if (iVar5 == 0) {
      FUN_10053207e(&local_58,local_4e0,local_4e8,0);
      local_4f8 = CONCAT44(uStack_54,local_58);
      plVar3 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
      plStack_4f0 = plVar3;
      if (local_4f8 == 0) {
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          local_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x7290;
          uStack_48 = 0x7b;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        iVar5 = -0x32;
        FUN_1001782e9(0,0);
      }
      else {
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar3[1] = plVar3[1] + 1;
          UNLOCK();
        }
        iVar5 = FUN_1003ad819(local_510,param_2,param_3,local_500,param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,param_12,param_13);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        uStack_4c = 0x400;
        uStack_4a = (undefined2)iVar5;
        uStack_48 = (undefined2)((uint)iVar5 >> 0x10);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar3 = plStack_4f0 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

