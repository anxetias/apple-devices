// name: FUN_1005de37b
// address: 1005de37b

undefined8 FUN_1005de37b(long param_1,ulong param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar3 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  if (param_1 + (ulong)uVar3 * 4 + 0x10 < param_2) {
    if (uVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      lVar4 = 0;
      do {
        uVar5 = *(uint *)(param_1 + 0x10 + lVar4 * 4);
        uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) +
                param_3;
        *(uint *)(param_1 + 0x10 + lVar4 * 4) =
             uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 * 0x1000000;
        lVar4 = lVar4 + 1;
      } while (uVar3 != (uint)lVar4);
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "buffer + (numEntries * sizeof(SInt32)) < bufferEnd";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

