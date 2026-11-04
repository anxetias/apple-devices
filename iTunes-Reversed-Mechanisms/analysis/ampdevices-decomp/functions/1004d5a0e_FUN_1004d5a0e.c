// name: FUN_1004d5a0e
// address: 1004d5a0e

undefined1 * FUN_1004d5a0e(long param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_458 [1056];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "folderSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    puVar4 = (undefined1 *)0xffffffce;
  }
  else {
    iVar2 = FUN_1001888ba(param_1,".Media Preferences.plist",local_458,0);
    if (iVar2 != 0) {
      puVar4 = (undefined1 *)FUN_1001888ba(param_1,".iTunes Preferences.plist",local_458,0);
      if ((int)puVar4 != 0) goto LAB_1004d5b39;
    }
    lVar5 = FUN_10016aa24(DAT_1008c4d90,local_458,0,0);
    if (lVar5 == 0) {
      puVar4 = &DAT_ffffff30;
    }
    else {
      uVar3 = FUN_100167d66(lVar5,&cf_LayoutVersion);
      *param_2 = uVar3;
      FUN_100166f9c(&local_38,lVar5,&cf_GUID);
      param_2 = param_2 + 2;
      FUN_1001b80b2(param_2,&local_38);
      FUN_1001b7a50(&local_38);
      cVar1 = FUN_1001b8428(param_2);
      if (cVar1 != '\0') {
        FUN_1001ea7d8(&local_38);
        FUN_1001b80b2(param_2,&local_38);
        FUN_1001b7a50(&local_38);
      }
      FUN_10017060f(lVar5);
      puVar4 = (undefined1 *)0x0;
    }
  }
LAB_1004d5b39:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

