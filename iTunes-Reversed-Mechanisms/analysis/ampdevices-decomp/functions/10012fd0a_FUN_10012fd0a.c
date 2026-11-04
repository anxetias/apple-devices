// name: FUN_10012fd0a
// address: 10012fd0a

/* WARNING: Removing unreachable block (ram,0x00010012fd58) */
/* WARNING: Removing unreachable block (ram,0x00010012fd6a) */

void FUN_10012fd0a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 local_28;
  long *local_20;
  
  FUN_100130286();
  local_28 = *param_2;
  local_20 = (long *)param_2[1];
  if (local_20 != (long *)0x0) {
    LOCK();
    local_20[1] = local_20[1] + 1;
    UNLOCK();
  }
  FUN_100144dfe(local_28,&local_28,param_3);
  if (local_20 != (long *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_20 + 0x10))(local_20);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

