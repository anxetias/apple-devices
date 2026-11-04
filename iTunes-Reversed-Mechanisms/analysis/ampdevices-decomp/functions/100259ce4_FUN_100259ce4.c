// name: FUN_100259ce4
// address: 100259ce4

undefined4
FUN_100259ce4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10022117b(param_1,"BuildManifest.plist",0);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "manifestDictionary != nullptr";
LAB_100259e0a:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar4 = FUN_100222261(lVar3,param_3,param_4,param_5);
    if (lVar4 != 0) {
      uVar2 = FUN_100255870(param_2,param_3,param_4,lVar4,param_5);
      goto LAB_100259dbc;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "requiredMobileDeviceVersionString != nullptr";
      goto LAB_100259e0a;
    }
  }
  uVar2 = 0;
  FUN_1001782e9(0,0);
LAB_100259dbc:
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

