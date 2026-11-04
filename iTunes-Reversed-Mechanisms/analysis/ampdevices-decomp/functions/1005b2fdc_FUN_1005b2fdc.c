// name: FUN_1005b2fdc
// address: 1005b2fdc

void FUN_1005b2fdc(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  undefined2 local_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x202;
      uStack_46 = 0x822;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "mDataPacker != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1005b316e;
  }
  FUN_10049fce4(&local_58,*(undefined1 *)(param_1 + 0x38));
  if (local_58 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x202;
      uStack_46 = 0x822;
      uStack_44 = 0x7a168c;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "packer";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar3 = FUN_1001782e9(0,0);
    if (cVar3 != '\0') goto LAB_1005b304a;
  }
  else {
LAB_1005b304a:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      local_60 = (long *)param_2[1];
      if (local_60 != (long *)0x0) {
        LOCK();
        local_60[1] = local_60[1] + 1;
        UNLOCK();
      }
      local_68 = lVar2;
      (**(code **)(*local_58 + 0x20))(local_58,&local_68);
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
      (**(code **)(*local_58 + 0x28))(local_58,0,0);
    }
    uVar4 = FUN_1003c5880();
    cVar3 = _os_log_type_enabled(uVar4,1);
    if (cVar3 != '\0') {
      local_48 = 0;
      __os_log_impl(0x100000000,uVar4,1,"ch> send LIBRARY PREFS",&local_48,2);
    }
    (**(code **)*local_58)(&local_48);
    if (CONCAT44(uStack_44,CONCAT22(uStack_46,local_48)) != 0) {
      FUN_1005b18d8(*(undefined8 *)(param_1 + 0x28),&local_48);
    }
    FUN_1001a8fac(&local_48);
  }
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1005b316e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

