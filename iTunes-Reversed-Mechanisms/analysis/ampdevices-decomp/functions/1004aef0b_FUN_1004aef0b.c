// name: FUN_1004aef0b
// address: 1004aef0b

undefined4 FUN_1004aef0b(undefined8 param_1,long param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626(param_2);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DownloadItem_IsValid(inItem)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0x1f49;
  }
  else {
    if (*(long *)(param_2 + 0x28) != 0) {
      uVar2 = FUN_1004af08a(*(long *)(param_2 + 0x28),param_2,param_3 | 0x20000000);
      FUN_1004aebc3(param_1);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        return uVar2;
      }
      goto LAB_1004af085;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "queue != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
LAB_1004af085:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

