// name: FUN_1005a98e6
// address: 1005a98e6

ulong FUN_1005a98e6(short *param_1)

{
  byte bVar1;
  char cVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte local_328 [4];
  char *local_324;
  undefined2 local_31c;
  char *local_31a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (short *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_328[0] = 2;
      local_328[1] = 2;
      local_328[2] = 0x22;
      local_328[3] = 8;
      local_324 = "Assertion failure";
      local_31c = 0x822;
      local_31a = "ustrValue != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_328,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else if (*param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0xcbf29ce484222325;
    pbVar6 = local_328;
    FUN_1001e5b77(param_1,pbVar6,0x300);
    sVar3 = _strlen((char *)pbVar6);
    if (0 < (long)sVar3) {
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar5 = uVar5 * 0x100000001b3 ^ (ulong)bVar1;
      } while (pbVar6 < local_328 + sVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

