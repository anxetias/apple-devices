// name: FUN_1005b25c6
// address: 1005b25c6

void FUN_1005b25c6(long param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 local_278 [16];
  undefined8 *local_268;
  long *local_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined2 local_24c;
  undefined8 local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "mDataPacker != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1004c771e(&local_268);
    if (local_268 != (undefined8 *)0x0) {
      uVar6 = FUN_1003c5880();
      cVar5 = _os_log_type_enabled(uVar6,1);
      if (cVar5 != '\0') {
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        FUN_1005e4722(param_2,0,&local_238);
        FUN_1001b8dfc(local_278,&local_238);
        local_24a = FUN_1001b83ae(local_278);
        local_258 = 0x8000202;
        local_24c = 0x820;
        local_254 = uVar4;
        __os_log_impl(0x100000000,uVar6,1,"ch> ARTIST: %llx \'%s\'",&local_258,0x16);
        FUN_1001b7a50(local_278);
      }
      if (param_3 != (undefined4 *)0x0) {
        uVar3 = *param_3;
        *(undefined1 *)(local_268 + 4) = 1;
        *(undefined4 *)((long)local_268 + 0x24) = uVar3;
      }
      (**(code **)*local_268)(&local_238);
      FUN_1005b1838(*(undefined8 *)(param_1 + 0x28),&local_238);
      FUN_1001a8fac(&local_238);
    }
    if (local_260 != (long *)0x0) {
      LOCK();
      plVar1 = local_260 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_260 + 0x10))(local_260);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

