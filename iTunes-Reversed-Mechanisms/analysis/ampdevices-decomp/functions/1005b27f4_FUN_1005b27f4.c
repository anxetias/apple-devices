// name: FUN_1005b27f4
// address: 1005b27f4

void FUN_1005b27f4(long param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  char *pcVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  long *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mDataPacker != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_68 = (undefined4)*param_2;
    uStack_64 = *(undefined4 *)((long)param_2 + 4);
    uStack_60 = (undefined4)param_2[1];
    uStack_5c = *(undefined4 *)((long)param_2 + 0xc);
    if (param_2[1] != 0) {
      LOCK();
      plVar1 = (long *)(param_2[1] + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    FUN_10021e4d4(&local_58,&local_68);
    plVar1 = (long *)CONCAT44(uStack_5c,uStack_60);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_58 != (undefined8 *)0x0) {
      uVar7 = FUN_1003c5880();
      cVar6 = _os_log_type_enabled(uVar7,1);
      if (cVar6 != '\0') {
        pcVar5 = *(char **)(*param_2 + 0x18);
        FUN_1001b7a5c(local_78,*param_2 + 0x38);
        local_3a = (char *)FUN_1001b83ae(local_78);
        local_48 = 0x8000202;
        local_3c = 0x820;
        local_44 = pcVar5;
        __os_log_impl(0x100000000,uVar7,1,"ch> PROFILE: %llx \'%s\'",&local_48,0x16);
        FUN_1001b7a50(local_78);
      }
      if (param_3 != (undefined4 *)0x0) {
        uVar4 = *param_3;
        *(undefined1 *)(local_58 + 5) = 1;
        *(undefined4 *)((long)local_58 + 0x2c) = uVar4;
      }
      (**(code **)*local_58)(&local_48);
      FUN_1005b1888(*(undefined8 *)(param_1 + 0x28),&local_48);
      FUN_1001a8fac(&local_48);
    }
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
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

