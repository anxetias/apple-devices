// name: FUN_10046cdda
// address: 10046cdda

undefined8 FUN_10046cdda(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid( inTrackInfo )";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,1);
    FUN_10032f0f2(param_1,0);
  }
  else {
    FUN_1002e4079(&local_50,param_2);
    if (local_50 == 0) {
      if (*(long *)(param_2 + 0x10) == 0) {
        uVar5 = FUN_1001cc310();
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "TrackInfoIsValid(inTrackInfo)";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        FUN_1001782e9(0,0);
        lVar6 = 0;
      }
      else {
        lVar2 = FUN_100481321(param_2,PTR_cf_artwork_data_100844ac0);
        if (lVar2 == 0) {
          lVar6 = 0;
        }
        else {
          lVar3 = _CFDataGetTypeID();
          lVar4 = _CFGetTypeID(lVar2);
          lVar6 = 0;
          if (lVar3 == lVar4) {
            lVar6 = lVar2;
          }
        }
      }
      FUN_1001a790a(param_1,lVar6);
    }
    else {
      FUN_10046cfe6(param_1,*(long *)(param_2 + 0x10),&local_50);
    }
    FUN_1001ab006(&local_50);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

