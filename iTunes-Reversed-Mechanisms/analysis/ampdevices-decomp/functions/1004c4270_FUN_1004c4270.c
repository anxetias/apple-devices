// name: FUN_1004c4270
// address: 1004c4270

void FUN_1004c4270(long *param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long local_58;
  long *local_50;
  undefined4 local_48;
  char *pcStack_44;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  undefined2 uStack_32;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  (**(code **)(*param_1 + 0x278))(&local_58,param_1);
  if (local_58 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      pcStack_44 = "Assertion failure";
      uStack_3c = 0x822;
      uStack_3a = 0x54a2;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c62d9(&local_48,0x2c);
    if (*(int *)((long)param_1 + 0x48c) == 0) {
      lVar4 = (**(code **)(*param_1 + 0x3d0))(param_1);
      if (lVar4 != 0) {
        FUN_10031bd9c(lVar4,&local_48);
      }
    }
    else {
      local_48 = (undefined4)param_1[0x91];
      pcStack_44 = *(char **)((long)param_1 + 0x48c);
      uStack_24 = *(undefined8 *)((long)param_1 + 0x4ac);
      uStack_28 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x4a4) >> 0x20);
      uStack_38 = (undefined6)param_1[0x93];
      uStack_32 = (undefined2)((ulong)param_1[0x93] >> 0x30);
      uStack_30 = (undefined4)param_1[0x94];
      local_2c = (undefined4)((ulong)param_1[0x94] >> 0x20);
      uStack_3c = (undefined2)*(undefined4 *)((long)param_1 + 0x494);
      uStack_3a = (undefined2)((uint)*(undefined4 *)((long)param_1 + 0x494) >> 0x10);
    }
    cVar2 = (**(code **)(*param_1 + 0x208))(param_1,&local_48);
    if (cVar2 != '\0') {
      *(undefined1 *)((long)param_1 + 0x509) = 1;
    }
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
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

