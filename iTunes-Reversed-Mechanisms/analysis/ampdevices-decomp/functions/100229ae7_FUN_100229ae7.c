// name: FUN_100229ae7
// address: 100229ae7

undefined8 FUN_100229ae7(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = FUN_100229827(0);
  if (local_40 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "spDatabaseDictionary";
LAB_100229be5:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    cVar1 = FUN_100171439(local_40,param_1);
    if (cVar1 != '\0') {
      FUN_100171552(local_40,param_1);
      uVar2 = 0;
      FUN_100229aa0(local_40);
      goto LAB_100229b9f;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "JRCFDictionaryContainsKey(spDatabaseDictionary.get(), firmwareURLCFString)";
      goto LAB_100229be5;
    }
  }
  uVar2 = 0xffffffd5;
  FUN_1001782e9(0,0);
LAB_100229b9f:
  FUN_1001988bc(&local_40);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

