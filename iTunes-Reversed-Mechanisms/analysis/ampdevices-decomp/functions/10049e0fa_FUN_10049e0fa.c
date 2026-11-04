// name: FUN_10049e0fa
// address: 10049e0fa

undefined4 FUN_10049e0fa(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_168 [2];
  long *local_158;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_168,0x148);
  local_168[0] = (**(code **)(*param_1 + 0x2c0))(param_1,1);
  uVar3 = FUN_10043a8b3(param_1[0x9b],0x75706175);
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
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

