// name: FUN_10049ede8
// address: 10049ede8

int FUN_10049ede8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 local_170;
  undefined1 local_168 [8];
  long *local_160;
  undefined8 local_158;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_168,0x140);
  local_170 = *(undefined8 *)(param_1 + 0x4e0);
  iVar3 = FUN_10043a8b3(*(undefined8 *)(param_1 + 0x4d8),0x63636163,&local_170);
  if (iVar3 == 0) {
    *param_2 = local_158;
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
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

