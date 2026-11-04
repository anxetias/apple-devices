// name: FUN_1002e4e69
// address: 1002e4e69

uint FUN_1002e4e69(long param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 local_50 [8];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = FUN_100481321(param_1,PTR_cf_artwork_url_100844ab8);
    if (lVar3 != 0) {
      lVar4 = _CFStringGetTypeID();
      lVar5 = _CFGetTypeID(lVar3);
      lVar7 = 0;
      if (lVar4 == lVar5) {
        lVar7 = lVar3;
      }
      goto LAB_1002e4ee1;
    }
  }
  lVar7 = 0;
LAB_1002e4ee1:
  FUN_1001aaef6(local_50,lVar7);
  uVar2 = FUN_1001a85de(param_2,local_50);
  FUN_1001ab006(local_50);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2 ^ 1;
}

