// name: FUN_100165e44
// address: 100165e44

undefined8 FUN_100165e44(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_44c;
  undefined1 local_448 [1056];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10016ffd2(param_2,local_448,&local_44c);
  if (cVar1 == '\0') {
    if (param_3 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      uVar3 = FUN_10017157f(param_1,*(undefined8 *)PTR__kCFErrorDomainOSStatus_10082e080,
                            (long)local_44c,0);
      *param_3 = uVar3;
    }
  }
  else {
    uVar2 = FUN_100165eef(param_1,local_448,0,param_3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

