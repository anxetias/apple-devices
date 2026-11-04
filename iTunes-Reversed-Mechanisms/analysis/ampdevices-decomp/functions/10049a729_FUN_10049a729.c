// name: FUN_10049a729
// address: 10049a729

uint * FUN_10049a729(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  uint *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar6 = 0;
    uVar2 = FUN_100496392(0);
    iVar4 = 8;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x20);
    uVar2 = FUN_100496392();
    iVar4 = *(int *)(param_1 + 0x20) * 8 + 8;
  }
  puVar3 = (uint *)FUN_1001c6429(iVar4);
  if (puVar3 == (uint *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "lookupTable != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *puVar3 = uVar6;
    if (uVar6 != 0) {
      uVar5 = 0;
      do {
        *(undefined8 *)(puVar3 + uVar5 * 2 + 2) = uVar2;
        uVar2 = FUN_100496449(uVar2);
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar3;
}

