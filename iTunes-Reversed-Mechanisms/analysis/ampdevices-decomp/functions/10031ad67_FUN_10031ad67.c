// name: FUN_10031ad67
// address: 10031ad67

void FUN_10031ad67(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_26a [2];
  undefined4 local_268;
  char *local_264;
  undefined2 local_25c;
  int local_25a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    FUN_10031ac4c(param_1);
  }
  iVar2 = FUN_10031ab0f(param_1,local_26a,1);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_268 = 0x8220202;
      local_264 = "Assertion failure";
      local_25c = 0x400;
      local_25a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_268,0x12);
    }
  }
  if (*(int *)(param_1 + 0x3c) == 0x46494c45) {
    FUN_100313af0(param_1,&local_268);
    FUN_1002b1325(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

