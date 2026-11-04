// name: FUN_100279998
// address: 100279998

void FUN_100279998(undefined1 param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001ee056();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "JRIsCurrentThreadCooperative()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar4 = 1;
  }
  else {
    plVar2 = (long *)FUN_1003070df();
    if (plVar2 == (long *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "trackData != nullptr";
LAB_100279b6a:
        local_3c = 0x822;
        local_44 = "Assertion failure";
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
    }
    else {
      lVar3 = FUN_1002796f8(param_1,0);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(DAT_1008c76a0 + 0x1a54);
        FUN_100313e0b(plVar2);
        FUN_1002f976a(plVar2,param_1);
        (**(code **)(*plVar2 + 0x10))(plVar2,0x74646c70,plVar2,param_1,lVar3);
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
          FUN_1002fbbfc(plVar2);
          return;
        }
        goto LAB_100279b94;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "libraryPrefs != nullptr";
        goto LAB_100279b6a;
      }
    }
    uVar4 = 0;
  }
  FUN_1001782e9(0,uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_100279b94:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

