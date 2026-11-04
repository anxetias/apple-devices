// name: FUN_1004fa9ac
// address: 1004fa9ac

undefined8 FUN_1004fa9ac(long param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100266a70(*(undefined8 *)(param_1 + 0x66d8));
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    cVar1 = FUN_100266b26(*(undefined8 *)(param_1 + 0x66d8));
    bVar3 = cVar1 == '\0';
  }
  if (param_2 < *(uint *)(param_1 + 0x7e20)) {
    FUN_100506c08(param_2,&local_238);
    uVar2 = FUN_100243fb1(param_1 + 0x7a00,&local_238,bVar3,
                          param_1 + (ulong)param_2 * 0x420 + 0x7e28);
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "folderIndex < handlerData->numMusicGroups";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

