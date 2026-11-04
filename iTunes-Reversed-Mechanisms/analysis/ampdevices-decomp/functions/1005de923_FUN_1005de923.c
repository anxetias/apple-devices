// name: FUN_1005de923
// address: 1005de923

uint * FUN_1005de923(void)

{
  char cVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint *in_R8;
  int in_R9D;
  uint uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = (uint *)FUN_1005de2fc();
  if (puVar2 == (uint *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "foundAtom != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar4 = in_R9D + *in_R8;
    *in_R8 = uVar4;
    *puVar2 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000;
    uVar4 = in_R8[1];
    puVar2[1] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

