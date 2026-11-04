// name: FUN_100165ffd
// address: 100165ffd

undefined8
FUN_100165ffd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_1001e04f5(param_3,local_238);
  if (iVar1 == 0) {
    uVar3 = FUN_100165f4f(param_1,param_2,local_238,param_4,param_5,param_6);
  }
  else if (param_6 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = FUN_10017157f(param_1,*(undefined8 *)PTR__kCFErrorDomainOSStatus_10082e080,(long)iVar1,0
                         );
    *param_6 = uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

