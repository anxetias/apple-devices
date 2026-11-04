// name: FUN_1005479d4
// address: 1005479d4

void FUN_1005479d4(undefined4 *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0x6d703464;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x1ce) = 0;
  param_1[0x1d0] = 0;
  *(undefined8 *)(param_1 + 0x21e) = 0;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  param_1[0x12] = 0;
  *(undefined1 (*) [16])(param_1 + 300) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1b2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1b6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1ba) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1be) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x1c2) = 0;
  *(undefined1 (*) [16])(param_1 + 0x210) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x214) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x218) = (undefined1  [16])0x0;
  *(undefined8 *)((long)param_1 + 0x86d) = 0;
  FUN_100117b9c(param_1 + 0x2a2,0);
  FUN_100117ae8(param_1 + 0x2a3,0,1);
  FUN_100117b9c(param_1 + 0x2a5,0);
  FUN_100117ae8(param_1 + 0x2a6,0,1);
  FUN_100117ae8(param_1 + 0x2b3,0,1);
  *(undefined8 *)(param_1 + 0x3fa) = 0;
  *(undefined8 *)(param_1 + 0x3fc) = 0;
  param_1[0x408] = 0xffffffff;
  param_1[0x409] = 0xffffffff;
  param_1[0x40a] = 0xffffffff;
  param_1[0x40b] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x40c) = 0;
  *(undefined8 *)(param_1 + 0x511) = 0;
  *(undefined8 *)(param_1 + 0x514) = 0;
  *(undefined8 *)(param_1 + 0x516) = 0;
  param_1[0x518] = 0;
  *(undefined8 *)(param_1 + 0x51a) = 0;
  *(undefined8 *)(param_1 + 0x51c) = 0;
  *(undefined8 *)(param_1 + 0x51e) = 0xffffffff;
  param_1[0x520] = 0;
  *(undefined8 *)(param_1 + 0xacd) = 0;
  *(undefined8 *)(param_1 + 0xacf) = 0;
  param_1[0x1878] = 0;
  *(undefined8 *)(param_1 + 0x18fa) = 0;
  *(undefined1 *)(param_1 + 0x18fc) = 0;
  *(undefined8 *)(param_1 + 0x1904) = 0;
  param_1[0x1906] = 0;
  *(undefined8 *)(param_1 + 0x1908) = 0;
  *(undefined8 *)(param_1 + 0x190a) = 0;
  *(undefined8 *)(param_1 + 0x190c) = 0;
  *(undefined8 *)(param_1 + 0x190e) = 0;
  *(undefined8 *)(param_1 + 0x1910) = 0;
  *(undefined8 *)(param_1 + 0x1912) = 0;
  *(undefined8 *)(param_1 + 0x1914) = 0;
  *(undefined8 *)(param_1 + 0x1916) = 0;
  *(undefined8 *)(param_1 + 0x531) = 0;
  *(undefined8 *)(param_1 + 0x533) = 0;
  *(undefined8 *)(param_1 + 0x52e) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x52a) = 0;
  *(undefined8 *)(param_1 + 0x52c) = 0;
  *(undefined8 *)(param_1 + 0x526) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x522) = 0;
  *(undefined8 *)(param_1 + 0x524) = 0;
  *(undefined8 *)(param_1 + 0x1926) = 0;
  param_1[0x1928] = 0;
  param_1[0x1929] = 0;
  *(undefined1 *)(param_1 + 0x192a) = 0;
  *(undefined4 *)((long)param_1 + 0x64a9) = 0;
  *(undefined2 *)((long)param_1 + 0x64ad) = 0x100;
  *(undefined8 *)((long)param_1 + 0x64af) = 0;
  *(undefined8 *)(param_1 + 0x192e) = 0;
  *(undefined8 *)(param_1 + 0x1930) = 0;
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 6) = uVar2;
    *(long *)(param_1 + 8) = param_2;
    ___bzero(param_1 + 0x298,0x4f4);
    *(undefined2 *)(param_1 + 0x1926) = 0xffff;
    *(undefined1 *)((long)param_1 + 0x649a) = 1;
    *(undefined1 (*) [16])(param_1 + 0x3d6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x3da) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x3de) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x3e2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x3e6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x3ea) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x3ee) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x3f2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x3f6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x3fa) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x3fe) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x402) = (undefined1  [16])0x0;
    *(undefined8 *)(param_1 + 0x406) = 0;
    *(undefined8 *)((long)param_1 + 0x649b) = 0;
    *(undefined1 *)((long)param_1 + 0x64a3) = 0;
    FUN_1001c23b3(param_1 + 0x1c4);
    *(undefined1 (*) [16])(param_1 + 0x1ca) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1c6) = (undefined1  [16])0x0;
    ___bzero(param_1 + 0x40f,0x408);
    *(undefined2 *)(param_1 + 0x1879) = 0;
    *(undefined2 *)(param_1 + 0x132) = 0;
    ___bzero(param_1 + 0x13,0x460);
    *(undefined1 (*) [16])(param_1 + 0x20a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x206) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x202) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1fe) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1fa) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1f6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1f2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1ee) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1ea) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1e6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1e2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1de) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1da) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1d6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1d2) = (undefined1  [16])0x0;
    *(undefined8 *)(param_1 + 0x20e) = 0;
    FUN_1003af743(param_1 + 0x535);
    FUN_1003af7fe(param_1 + 0xacd);
    FUN_1003af8bd(param_1 + 0x185f);
    *(undefined1 (*) [16])(param_1 + 0x1874) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1870) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1900) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1922) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x191e) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x191a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1916) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1912) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x190e) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x190a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x1906) = (undefined1  [16])0x0;
    *(undefined8 *)(param_1 + 0x18fd) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

