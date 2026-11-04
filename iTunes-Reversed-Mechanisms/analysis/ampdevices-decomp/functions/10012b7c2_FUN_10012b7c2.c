// name: FUN_10012b7c2
// address: 10012b7c2

undefined8 FUN_10012b7c2(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *local_78;
  long *local_70;
  long **local_58;
  undefined4 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  std::mutex::lock();
  FUN_10028593a(&local_78,param_2);
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_48 = param_3;
  if (uVar2 < *(ulong *)(param_1 + 0x28)) {
    FUN_10012d05c(uVar2,&local_78);
    *(undefined4 *)(uVar2 + 0x30) = local_48;
    lVar3 = uVar2 + 0x40;
  }
  else {
    lVar3 = FUN_10012c2b6(param_1 + 0x18,&local_78);
  }
  *(long *)(param_1 + 0x20) = lVar3;
  if (local_58 == &local_78) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_58 == (long **)0x0) goto LAB_10012b868;
  }
  (**(code **)((long)*local_58 + lVar3))();
LAB_10012b868:
  std::mutex::unlock();
  FUN_10012ac76(&local_78,param_1);
  if ((local_78 != (long *)0x0) && (*local_78 != 0)) {
    FUN_10012b372(param_1,&local_78,0);
  }
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_10082cb58 >> 8),1);
}

