// name: FUN_10014a926
// address: 10014a926

void FUN_10014a926(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint local_9f8 [624];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100147c34(&local_30);
  uVar4 = std::random_device::operator()((random_device *)&local_30);
  local_9f8[0] = (uint)uVar4;
  lVar6 = 1;
  do {
    uVar2 = ((uint)(uVar4 >> 0x1e) & 3 ^ (uint)uVar4) * 0x6c078965 + (int)lVar6;
    uVar4 = (ulong)uVar2;
    local_9f8[lVar6] = uVar2;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x270);
  local_38 = 0;
  std::random_device::~random_device((random_device *)&local_30);
  local_30 = 0xffffffff00000000;
  uVar3 = FUN_100147d32(&local_30,local_9f8,&local_30);
  uVar5 = FUN_100135270();
  cVar1 = _os_log_type_enabled(uVar5,0);
  if (cVar1 != '\0') {
    local_28 = 0x4000100;
    local_24 = uVar3;
    __os_log_impl(0x100000000,uVar5,0,"Initial ID for store services requests will be %u",&local_28,
                  8);
  }
  DAT_1008c4d50 = uVar3;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

