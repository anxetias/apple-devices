// name: FUN_100322110
// address: 100322110

int FUN_100322110(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100295c56(param_2);
  if (param_1 == 0) {
LAB_10032220b:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackDataIsValid(inTrackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10032220b;
    }
    iVar4 = 0;
    if ((*(long *)(param_1 + 0x2da0) == 0) && (iVar2 = FUN_100625072(param_1 + 0x2da0), iVar2 != 0))
    {
      if (DAT_1008c7d30 != -1) {
        _dispatch_once(&DAT_1008c7d30,&PTR___NSConcreteGlobalBlock_100871100);
      }
      uVar3 = DAT_1008c7d28;
      cVar1 = _os_log_type_enabled(DAT_1008c7d28,0x10);
      iVar4 = iVar2;
      if (cVar1 != '\0') {
        local_48 = 0x4000100;
        local_44 = (char *)CONCAT44(local_44._4_4_,iVar2);
        __os_log_impl(0x100000000,uVar3,0x10,
                      "**ERROR**: EnsureTrackDataSocialProfileLookup - SocialProfileLookup::Create() failed! status:%d"
                      ,&local_48,8);
      }
    }
    FUN_100203686(param_2,param_1 + 0x2da0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

