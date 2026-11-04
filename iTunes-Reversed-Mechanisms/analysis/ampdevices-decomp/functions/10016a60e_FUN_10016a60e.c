// name: FUN_10016a60e
// address: 10016a60e

int FUN_10016a60e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 *param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001e04f5(param_3,local_238);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = FUN_10016a4ce(param_1,param_2,local_238,param_4,param_5,param_6,param_7);
      goto LAB_10016a6cb;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006781a6(iVar2,uVar3);
    }
  }
  if (param_7 != (undefined8 *)0x0) {
    uVar3 = FUN_10017157f(DAT_1008c4d90,*(undefined8 *)PTR__kCFErrorDomainOSStatus_10082e080,
                          (long)iVar2,0);
    *param_7 = uVar3;
  }
LAB_10016a6cb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

