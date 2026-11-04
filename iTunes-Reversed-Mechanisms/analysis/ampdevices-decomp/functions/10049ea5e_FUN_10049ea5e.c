// name: FUN_10049ea5e
// address: 10049ea5e

void FUN_10049ea5e(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  short local_378 [260];
  undefined1 local_170 [16];
  long *local_160;
  undefined8 local_158;
  short *local_150;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_170,0x148);
  local_378[0] = 0;
  FUN_1001e1c39(param_2,param_3);
  local_150 = local_378;
  local_158 = param_2;
  iVar3 = FUN_10043a8b3(*(undefined8 *)(param_1 + 0x4d8),0x73657874);
  if ((iVar3 == 0) && (local_378[0] != 0)) {
    FUN_1001e1c39(local_378,param_3);
  }
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

