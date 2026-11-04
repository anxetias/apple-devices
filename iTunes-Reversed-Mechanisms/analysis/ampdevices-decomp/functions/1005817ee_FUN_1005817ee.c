// name: FUN_1005817ee
// address: 1005817ee

int FUN_1005817ee(undefined8 param_1,uint param_2,long param_3,long param_4,short *param_5,
                 undefined8 param_6,undefined8 *param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  short local_510 [16];
  undefined4 local_4f0 [2];
  char local_4e8;
  long local_4c8;
  short *local_4c0;
  undefined8 local_4b8;
  undefined6 uStack_4b0;
  undefined2 local_4aa;
  undefined6 uStack_4a8;
  undefined4 local_4a0;
  undefined2 uStack_49c;
  undefined1 local_49a;
  undefined8 local_498;
  undefined8 local_490;
  undefined1 uStack_488;
  undefined7 uStack_487;
  undefined1 uStack_480;
  undefined8 uStack_47f;
  undefined8 local_470;
  long local_468;
  undefined8 local_460;
  short *local_458;
  undefined8 local_450;
  undefined8 local_448;
  uint local_43c;
  undefined4 local_438;
  char *local_434;
  undefined2 local_42c;
  int local_42a;
  short local_238 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  local_4aa = 0;
  local_4a0 = 0;
  uStack_49c = 0;
  local_49a = 0;
  local_498 = 0x3ff0000000000000;
  local_490 = 0;
  uStack_488 = 0;
  uStack_487 = 0;
  uStack_480 = 0;
  uStack_47f = 0;
  local_470 = param_6;
  local_43c = param_2;
  FUN_10031d3e5(*(undefined4 *)(param_4 + 0x24),local_238);
  local_238[0] = 0;
  local_4c0 = param_5;
  if ((((param_5 == (short *)0x0) || (local_450 = 0, *param_5 == 0)) &&
      (local_450 = 0, *(char *)(param_4 + 2) != '\0')) && (*(long *)(param_4 + 8) != 0)) {
    local_458 = param_5;
    cVar1 = FUN_10028a32b(*(long *)(param_4 + 8),0,&local_448);
    local_468 = param_3;
    local_460 = param_1;
    if (cVar1 == '\0') {
      FUN_1001cf1a0(*(undefined8 *)(param_4 + 8));
      local_448 = *(undefined8 *)(param_4 + 8);
    }
    FUN_1001cf3f5(local_448);
    iVar3 = FUN_1001d0b82(local_448);
    if (iVar3 != 0) {
      iVar5 = 0;
      do {
        iVar2 = FUN_1001cf495(local_448,iVar5,local_4f0);
        if (iVar2 != 0) {
          if (iVar2 != -0x80) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_438 = 0x8220202;
              local_434 = "Assertion failure";
              local_42c = 0x400;
              local_42a = iVar2;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_438,0x12);
            }
          }
          break;
        }
        if ((local_4e8 == '\0') && (FUN_10031c728(local_4f0[0],local_510), local_510[0] == 3)) {
          FUN_1001d1e7a(local_4f0,&local_438);
          if (local_238[0] != 0) {
            local_238[0] = 0;
            break;
          }
          FUN_1001e1c39(&local_438,local_238);
        }
        iVar5 = iVar5 + 1;
      } while (iVar3 != iVar5);
    }
    FUN_1001cf778(local_448);
    FUN_1001cf5c9(local_448);
    param_3 = local_468;
    param_1 = local_460;
    local_4c0 = local_458;
    if (local_238[0] != 0) {
      local_4c0 = local_238;
    }
  }
  local_4b8 = local_470;
  if (*(char *)(param_4 + 3) != '\0') {
    local_49a = 1;
  }
  local_4c8 = param_3;
  iVar3 = FUN_1002e2674(param_1,local_43c & 0xff,&local_4c8,&local_450);
  if ((iVar3 == 0) && (FUN_100581b2a(local_450,param_4,1), param_3 != 0)) {
    FUN_1005821b3(local_450,(*(byte *)(param_3 + 0x298) & 4) >> 2);
  }
  if (param_7 != (undefined8 *)0x0) {
    *param_7 = local_450;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

