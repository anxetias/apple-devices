// name: FUN_10024e933
// address: 10024e933

long FUN_10024e933(undefined8 param_1,int param_2,int *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  lVar2 = 0;
  do {
    FUN_10017060f(lVar2);
    lVar2 = FUN_1001736b8(DAT_1008c4d90,0,&cf__u,param_2);
    if (lVar2 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "numericalKeyString != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      lVar3 = 0;
      FUN_1001782e9(0,0);
      goto LAB_10024e9e9;
    }
    lVar3 = FUN_100166b7f(param_1);
    if (lVar3 != 0) {
      if (param_3 != (int *)0x0) {
        *param_3 = param_2;
      }
      goto LAB_10024e9e9;
    }
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  lVar3 = 0;
LAB_10024e9e9:
  FUN_10017060f(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

