// name: FUN_10047d258
// address: 10047d258

int FUN_10047d258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 char param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100480e23(&local_68,param_1,1);
  if (local_68 == 0) {
    iVar3 = -0x32;
  }
  else {
    iVar3 = FUN_1004c5526(local_68,param_2,param_3,param_4);
    if (param_5 == '\x01' && iVar3 == 0) {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_1005389ba(&local_58,0xac);
      iVar3 = 0;
      FUN_1004755ef(param_1,0,&local_58);
    }
  }
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

