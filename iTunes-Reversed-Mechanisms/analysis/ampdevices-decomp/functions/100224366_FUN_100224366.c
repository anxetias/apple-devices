// name: FUN_100224366
// address: 100224366

undefined8 FUN_100224366(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001711ec(DAT_1008c4d90);
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "spRetryDate";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar4 = 0xffffff94;
    FUN_1001782e9(0,0);
    goto LAB_10022451d;
  }
  local_60 = FUN_100229827(0);
  if (local_60 == 0) {
    lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    bVar5 = local_60 != 0;
    local_60 = lVar3;
    if (bVar5) {
      _CFRelease();
    }
    if (local_60 != 0) goto LAB_1002243ef;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "spDatabaseDictionary";
LAB_1002245bd:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_100224505:
    uVar4 = 0xffffff94;
    FUN_1001782e9(0,0);
  }
  else {
LAB_1002243ef:
    lVar3 = FUN_100166b7f(local_60,param_1);
    if (lVar3 == 0) {
      lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_4a = "tokenAndRetryDateDictionary != nullptr";
          goto LAB_1002245bd;
        }
        goto LAB_100224505;
      }
      FUN_1001714de(local_60,param_1,lVar3);
      FUN_10017060f(lVar3);
    }
    FUN_100171502(lVar3,&cf_token,param_2);
    FUN_100171502(lVar3,&cf_retryDate,lVar2);
    _CFAbsoluteTimeGetCurrent();
    uVar4 = 0;
    FUN_100229aa0(local_60);
  }
  FUN_1001988bc(&local_60);
LAB_10022451d:
  FUN_10022acaa(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

