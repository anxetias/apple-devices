// name: FUN_1002ff308
// address: 1002ff308

uint FUN_1002ff308(long param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  LOCK();
  puVar1 = (uint *)(param_1 + 0x8c);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  FUN_1002f976a(param_1,0xf);
  if (9999999 < uVar2) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "sequenceID < 10000000";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

