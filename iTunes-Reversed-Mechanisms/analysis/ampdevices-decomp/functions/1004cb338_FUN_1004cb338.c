// name: FUN_1004cb338
// address: 1004cb338

void FUN_1004cb338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  long *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001ba026(param_3,"StoreServicesNotifications.BagChanged");
  if (iVar2 != 0) goto LAB_1004cb367;
  FUN_10012bbaa(local_68);
  FUN_1004ca604(&local_78,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  local_58 = &PTR_FUN_10085e7b0;
  local_50 = local_78;
  uStack_48 = uStack_70;
  local_78 = 0;
  uStack_70 = 0;
  local_38 = &local_58;
  FUN_10012bbf4(local_68,&local_58,1);
  if (local_38 == &local_58) {
    lVar3 = 0x20;
LAB_1004cb3eb:
    (**(code **)((long)*local_38 + lVar3))();
  }
  else {
    lVar3 = 0x28;
    if (local_38 != (undefined ***)0x0) goto LAB_1004cb3eb;
  }
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1004cb367:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

