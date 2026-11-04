// name: FUN_1001661fe
// address: 1001661fe

int FUN_1001661fe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001e115f(param_3,local_238);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = FUN_1001660b3(param_1,param_2,local_238,param_4,param_5);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100673718(iVar2,uVar3);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

