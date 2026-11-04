// name: FUN_10012d26a
// address: 10012d26a

/* WARNING: Removing unreachable block (ram,0x00010012d2d8) */
/* WARNING: Removing unreachable block (ram,0x00010012d2ea) */

void FUN_10012d26a(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 local_28;
  long *plStack_20;
  
  local_28 = *(undefined8 *)(param_1 + 0x40);
  plStack_20 = *(long **)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x48) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x48) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10016bf14();
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_28);
  if (plStack_20 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_20 + 0x10))(plStack_20);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

