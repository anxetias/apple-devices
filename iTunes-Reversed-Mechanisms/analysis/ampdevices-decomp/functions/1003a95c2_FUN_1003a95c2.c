// name: FUN_1003a95c2
// address: 1003a95c2

undefined8 FUN_1003a95c2(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = (undefined1 *)FUN_1001c63e1(0x74);
  if (puVar2 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "dataPtr != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffff94;
  }
  else {
    uVar3 = 0;
    FUN_1001e0a25(*(undefined4 *)(param_1 + 0xc),puVar2,0);
    *puVar2 = 0x20;
    FUN_1001e0a25(*(undefined4 *)(param_1 + 0x10),puVar2 + 9,0);
    puVar2[9] = 0x20;
    FUN_1001e0a25(*(undefined4 *)(param_1 + 0x14),puVar2 + 0x12,0);
    puVar2[0x12] = 0x20;
    FUN_1001e094c(*(undefined8 *)(param_1 + 0x18),puVar2 + 0x1b,0);
    puVar2[0x1b] = 0x20;
    FUN_1001e0a25(*(undefined4 *)(param_1 + 0x20),puVar2 + 0x2c,0);
    puVar2[0x2c] = 0x20;
    FUN_1001e0a25(*(undefined4 *)(param_1 + 0x24),puVar2 + 0x35,0);
    puVar2[0x35] = 0x20;
    FUN_1001e0a25(*(undefined4 *)(param_1 + 0x28),puVar2 + 0x3e,0);
    puVar2[0x3e] = 0x20;
    FUN_1001e0a25(*(undefined4 *)(param_1 + 0x2c),puVar2 + 0x47,0);
    puVar2[0x47] = 0x20;
    FUN_1001e0a25(*(undefined4 *)(param_1 + 0x30),puVar2 + 0x50,0);
    puVar2[0x50] = 0x20;
    FUN_1001e0a25(*(undefined4 *)(param_1 + 0x34),puVar2 + 0x59,0);
    puVar2[0x59] = 0x20;
    FUN_1001e0a25(*(undefined4 *)(param_1 + 0x38),puVar2 + 0x62,0);
    puVar2[0x62] = 0x20;
    FUN_1001e0a25(*(undefined4 *)(param_1 + 0x3c),puVar2 + 0x6b,0);
    puVar2[0x6b] = 0x20;
    *param_2 = puVar2;
    *param_3 = 0x74;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

