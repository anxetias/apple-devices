// name: FUN_1002c4495
// address: 1002c4495

void FUN_1002c4495(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_78 [32];
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001ce44b(&cf_com_apple_iPod,param_2,param_3,local_78);
  if (iVar2 == 0) {
    FUN_100177cff(&local_58);
    local_58 = local_58 >> 0x18 | (local_58 & 0xff0000) >> 8 | (local_58 & 0xff00) << 8 |
               local_58 << 0x18;
    iVar2 = FUN_1001cde12(local_78,0x636f6e6e,0x80,"Last Connect",4,&local_58);
    FUN_1001ce4d7(local_78);
  }
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  lVar4 = FUN_1001723b0(&cf_Devices,&cf_com_apple_iPod,param_2,param_3);
  if (lVar4 == 0) {
    lVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  }
  else {
    lVar5 = FUN_100171413(DAT_1008c4d90,0,lVar4);
  }
  if (lVar5 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "newDevicesDict != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1004ff17a(param_1,lVar5);
    FUN_1001724e6(&cf_Devices,lVar5,&cf_com_apple_iPod,param_2,param_3);
    cVar1 = FUN_100170633(param_2,*(undefined8 *)PTR__kCFPreferencesCurrentUser_10082e108);
    if (cVar1 != '\0') {
      FUN_1001724e6(&cf_com_apple_PreferenceSync_ExcludeAllSyncKeys,
                    *(undefined8 *)PTR__kCFBooleanTrue_10082e038,&cf_com_apple_iPod,param_2,param_3)
      ;
    }
  }
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar5);
  FUN_100159ff2(&cf_com_apple_iPod,param_2,param_3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

