// name: FUN_1005ceaee
// address: 1005ceaee

void FUN_1005ceaee(long *param_1)

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
  *(undefined4 *)(param_1 + 1) = 0x5622;
  *param_1 = (long)&PTR_FUN_10086f7e8;
  ___bzero((long)param_1 + 0xc,0x16a);
  param_1[0x2f] = -0x100000000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  FUN_1001c62d9((long)param_1 + 0xc,0x16a);
  FUN_1001e9c3e(param_1 + 0x30);
  _setenv("MTX_DEBUG_PARAM_VALUES","Search.Asynchronous=f",1);
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1,0);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
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
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

