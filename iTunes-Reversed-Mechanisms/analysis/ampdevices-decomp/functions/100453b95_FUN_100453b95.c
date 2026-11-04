// name: FUN_100453b95
// address: 100453b95

undefined4
FUN_100453b95(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
             long param_5)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "outRootMediaGroup != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    lVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (param_2,PTR_s_objectForKey__10088be28,&cf_com_apple_Photos);
    if (lVar3 == 0) {
      uVar2 = 0x6ba;
    }
    else {
      (*(code *)PTR__objc_retain_10082c7b8)(lVar3);
      uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                        (param_1,PTR_s_copyRootMediaGroup_fromMediaSour_10088d2e8,param_3,lVar3,
                         param_5,param_4,0);
    }
    (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

