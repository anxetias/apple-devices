// name: FUN_100537c68
// address: 100537c68

void FUN_100537c68(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((long *)*param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_3a = "listHead != nullptr";
LAB_100537dc2:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else if (*param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_3a = "listTail != nullptr";
      goto LAB_100537dc2;
    }
  }
  else {
    if (param_3 != (long *)0x0) {
      plVar4 = (long *)param_3[1];
      if (((long *)param_3[1] == (long *)0x0) && (plVar4 = param_1, (long *)*param_1 != param_3)) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "listHead == element";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      lVar1 = *param_3;
      *plVar4 = lVar1;
      if (lVar1 == 0) {
        if ((long *)*param_2 != param_3) {
          uVar3 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar3,0x10);
          if (cVar2 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "listTail == element";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        *param_2 = param_3[1];
      }
      else {
        *(long *)(lVar1 + 8) = param_3[1];
      }
      *param_3 = 0;
      param_3[1] = 0;
      goto LAB_100537e2a;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_3a = "element != nullptr";
      goto LAB_100537dc2;
    }
  }
  FUN_1001782e9(0,0);
LAB_100537e2a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

