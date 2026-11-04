// name: FUN_100165f4f
// address: 100165f4f

undefined8
FUN_100165f4f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined4 param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar4 = local_450;
  if (param_4 != (undefined1 *)0x0) {
    puVar4 = param_4;
  }
  iVar1 = FUN_100188676(param_2,param_3,puVar4);
  if (iVar1 == 0) {
    uVar3 = FUN_100165eef(param_1,puVar4,param_5,param_6);
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
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

