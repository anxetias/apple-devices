// name: FUN_1005f83dd
// address: 1005f83dd

void FUN_1005f83dd(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "gameInfoArray != nullptr";
LAB_1005f8593:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      local_60 = param_2;
      lVar2 = FUN_10017076e();
      if (0 < lVar2) {
        lVar4 = 0;
        do {
          uVar3 = FUN_10016499b(param_1,lVar4);
          cVar1 = FUN_100167ab3(uVar3,PTR_cf_DRMUserID_10088fbf8,&local_68);
          if (cVar1 == '\0') {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "JRCFDictionaryGetUInt64(gameInfo, kIPodGameDRMUserIDKey, &drmUserID)";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else if ((1 < local_68) &&
                  (cVar1 = FUN_10031e4ab(local_68,0,1,0,local_60,0), cVar1 == '\0')) break;
          lVar4 = lVar4 + 1;
        } while (lVar4 < lVar2);
      }
      goto LAB_1005f8550;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "userIDList != nullptr";
      goto LAB_1005f8593;
    }
  }
  FUN_1001782e9(0,0);
LAB_1005f8550:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

