// name: FUN_100243fb1
// address: 100243fb1

int FUN_100243fb1(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_98 [80];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10017ecc9(param_1,param_2,param_4,local_98);
  if (iVar2 != 0) {
    iVar2 = FUN_100181256(param_1,param_2,param_4);
    if (iVar2 == -0x80) goto LAB_100244038;
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      goto LAB_100244038;
    }
  }
  if (param_3 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1002440a0(param_4,param_3);
  }
LAB_100244038:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

