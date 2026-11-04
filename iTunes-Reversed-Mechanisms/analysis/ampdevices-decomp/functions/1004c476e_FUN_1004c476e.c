// name: FUN_1004c476e
// address: 1004c476e

int FUN_1004c476e(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined1 *)((long)param_1 + 0x50a) = 1;
  *(undefined4 *)((long)param_1 + 0x50c) = 0x3f800000;
  iVar2 = FUN_1004437d8(param_1[0x9e],1);
  if (iVar2 - 3U < 0xfffffffe) {
    if (*(char *)((long)param_1 + 0x50b) == '\x01') {
      *(undefined1 *)((long)param_1 + 0x50b) = 0;
      iVar2 = (**(code **)(*param_1 + 0x380))(param_1);
      if (iVar2 < -0x80) {
        if ((iVar2 + 0xa665U < 3) || (iVar2 + 0xa415U < 2)) goto LAB_1004c484a;
      }
      else {
        if (((iVar2 - 0x2348U < 0x39) &&
            ((0x100200000000001U >> ((ulong)(iVar2 - 0x2348U) & 0x3f) & 1) != 0)) ||
           (iVar2 == -0x80)) goto LAB_1004c484a;
        if (iVar2 == 0) goto LAB_1004c481c;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
      goto LAB_1004c484a;
    }
LAB_1004c481c:
    cVar1 = (**(code **)(*param_1 + 0x388))(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x358))(param_1,0);
    }
  }
  iVar2 = 0;
  (**(code **)(*param_1 + 0x358))(param_1,0);
LAB_1004c484a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

