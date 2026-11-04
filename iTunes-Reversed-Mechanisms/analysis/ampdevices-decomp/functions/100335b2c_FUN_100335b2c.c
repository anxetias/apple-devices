// name: FUN_100335b2c
// address: 100335b2c

undefined8 FUN_100335b2c(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "DulcimerHandlerDataIsValid(handlerData)";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar3 = 0;
      FUN_1001782e9(0,0);
      goto LAB_100335ca5;
    }
  }
  uVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  uVar1 = *(uint *)(param_1 + 0x166d8);
  if ((uVar1 & 1) != 0) {
    FUN_100168746(uVar3,&cf_Media,*(undefined4 *)(param_1 + 0x16708),1);
  }
  if ((uVar1 & 2) != 0) {
    FUN_100168746(uVar3,&cf_Ringtone,*(undefined4 *)(param_1 + 0x16740),1);
  }
  if ((uVar1 & 8) != 0) {
    FUN_100168746(uVar3,&cf_Book,*(undefined4 *)(param_1 + 0x167b0),1);
  }
  if ((uVar1 & 0x10) != 0) {
    FUN_100168746(uVar3,&cf_Application,1,0);
  }
  if ((uVar1 & 0x20) != 0) {
    FUN_100168746(uVar3,&cf_Keybag,1,0);
  }
  if ((uVar1 & 0x40) != 0) {
    FUN_100168746(uVar3,&cf_Photo,1,0);
  }
  if ((char)uVar1 < '\0') {
    FUN_100168746(uVar3,&cf_Data,2,0);
  }
LAB_100335ca5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

