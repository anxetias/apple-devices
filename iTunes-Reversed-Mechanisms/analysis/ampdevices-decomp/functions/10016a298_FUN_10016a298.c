// name: FUN_10016a298
// address: 10016a298

undefined8
FUN_10016a298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_448 [1056];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_100188676(param_2,param_3,local_448);
  if (iVar1 == 0) {
    uVar3 = FUN_10016a247(param_1,local_448,param_4,param_5);
  }
  else if (param_5 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = FUN_10017157f(DAT_1008c4d90,*(undefined8 *)PTR__kCFErrorDomainOSStatus_10082e080,
                          (long)iVar1,0);
    *param_5 = uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

