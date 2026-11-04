// name: FUN_1005de826
// address: 1005de826

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1005de826(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar5 = (undefined4 *)FUN_1001c6429(0x8000);
  if (puVar5 == (undefined4 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "buffer != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar7 = 0x70696e66;
    if (param_1 != '\0') {
      uVar7 = 0x73696e66;
    }
    *puVar5 = 0x800000;
    puVar5[1] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar6 = _UNK_10075bea8;
    *(undefined8 *)(puVar5 + 2) = _DAT_10075bea0;
    *(undefined8 *)(puVar5 + 4) = uVar6;
    uVar3 = _UNK_10075bebc;
    uVar2 = _UNK_10075beb8;
    uVar1 = _UNK_10075beb4;
    puVar5[6] = _DAT_10075beb0;
    puVar5[7] = uVar1;
    puVar5[8] = uVar2;
    puVar5[9] = uVar3;
    *(undefined8 *)(puVar5 + 10) = 0x65657266d87f0000;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

