// name: FUN_1004d5bc0
// address: 1004d5bc0

int FUN_1004d5bc0(long param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  char *local_45a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_468 = 0x8220202;
      local_464 = "Assertion failure";
      local_45c = 0x822;
      local_45a = "folderSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_468,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1004d5d5f;
  }
  iVar2 = FUN_1001888ba(param_1,".Media Preferences.plist",&local_468,0);
  if (iVar2 == 0) {
    lVar3 = FUN_10016aa24(DAT_1008c4d90,&local_468,2,0);
    if (lVar3 == 0) goto LAB_1004d5c06;
LAB_1004d5cb8:
    FUN_100168746(lVar3,&cf_LayoutVersion,*param_2,1);
    FUN_10016865a(lVar3,&cf_GUID,param_2 + 2,1);
    iVar2 = FUN_10016a60e(lVar3,param_1,".Media Preferences.plist",&local_468,0,100,0);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        FUN_100186d13(&local_468,1);
        iVar2 = 0;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
  }
  else {
LAB_1004d5c06:
    lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar3 != 0) goto LAB_1004d5cb8;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "dictionary != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  FUN_10017060f(lVar3);
LAB_1004d5d5f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

