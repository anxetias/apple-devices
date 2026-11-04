// name: FUN_10058d802
// address: 10058d802

int FUN_10058d802(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  int local_23a;
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1001de41f(param_3,param_4,local_228);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        FUN_1001e6a04(local_228);
        iVar2 = FUN_1001f361e(param_1,param_2,local_228);
        if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_10058d8e3;
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
      }
      if (cVar1 != '\0') {
        local_23c = 0x400;
        local_244 = "Assertion failure";
        local_248 = 0x8220202;
        local_23a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_248,0x12);
      }
    }
  }
LAB_10058d8e3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

