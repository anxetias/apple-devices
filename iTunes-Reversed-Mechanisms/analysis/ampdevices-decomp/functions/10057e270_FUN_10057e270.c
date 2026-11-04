// name: FUN_10057e270
// address: 10057e270

void FUN_10057e270(long param_1,undefined1 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long local_138;
  long *local_130;
  undefined4 local_128;
  char *local_124;
  undefined2 local_11c;
  char *local_11a;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [32];
  undefined1 local_b8 [40];
  undefined1 local_90 [56];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_10057e1d8(&local_138,param_1,1);
  if (local_138 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_128 = 0x8220202;
      local_124 = "Assertion failure";
      local_11c = 0x822;
      local_11a = "libraryPrefsTracker != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_128,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10027a642(&local_128,0);
    cVar3 = FUN_1002bc310(local_138,param_2,&local_128);
    if (cVar3 != '\0') {
      uVar4 = FUN_1002796f8(param_2,0);
      uVar4 = FUN_10049f8ca(&local_128,uVar4);
      FUN_1002bc516(local_138,param_2,0,uVar4);
    }
    FUN_1001a85d4(local_38);
    FUN_1001b7a50(local_48);
    FUN_1001a85d4(local_58);
    FUN_1001b7a50(local_90);
    FUN_1001b7a50(local_b8);
    FUN_1001a85d4(local_d8);
    FUN_1001b7a50(local_e8);
    FUN_1001b7a50(local_f8);
  }
  if (local_130 != (long *)0x0) {
    LOCK();
    plVar1 = local_130 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_130 + 0x10))(local_130);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

