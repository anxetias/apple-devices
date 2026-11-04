// name: FUN_100458426
// address: 100458426

undefined8 * FUN_100458426(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  uStack_60 = (long *)0x0;
  if (*(long *)(param_3 + 0x20) == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xfb54;
      uStack_48 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
    if (uStack_60 != (long *)0x0) {
      LOCK();
      plVar4 = uStack_60 + 1;
      lVar6 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_60 + 0x10))(uStack_60);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    local_78 = param_2 + 0x20;
    FUN_1001e9de0();
    local_70 = param_1;
    for (lVar6 = *(long *)(param_2 + 8); lVar6 != *(long *)(param_2 + 0x10); lVar6 = lVar6 + 0x30) {
      if (*(long *)(lVar6 + 0x10) != 0) {
        plVar4 = (long *)std::__shared_weak_count::lock();
        local_50 = SUB84(plVar4,0);
        uStack_4c = (undefined2)((ulong)plVar4 >> 0x20);
        uStack_4a = (undefined2)((ulong)plVar4 >> 0x30);
        if (plVar4 != (long *)0x0) {
          lVar2 = *(long *)(lVar6 + 8);
          local_58 = (undefined4)lVar2;
          uStack_54 = (undefined4)((ulong)lVar2 >> 0x20);
          if (lVar2 != 0) {
            plVar4 = *(long **)(param_3 + 0x20);
            local_88 = lVar2;
            local_80 = param_4;
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_10016bf14();
            }
            cVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_88,&local_80);
            if (cVar3 != '\0') {
              FUN_100203686(&local_68,&local_58);
              plVar4 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
              if (plVar4 != (long *)0x0) {
                LOCK();
                plVar1 = plVar4 + 1;
                lVar6 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar6 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                  std::__shared_weak_count::__release_weak();
                }
              }
              break;
            }
            plVar4 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
            if (plVar4 == (long *)0x0) goto LAB_100458501;
          }
          LOCK();
          plVar1 = plVar4 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
LAB_100458501:
    }
    FUN_1001e9eb9(local_78);
    *(undefined4 *)local_70 = (undefined4)local_68;
    *(undefined4 *)((long)local_70 + 4) = local_68._4_4_;
    *(undefined4 *)(local_70 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((long)local_70 + 0xc) = uStack_60._4_4_;
    param_1 = local_70;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

