// name: FUN_1004ac8a7
// address: 1004ac8a7

char FUN_1004ac8a7(long param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DownloadItem_IsValid(inItem)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    cVar1 = '\0';
  }
  else {
    bVar3 = param_2 != '\0';
    cVar1 = bVar3;
    if ((param_1 != 0) && (cVar1 = bVar3 + '\x10', *(char *)(param_1 + 0x128) != '\x13')) {
      cVar1 = bVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar1;
}

