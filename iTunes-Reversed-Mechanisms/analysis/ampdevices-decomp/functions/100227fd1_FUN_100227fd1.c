// name: FUN_100227fd1
// address: 100227fd1

undefined4 FUN_100227fd1(int param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0x69506f64) {
    uVar6 = FUN_100416f20(0x69506f64,0x10cc00fd);
    FUN_1001b7eb0(&local_48,uVar6);
    plVar3 = *(long **)(param_3 + 2);
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    uVar5 = FUN_100227caa(param_2,&local_58,&local_48,0,0x14,0);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_1001b7a50(&local_48);
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "deviceClass == kITIPodDeviceClassAppleIPod";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0x194;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

