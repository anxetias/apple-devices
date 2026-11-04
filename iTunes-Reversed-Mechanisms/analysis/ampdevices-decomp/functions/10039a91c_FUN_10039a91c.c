// name: FUN_10039a91c
// address: 10039a91c

void FUN_10039a91c(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long local_98 [4];
  long *local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 != 0) {
    LOCK();
    *(long *)(param_5 + 8) = *(long *)(param_5 + 8) + 1;
    UNLOCK();
  }
  local_78 = operator_new(0x30);
  *local_78 = (long)&PTR_FUN_100856398;
  local_78[1] = param_1;
  local_78[2] = param_2;
  local_78[3] = param_3;
  local_78[4] = param_4;
  local_78[5] = param_5;
  local_68 = 0;
  uStack_60 = 0;
  uStack_59 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (long *)0x0;
  FUN_10017869a(local_98);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 == local_98) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_78 == (long *)0x0) goto LAB_10039aa1b;
  }
  (**(code **)(*local_78 + lVar2))();
LAB_10039aa1b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

