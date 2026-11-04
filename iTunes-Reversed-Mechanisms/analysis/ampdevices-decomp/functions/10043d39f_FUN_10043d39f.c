// name: FUN_10043d39f
// address: 10043d39f

int FUN_10043d39f(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined1 local_180 [16];
  long *local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_180,0x148);
  local_168 = param_2;
  iVar3 = FUN_10043a8b3(param_1,0x67667874,local_180);
  if (iVar3 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_160;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_15c;
    }
  }
  if (local_170 != (long *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_170 + 0x10))(local_170);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

