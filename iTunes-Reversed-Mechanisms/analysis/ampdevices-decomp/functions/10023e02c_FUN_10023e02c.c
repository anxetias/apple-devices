// name: FUN_10023e02c
// address: 10023e02c

long FUN_10023e02c(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  if (((DAT_1008a2e20 == 0) &&
      (DAT_1008a2e20 =
            FUN_100171409(DAT_1008c4d98,0,0,PTR__kCFTypeDictionaryValueCallBacks_10082e140),
      DAT_1008a2e20 == 0)) || (FUN_100171493(DAT_1008a2e20,param_1,&local_50), local_50 != 0))
  goto LAB_10023e208;
  if (param_1 < 0x6974756e) {
    if (((param_1 == 0x4855666c) || (param_1 == 0x4870666c)) || (param_1 == 0x66737350))
    goto LAB_10023e0ef;
LAB_10023e176:
    uVar2 = _UTCreateStringForOSType(param_1);
    lVar3 = FUN_1001737e5(DAT_1008c4d98,0,&cf_com_apple_Music_);
    FUN_10017415e(lVar3,uVar2);
    FUN_10017060f(uVar2);
    local_50 = lVar3;
LAB_10023e1b3:
    if (local_50 != 0) {
      FUN_1001714de(DAT_1008a2e20,param_1,local_50);
      FUN_10017060f(local_50);
      goto LAB_10023e208;
    }
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "uti != __null";
      goto LAB_10023e24b;
    }
  }
  else {
    if (((param_1 != 0x6974756e) && (param_1 != 0x72576d31)) && (param_1 != 0x70686673))
    goto LAB_10023e176;
LAB_10023e0ef:
    lVar3 = _UTCreateStringForOSType(param_1);
    if (lVar3 != 0) {
      local_50 = FUN_1001f1802(*(undefined8 *)PTR__kUTTagClassOSType_10082e520,lVar3,0);
      FUN_10017060f(lVar3);
      goto LAB_10023e1b3;
    }
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "osTypeString != __null";
LAB_10023e24b:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  FUN_1001782e9(0,0);
LAB_10023e208:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_50;
}

