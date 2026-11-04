// name: FUN_10049e574
// address: 10049e574

undefined4 FUN_10049e574(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_170 [2];
  long *local_160;
  undefined4 local_158;
  undefined8 local_150;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_170,0x148);
  local_170[0] = (**(code **)(*param_1 + 0x2c0))(param_1,1);
  local_158 = param_2;
  local_150 = param_3;
  uVar3 = FUN_10043a8b3(param_1[0x9b],0x67636869);
  if (local_160 != (long *)0x0) {
    LOCK();
    plVar1 = local_160 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_160 + 0x10))(local_160);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

