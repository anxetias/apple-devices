// name: FUN_100314633
// address: 100314633

uint FUN_100314633(long param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (lVar1 = *(long *)(param_1 + 8), lVar1 == 0)) ||
     (*(long *)(lVar1 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar1 + 0xd8) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)((*(byte *)(lVar1 + 0xc2) & 0x10) == 0);
    }
    uVar2 = uVar5 + 4;
    if (*(int *)(lVar1 + 0xdc) == 0) {
      uVar2 = uVar5;
    }
    uVar5 = uVar2 + 0x40000000;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      uVar5 = uVar2;
    }
    uVar2 = uVar5 + 0x200000;
    if (*(int *)(lVar1 + 0xec) == 0) {
      uVar2 = uVar5;
    }
    uVar5 = uVar2 | 8;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      uVar5 = uVar2;
    }
    uVar2 = uVar5 | 0x10000000;
    if (*(int *)(lVar1 + 0xe8) == 0) {
      uVar2 = uVar5;
    }
    uVar5 = uVar2 | 0x10;
    if (*(int *)(lVar1 + 0xf0) == 0) {
      uVar5 = uVar2;
    }
    uVar2 = uVar5 | 0x20;
    if (*(int *)(lVar1 + 0xf4) == 0) {
      uVar2 = uVar5;
    }
    uVar5 = uVar2 | 0x40;
    if (*(short *)(lVar1 + 0x136) == 0) {
      uVar5 = uVar2;
    }
    uVar2 = uVar5 | 0x800000;
    if (*(short *)(lVar1 + 0x13a) == 0) {
      uVar2 = uVar5;
    }
    uVar5 = uVar2 | 0x80;
    if (*(short *)(lVar1 + 0x142) == 0) {
      uVar5 = uVar2;
    }
    uVar2 = uVar5 | 0x8000000;
    if (*(short *)(lVar1 + 0x15c) == 0) {
      uVar2 = uVar5;
    }
    uVar5 = uVar2 | 0x100;
    if (*(short *)(lVar1 + 0x12a) == 0) {
      uVar5 = uVar2;
    }
    uVar2 = uVar5 | 0x200;
    if (*(int *)(lVar1 + 0xf8) == 0) {
      uVar2 = uVar5;
    }
    uVar5 = uVar2 | 0x400;
    if (*(int *)(lVar1 + 0xfc) == 0) {
      uVar5 = uVar2;
    }
    uVar2 = uVar5 | 0x1000;
    if (*(int *)(*(long *)(lVar1 + 0x80) + 4) == 0) {
      uVar2 = uVar5;
    }
    uVar6 = uVar2 | 0x2000;
    if (*(int *)(*(long *)(lVar1 + 0x80) + 8) == 0) {
      uVar6 = uVar2;
    }
    uVar5 = uVar6 | 0x1000000;
    if (*(char *)(lVar1 + 300) == '\0') {
      uVar5 = uVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

