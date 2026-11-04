// name: FUN_10024eaa7
// address: 10024eaa7

ulong FUN_10024eaa7(ulong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int)param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      puVar5 = &local_58;
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      pcVar3 = "familyID != 0";
LAB_10024eb95:
      *(char **)((long)puVar5 + 0xe) = pcVar3;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",puVar5,0x16);
    }
  }
  else {
    cVar1 = FUN_100167064(param_2,&cf_BuildVersion,&local_58,0x20);
    if (cVar1 != '\0') {
      cVar1 = FUN_1004ff954(param_1 & 0xffffffff,&local_58);
      uVar4 = CONCAT71((int7)(param_1 >> 8),cVar1 != '\0') & 0xffffffff;
      goto LAB_10024eb58;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      puVar5 = &local_38;
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      pcVar3 = 
      "JRCFDictionaryGetCString(softwareDictionary, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"BuildVersion\" \"\")), buildVersionCString, sizeof(buildVersionCString))"
      ;
      goto LAB_10024eb95;
    }
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_10024eb58:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

