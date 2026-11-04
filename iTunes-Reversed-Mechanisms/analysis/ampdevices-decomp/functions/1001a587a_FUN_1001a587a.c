// name: FUN_1001a587a
// address: 1001a587a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001a587a(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_68 [8];
  long *local_60;
  undefined **local_58;
  code *local_50;
  undefined8 local_48;
  long local_40;
  undefined ***local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = &PTR_FUN_10083c7f0;
  local_50 = FUN_1001a57c2;
  local_48 = 0;
  local_40 = param_1;
  local_38 = &local_58;
  FUN_1001bde16(_DAT_100710490,local_68,&local_58);
  FUN_100217418((long *)(param_1 + 0x40),local_68);
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
  if (local_38 == &local_58) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_1001a5934;
  }
  (**(code **)((long)*local_38 + lVar3))();
LAB_1001a5934:
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10069dd02(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

