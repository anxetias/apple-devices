// name: FUN_100472a20
// address: 100472a20

undefined8 FUN_100472a20(long param_1,long param_2,long param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    uVar5 = 0;
    if (*(long *)(param_1 + 0x188) != param_3 || *(long *)(param_1 + 0x180) != param_2) {
      if (*(long *)(param_1 + 0x188) != 0) {
        lVar3 = FUN_100306c68();
        if (lVar3 != param_1) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = 
            "trackData->sourcePersistentIDMap.get(trackInfo->sourceTrackPersistentID) == trackInfo";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_100472798(lVar1 + 0x25c0,*(undefined8 *)(param_1 + 0x188));
      }
      *(long *)(param_1 + 0x180) = param_2;
      *(long *)(param_1 + 0x188) = param_3;
      if (param_3 != 0) {
        FUN_100401874(lVar1 + 0x25c0,param_3,param_1);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

