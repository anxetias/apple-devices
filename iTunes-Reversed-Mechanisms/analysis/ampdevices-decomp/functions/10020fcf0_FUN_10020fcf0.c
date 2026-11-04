// name: FUN_10020fcf0
// address: 10020fcf0

undefined8 FUN_10020fcf0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_88 [12];
  undefined2 local_7c;
  char *local_7a;
  long *local_68;
  long *local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1[0x438] == 0) ||
     (cVar2 = (**(code **)(*param_1 + 0x28))(param_1,0,0,0,0), cVar2 != '\0')) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_8_ = "Assertion failure";
      local_7c = 0x822;
      local_7a = "IsControllerReadyForUpdate()";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_88,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffee;
    goto LAB_10020fdd6;
  }
  *(undefined4 *)((long)param_1 + 0x2ad4) = 0xe;
  DAT_1008c7590 = DAT_1008c7590 + 1;
  FUN_10021838c(local_88,param_1,*param_2,param_2[1]);
  FUN_10017869a(local_88);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*local_30 + 0x10))(local_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 == (long *)local_88) {
    lVar4 = 0x20;
LAB_10020fdce:
    (**(code **)(*local_68 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_68 != (long *)0x0) goto LAB_10020fdce;
  }
  uVar3 = 0;
LAB_10020fdd6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

