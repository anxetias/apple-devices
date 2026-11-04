// name: FUN_10016a346
// address: 10016a346

undefined8
FUN_10016a346(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001e04f5(param_3,local_238);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      uVar3 = FUN_10016a298(param_1,param_2,local_238,param_4,param_5);
      goto LAB_10016a3f4;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100677f6a(iVar2,uVar3);
    }
  }
  if (param_5 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = FUN_10017157f(DAT_1008c4d90,*(undefined8 *)PTR__kCFErrorDomainOSStatus_10082e080,
                          (long)iVar2,0);
    *param_5 = uVar4;
  }
LAB_10016a3f4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

