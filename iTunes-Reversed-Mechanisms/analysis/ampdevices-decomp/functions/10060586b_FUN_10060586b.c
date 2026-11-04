// name: FUN_10060586b
// address: 10060586b

uint FUN_10060586b(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_48 [16];
  undefined4 local_38;
  uint local_34;
  undefined2 local_30;
  undefined8 local_2e;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_1004e7c76();
  uVar4 = 0;
  if ((uVar3 >> 0x13 & 1) != 0) {
    uVar3 = (uint)(*(char *)(param_1 + 0x39c) != '\0') << 7;
    uVar4 = uVar3 | 0x101;
    if (*(char *)(param_1 + 0x37c) != '\0') {
      uVar4 = uVar3 | 0x103;
    }
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    FUN_1006064a6(local_48,uVar4);
    local_2e = FUN_1001b83ae(local_48);
    local_38 = 0x4000202;
    local_30 = 0x822;
    local_34 = uVar4;
    __os_log_impl(0x100000000,uVar1,1,"sync> valid reverse sync options = 0x%08X (%{public}s)",
                  &local_38,0x12);
    FUN_1001b7a50(local_48);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

