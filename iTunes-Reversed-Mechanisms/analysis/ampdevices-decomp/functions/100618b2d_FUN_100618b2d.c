// name: FUN_100618b2d
// address: 100618b2d

/* WARNING: Type propagation algorithm not settling */

void FUN_100618b2d(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  double dVar7;
  undefined1 local_70 [20];
  uint local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100618bce:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100618bce;
    }
    if (*(long *)(param_1 + 0x6750) != 0) {
      iVar2 = FUN_100167d23(param_2,&cf_CrashLogCopyState);
      if (iVar2 == 5) {
        uVar4 = 0x6370636c;
        pcVar6 = &cf_TotalCrashLogs;
        pcVar5 = &cf_CurrentCrashLogNumber;
      }
      else {
        if (iVar2 != 6) goto LAB_100618cb8;
        uVar4 = 0x7362636c;
        pcVar6 = &cf_TotalCrashLogsToSubmit;
        pcVar5 = &cf_SubmittedCrashLogs;
      }
      iVar2 = FUN_100167d23(param_2,pcVar5);
      iVar3 = FUN_100167d23(param_2,pcVar6);
      FUN_1001b7a44(local_5c + 1);
      FUN_1001b7a44(local_70);
      FUN_100231b73(param_1,uVar4,local_5c + 1,local_70,local_5c);
      if (iVar3 < iVar2 || (iVar2 < 1 || iVar3 < 1)) {
        local_5c[0] = local_5c[0] | 0x80;
        dVar7 = DAT_100700af8;
      }
      else {
        dVar7 = (double)iVar2 / (double)iVar3;
        local_5c[0] = local_5c[0] & 0xffffff7f;
      }
      FUN_1005295b5(dVar7,*(undefined8 *)(param_1 + 0x6750),local_5c + 1,local_70);
      FUN_1001b7a50(local_70);
      FUN_1001b7a50(local_5c + 1);
    }
  }
LAB_100618cb8:
  FUN_10017060f(param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

