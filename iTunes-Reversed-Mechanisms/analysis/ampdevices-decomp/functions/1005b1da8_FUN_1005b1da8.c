// name: FUN_1005b1da8
// address: 1005b1da8

void FUN_1005b1da8(long param_1,undefined8 *param_2,long param_3,char param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_80 [16];
  char *local_70;
  undefined8 *local_68;
  long *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mDataPacker != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10025c59c(&local_68,param_2,param_4);
    if (local_68 != (undefined8 *)0x0) {
      uVar4 = FUN_1003c5880();
      cVar3 = _os_log_type_enabled(uVar4,1);
      if (cVar3 != '\0') {
        local_70 = (char *)*param_2;
        FUN_100476ac1(local_80,param_2);
        local_4a = (char *)FUN_1001b83ae(local_80);
        local_40 = 0x4e;
        if (param_4 != '\0') {
          local_40 = 0x59;
        }
        local_58 = 0x8000302;
        local_54 = local_70;
        local_4c = 0x820;
        local_42 = 0x400;
        __os_log_impl(0x100000000,uVar4,1,"ch> TRACK: %llx \'%s\' isNew:%c",&local_58,0x1c);
        FUN_1001b7a50(local_80);
      }
      if (param_3 != 0) {
        FUN_10025c89a(local_68,param_3);
      }
      (**(code **)*local_68)(&local_58);
      FUN_1005b1748(*(undefined8 *)(param_1 + 0x28),&local_58);
      FUN_1001a8fac(&local_58);
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
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

