// name: FUN_1003c7696
// address: 1003c7696

long FUN_1003c7696(int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *local_50;
  undefined4 local_48;
  int *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = (char *)0x0;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = (int *)0x1007a0a90;
      local_3c = 0x822;
      local_3a = "JRFileSpecIsValid(metadataFileSpec)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffce;
      lVar3 = 0;
    }
  }
  else {
    lVar3 = FUN_10016aa24(DAT_1008c4d90,param_1,0,&local_50);
    if (lVar3 == 0) {
      uVar4 = FUN_1001715c3(local_50);
      cVar1 = FUN_100170633(uVar4,*(undefined8 *)PTR__kCFErrorDomainOSStatus_10082e080);
      if (cVar1 == '\0') {
        uVar2 = 0xffffffd5;
      }
      else {
        uVar2 = FUN_100171607(local_50);
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = uVar2;
      }
      if (*param_1 == 0x41464350) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          local_44 = param_1 + 7;
          local_48 = 0x8220202;
          local_3c = 0x842;
          local_3a = local_50;
          __os_log_impl(0x100000000,uVar4,0x10,
                        "sync> unable to create asset metadata dictionary from \"%{public}s\" (%{public}@)"
                        ,&local_48,0x16);
        }
      }
    }
    FUN_10017060f(local_50);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

