// name: FUN_1004c3f8e
// address: 1004c3f8e

void FUN_1004c3f8e(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_4b0;
  undefined1 local_4ac [1120];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_4b0,0x468);
  local_4b0 = *(undefined4 *)((long)param_1 + 0x1c);
  _memcpy(local_4ac,param_1 + 4,0x460);
  local_4c = (undefined4)param_1[0xa9];
  FUN_10043dd98(&local_48,&local_4b0);
  FUN_100217418(param_1 + 0x9e,&local_48);
  plVar3 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
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
  lVar2 = param_1[0x9e];
  if (lVar2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x53f2;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(long **)(lVar2 + 0x488) = param_1 + 0x9c;
    (**(code **)(*param_1 + 0x308))(param_1);
    FUN_100446d0e(param_1[0x9e],param_1[0xbc]);
    FUN_10043e3da(param_1[0x9e],param_1[0xbd]);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

