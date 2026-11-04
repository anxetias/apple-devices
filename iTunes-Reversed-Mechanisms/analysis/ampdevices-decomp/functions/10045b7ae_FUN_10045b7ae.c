// name: FUN_10045b7ae
// address: 10045b7ae

int FUN_10045b7ae(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_3c [3];
  undefined1 local_39;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10045b3c2(param_1,local_3c);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      *param_2 = local_39;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

