// name: FUN_100149b36
// address: 100149b36

void FUN_100149b36(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_48;
  long *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    if (*param_3 == 0) {
      cVar5 = FUN_1001b8428(param_2);
      if (cVar5 == '\0') {
        FUN_1001b7a44(&local_38);
        uStack_28 = (undefined2)*(undefined4 *)(param_1 + 0x18);
        uStack_26 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x18) >> 0x10);
        FUN_1001b8172(&local_38,param_2);
        lVar3 = *(long *)(param_1 + 8);
        FUN_1001b8172(lVar3 + 0x50,&local_38);
        *(uint *)(lVar3 + 0x60) = CONCAT22(uStack_26,uStack_28);
        FUN_1001b7a50();
      }
      uVar6 = FUN_100135270();
      cVar5 = _os_log_type_enabled(uVar6,0);
      if (cVar5 != '\0') {
        (**(code **)(**(long **)(param_1 + 8) + 0xd0))(&local_48);
        uVar7 = FUN_1001b83ae(&local_48);
        uVar2 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x188);
        local_38 = 0x8220202;
        uStack_34 = (undefined4)uVar7;
        local_30 = (undefined4)((ulong)uVar7 >> 0x20);
        uStack_2c = 0x400;
        uStack_2a = (undefined2)uVar2;
        uStack_28 = (undefined2)((uint)uVar2 >> 0x10);
        __os_log_impl(0x100000000,uVar6,0,"storereq> %{public}s(%d). Retrying after Anisette sync.",
                      &local_38,0x12);
        FUN_1001b7a50(&local_48);
      }
      FUN_10014105c(*(undefined8 *)(param_1 + 8));
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 8);
      local_38 = (undefined4)uVar6;
      uStack_34 = (undefined4)((ulong)uVar6 >> 0x20);
      lVar3 = *(long *)(param_1 + 0x10);
      local_30 = (undefined4)lVar3;
      uStack_2c = (undefined2)((ulong)lVar3 >> 0x20);
      uStack_2a = (undefined2)((ulong)lVar3 >> 0x30);
      if (lVar3 != 0) {
        LOCK();
        *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      local_48 = 0;
      plStack_40 = (long *)0x0;
      FUN_100144dfe(uVar6,&local_38);
      if (plStack_40 != (long *)0x0) {
        LOCK();
        plVar4 = plStack_40 + 1;
        lVar3 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar4 = (long *)CONCAT26(uStack_2a,CONCAT24(uStack_2c,local_30));
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
            std::__shared_weak_count::__release_weak();
            return;
          }
          goto LAB_100149cf7;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_100149cf7:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

