// name: FUN_100148ff6
// address: 100148ff6

void FUN_100148ff6(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong local_78;
  undefined1 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined ***local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = FUN_100156d72();
  plVar3 = *(long **)(lVar6 + 0xb8);
  plVar4 = *(long **)(lVar6 + 0xc0);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar3 != (long *)0x0) {
    local_78 = local_78 & 0xffffffffffffff00;
    local_70 = 0;
    lVar6 = *(long *)(param_1 + 0x30);
    std::mutex::lock();
    lVar6 = *(long *)(lVar6 + 0x18);
    std::mutex::unlock();
    if (lVar6 != 0) {
      lVar6 = *(long *)(param_1 + 0x30);
      std::mutex::lock();
      uVar5 = *(ulong *)(lVar6 + 0x18);
      std::mutex::unlock();
      local_70 = 1;
      local_78 = uVar5;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    local_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    if (*(long *)(param_1 + 0x38) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x38) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    local_68 = &PTR_FUN_10083ab90;
    local_48 = &local_68;
    (**(code **)(*plVar3 + 0x40))(plVar3,param_1 + 8,param_1 + 0x18,&local_78,uVar2,&local_68,0,0);
    if (local_48 == &local_68) {
      lVar6 = 0x20;
    }
    else {
      lVar6 = 0x28;
      if (local_48 == (undefined ***)0x0) goto LAB_10014910f;
    }
    (**(code **)((long)*local_48 + lVar6))();
  }
LAB_10014910f:
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar6 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

