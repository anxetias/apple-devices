// name: FUN_10022420f
// address: 10022420f

undefined8 FUN_10022420f(undefined8 param_1,undefined8 *param_2,double *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = FUN_100229827(0);
  uVar4 = 0xffffffd5;
  if (local_50 != 0) {
    lVar2 = FUN_100166b7f(local_50,param_1);
    if (lVar2 != 0) {
      if (param_3 != (double *)0x0) {
        FUN_100166a6a(lVar2,&cf_retryDate,param_3);
        if ((*param_3 == 0.0) && (!NAN(*param_3))) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "*outOptionalRetryAbsoluteTime != 0";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          uVar4 = 0xffffff32;
          FUN_1001782e9(0,0);
          goto LAB_1002242d6;
        }
      }
      uVar4 = 0;
      if (param_2 != (undefined8 *)0x0) {
        uVar3 = FUN_100166c1b(lVar2,&cf_token);
        uVar3 = FUN_1001705fc(uVar3);
        *param_2 = uVar3;
      }
    }
  }
LAB_1002242d6:
  FUN_1001988bc(&local_50);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

