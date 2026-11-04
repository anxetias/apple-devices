// name: FUN_1004c4a1c
// address: 1004c4a1c

void FUN_1004c4a1c(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (**(code **)(*param_1 + 0x398))(param_1,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x308))(param_1);
      FUN_10044523a(param_1[0x9e]);
    }
    else if (iVar2 != 0x2348) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x50a) = 0;
  *(undefined4 *)((long)param_1 + 0x50c) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

