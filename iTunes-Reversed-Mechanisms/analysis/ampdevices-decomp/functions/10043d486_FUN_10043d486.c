// name: FUN_10043d486
// address: 10043d486

int FUN_10043d486(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined1 local_178 [16];
  long *local_168;
  undefined4 local_160;
  undefined8 local_158;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_178,0x148);
  local_160 = param_2;
  iVar3 = FUN_10043a8b3(param_1,0x6765696c,local_178);
  if (param_3 != (undefined8 *)0x0 && iVar3 == 0) {
    *param_3 = local_158;
  }
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar1 = local_168 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_168 + 0x10))(local_168);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

