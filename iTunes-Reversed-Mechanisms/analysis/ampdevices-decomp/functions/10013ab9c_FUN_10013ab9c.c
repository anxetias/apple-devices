// name: FUN_10013ab9c
// address: 10013ab9c

void FUN_10013ab9c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 local_78 [8];
  long *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10013b58e(&local_68,param_1);
  FUN_10012bbaa(local_78);
  if (CONCAT44(uStack_5c,uStack_60) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_5c,uStack_60) + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  local_40 = *(undefined4 *)(param_1 + 0x7c);
  local_58 = &PTR_FUN_10083a198;
  local_50 = local_68;
  uStack_4c = uStack_64;
  uStack_48 = uStack_60;
  uStack_44 = uStack_5c;
  local_38 = &local_58;
  FUN_10012bbf4(local_78,&local_58,0);
  if (local_38 == &local_58) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_10013ac2b;
  }
  (**(code **)((long)*local_38 + lVar2))();
LAB_10013ac2b:
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (CONCAT44(uStack_5c,uStack_60) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

