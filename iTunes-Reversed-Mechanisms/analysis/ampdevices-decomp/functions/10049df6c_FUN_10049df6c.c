// name: FUN_10049df6c
// address: 10049df6c

undefined4 FUN_10049df6c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 local_160 [8];
  long *local_158;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_160,0x140);
  if (*(long *)(param_1 + 0x4e0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10043a8b3(*(undefined8 *)(param_1 + 0x4d8),0x61737470);
    if (local_158 != (long *)0x0) {
      LOCK();
      plVar1 = local_158 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_158 + 0x10))(local_158);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

