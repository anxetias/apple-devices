// name: FUN_10020ac03
// address: 10020ac03

undefined8 FUN_10020ac03(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_430;
  undefined4 local_428;
  char *local_424;
  undefined2 local_41c;
  char *local_41a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_430 = 0;
  if (param_2 == 0) {
    param_2 = FUN_10020d28b(param_1);
    if (param_2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_428 = 0x8220202;
        local_424 = "Assertion failure";
        local_41c = 0x822;
        local_41a = "bundleInfoDict != __null";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_428,0x16);
      }
      uVar3 = 0;
      FUN_1001782e9(0,0);
      goto LAB_10020acc5;
    }
  }
  else {
    FUN_1001705fc(param_2);
  }
  iVar2 = FUN_10020dd26(param_1,param_2,1,&local_428);
  if (iVar2 == 0) {
    iVar2 = FUN_1001fbb12(param_1,&local_428,&local_430);
    if (iVar2 != 0) goto LAB_10020ac88;
  }
  else {
LAB_10020ac88:
    iVar2 = FUN_10020dd26(param_1,param_2,0,&local_428);
    if (iVar2 == 0) {
      FUN_1001fbb12(param_1,&local_428,&local_430);
    }
  }
  FUN_10017060f(param_2);
  uVar3 = local_430;
LAB_10020acc5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

