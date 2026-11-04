// name: FUN_1002f52d0
// address: 1002f52d0

bool FUN_1002f52d0(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar4 = false;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar2 = (**(code **)(param_1 + 0x40))(param_2,param_3,param_4);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
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
    bVar4 = iVar2 == 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

