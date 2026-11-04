// name: FUN_100458656
// address: 100458656

void FUN_100458656(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xfb6a;
      uStack_48 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return;
    }
  }
  else {
    local_60 = param_1 + 0x20;
    FUN_1001e9de0();
    for (lVar6 = *(long *)(param_1 + 8); lVar6 != *(long *)(param_1 + 0x10); lVar6 = lVar6 + 0x30) {
      if (*(long *)(lVar6 + 0x10) != 0) {
        plVar4 = (long *)std::__shared_weak_count::lock();
        local_50 = SUB84(plVar4,0);
        uStack_4c = (undefined2)((ulong)plVar4 >> 0x20);
        uStack_4a = (undefined2)((ulong)plVar4 >> 0x30);
        if (plVar4 != (long *)0x0) {
          lVar1 = *(long *)(lVar6 + 8);
          local_58 = (undefined4)lVar1;
          uStack_54 = (undefined4)((ulong)lVar1 >> 0x20);
          if (lVar1 != 0) {
            plVar2 = *(long **)(param_2 + 0x20);
            local_70 = lVar1;
            local_68 = param_3;
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_10016bf14();
            }
            (**(code **)(*plVar2 + 0x30))(plVar2,&local_70,&local_68);
          }
          LOCK();
          plVar2 = plVar4 + 1;
          lVar1 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      FUN_1001e9eb9(local_60);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

