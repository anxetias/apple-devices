// name: FUN_10034b114
// address: 10034b114

undefined8 FUN_10034b114(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_3c;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3c = 0;
  if (param_1 == 0) {
LAB_10034b231:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackDataIsValid(trackData)";
LAB_10034b329:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10034b231;
    }
    if (*(int *)(param_1 + 0x84) == 0x2062696c) {
      uVar2 = 0;
      lVar3 = FUN_1003697e2(param_1,&local_3c,0);
      if (lVar3 != 0) {
        uVar2 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        FUN_100171502(uVar2,&cf_data,lVar3);
        FUN_100168746(uVar2,&cf_version,local_3c,1);
        FUN_100168746(uVar2,&cf_default_num_results,0x19,1);
        FUN_100168746(uVar2,&cf_min_num_results,10,1);
        FUN_10017060f(lVar3);
      }
      goto LAB_10034b297;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "trackData->trackDataKind == kTrackDataKind_Library";
      goto LAB_10034b329;
    }
  }
  uVar2 = 0;
  FUN_1001782e9(0,0);
LAB_10034b297:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

