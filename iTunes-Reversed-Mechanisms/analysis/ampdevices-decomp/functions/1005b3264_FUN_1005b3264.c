// name: FUN_1005b3264
// address: 1005b3264

void FUN_1005b3264(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_40 [8];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mDataPacker != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_100262d58(&local_38);
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_1001a7b90(local_40,&local_38);
    FUN_1001a7d28(lVar1 + 0x78,local_40);
    FUN_1001ab240(local_40);
    FUN_1001a8fac(&local_38);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

