// name: FUN_100322314
// address: 100322314

undefined1 FUN_100322314(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = *(long *)(param_1 + 8);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_21a = "TrackInstanceIsValid(inSourceTrackInstance)";
LAB_1003224b5:
      local_21c = 0x822;
      local_224 = "Assertion failure";
      local_228 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
  }
  else if ((*(int *)(param_1 + 0x3c) == 0x46494c45) || (*(int *)(param_1 + 0x3c) == 0x53485244)) {
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      cVar1 = FUN_100474d03(param_2);
      if (cVar1 == '\0') {
LAB_1003223aa:
        uVar5 = 0;
        iVar2 = FUN_1004744bf(param_2,0);
        if (iVar2 != 0x400000) goto LAB_1003224e6;
        iVar2 = FUN_10030666b(param_1,&local_228,1);
        if (iVar2 == 0) {
          lVar3 = FUN_100597e36(param_2,&local_228,0);
          if ((lVar3 == 0) ||
             (*(long *)(*(long *)(lVar3 + 0x10) + 0xa8) !=
              *(long *)(*(long *)(param_1 + 0x10) + 0xa8))) goto LAB_10032253a;
        }
        uVar5 = 0;
      }
      else {
        cVar1 = FUN_100474d03(lVar3);
        if (cVar1 == '\0') goto LAB_1003223aa;
        lVar3 = FUN_100597b41(param_2,*(undefined2 *)(*(long *)(param_1 + 0x18) + 2));
        if (lVar3 != 0) goto LAB_1003223aa;
LAB_10032253a:
        uVar5 = 1;
      }
      goto LAB_1003224e6;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_21a = "TrackInfoIsValid(inDestTrackInfo)";
      goto LAB_1003224b5;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_21a = 
      "(inSourceTrackInstance->trackKind == kITFileKind) || (inSourceTrackInstance->trackKind == kITRemoteKind)"
      ;
      goto LAB_1003224b5;
    }
  }
  uVar5 = 0;
  FUN_1001782e9(0,0);
LAB_1003224e6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

