// name: FUN_10020aa8f
// address: 10020aa8f

undefined8 FUN_10020aa8f(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001f7388(param_1,1);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      uVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      lVar4 = FUN_10020ac03(0,0);
      if (lVar4 != 0) {
        FUN_100171502(uVar3,&cf_ApplicationSINF,lVar4);
        FUN_10017060f(lVar4);
      }
      iVar2 = FUN_1001fbb12(0,"iTunesMetadata.plist",&local_48);
      if (iVar2 == 0) {
        FUN_100171502(uVar3,&cf_iTunesMetadata,CONCAT44(uStack_44,local_48));
        FUN_10017060f(CONCAT44(uStack_44,local_48));
      }
      if (param_2 != '\0') {
        FUN_100171502(uVar3,&cf_SuppressNotification,*(undefined8 *)PTR__kCFBooleanTrue_10082e038);
      }
      FUN_1001f7652(0);
      goto LAB_10020ab9c;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x400;
      local_3a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  uVar3 = 0;
LAB_10020ab9c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

