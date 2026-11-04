// name: FUN_1005315dc
// address: 1005315dc

int FUN_1005315dc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = param_4;
  iVar2 = (**(code **)(*param_1 + 0xf0))();
  if (iVar2 == -0x80) goto LAB_1005316b0;
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 200))(param_1,&local_50,param_3);
    if (iVar2 == -0x80) goto LAB_1005316b0;
    if (iVar2 == 0) {
      iVar2 = 0;
      if (param_6 != (undefined8 *)0x0) {
        *param_6 = local_50;
        iVar2 = 0;
      }
      goto LAB_1005316b0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  if (cVar1 != '\0') {
    local_3c = 0x400;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    local_3a = iVar2;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_1005316b0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

