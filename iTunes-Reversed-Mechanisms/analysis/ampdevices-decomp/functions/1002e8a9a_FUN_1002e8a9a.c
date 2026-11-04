// name: FUN_1002e8a9a
// address: 1002e8a9a

void FUN_1002e8a9a(long param_1,byte param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_68 [16];
  undefined8 *local_58;
  long *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002e8ba1:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackDataIsValid(inTrackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1002e8ba1;
    }
    FUN_1001a7a9e(local_68,param_3);
    FUN_1002ebcf0(&local_58,param_1,0,local_68);
    FUN_1001a8fac(local_68);
    if (local_58 == (undefined8 *)0x0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "processor != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      FUN_100313e0b(param_1);
      *(byte *)(param_1 + 0x1b51) = *(byte *)(param_1 + 0x1b51) | param_2;
      (**(code **)*local_58)();
      lVar4 = FUN_10048bbac(param_1,0x29,0);
      if (lVar4 != 0) {
        FUN_100488d27(lVar4,0,0);
      }
      FUN_100316867(param_1,param_2,0);
      FUN_100319a94(param_1,6,0);
      *(byte *)(param_1 + 0x1b51) = *(byte *)(param_1 + 0x1b51) & ~param_2;
      FUN_1002fbbfc(param_1);
    }
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

