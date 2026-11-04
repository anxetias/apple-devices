// name: FUN_1005f8037
// address: 1005f8037

long FUN_1005f8037(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_478;
  undefined8 local_470;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  int local_45a;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_43a = "handlerData != __null";
LAB_1005f823f:
      local_43c = 0x822;
      local_444 = "Assertion failure";
      local_448 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    local_478 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    if (local_478 != 0) {
      local_470 = 0;
      iVar2 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x67616d65,0,
                            &local_448);
      if (((iVar2 == 0) &&
          (iVar2 = FUN_10017fdd8(&local_448,1,9,FUN_1005f826e,&local_478), iVar2 != -0x80)) &&
         (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x400;
          local_45a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_468,0x12);
        }
      }
      lVar4 = local_478;
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = local_470;
      }
      goto LAB_1005f8154;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_43a = "context.gameInfoArray != __null";
      goto LAB_1005f823f;
    }
  }
  FUN_1001782e9(0,0);
  lVar4 = 0;
LAB_1005f8154:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

