// name: FUN_1005c81f5
// address: 1005c81f5

ulong FUN_1005c81f5(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_4b8;
  char *local_4b4;
  undefined2 local_4ac;
  uint local_4aa;
  undefined1 local_498 [36];
  uint local_474;
  undefined4 local_468;
  undefined2 uStack_464;
  undefined2 uStack_462;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1001c62d9(local_498,0x460);
  uVar4 = FUN_1001e96d3(&local_48,0,0);
  uVar2 = (uint)uVar4;
  if (uVar2 == 0xffffff80) goto LAB_1005c83c8;
  if (uVar2 != 0) {
    uVar4 = uVar4 & 0xffffffff;
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4b8 = 0x8220202;
      local_4b4 = "Assertion failure";
      local_4ac = 0x400;
      local_4aa = uVar2;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_4b8,0x12);
    }
    goto LAB_1005c83c8;
  }
  uVar2 = FUN_1005c726a(param_1,0,param_2,param_3,param_4,FUN_1005c861c,local_498,1);
  if (uVar2 == 0xffffff80) goto switchD_1005c82d8_caseD_2;
  if (uVar2 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
joined_r0x0001005c833b:
    if (cVar1 != '\0') {
      local_4ac = 0x400;
      local_4b4 = "Assertion failure";
      local_4b8 = 0x8220202;
      local_4aa = uVar2;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_4b8,0x12);
    }
    goto switchD_1005c82d8_caseD_2;
  }
  uVar2 = FUN_1001e9afc(&local_48);
  if (uVar2 == 0xffffff80) goto switchD_1005c82d8_caseD_2;
  if (uVar2 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    goto joined_r0x0001005c833b;
  }
  uVar2 = local_474;
  switch(param_3) {
  case 1:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1c:
    *param_5 = CONCAT26(uStack_462,CONCAT24(uStack_464,local_468));
    break;
  case 5:
    param_5[4] = local_448;
    param_5[5] = uStack_440;
    param_5[2] = local_458;
    param_5[3] = uStack_450;
    goto LAB_1005c851d;
  case 6:
    *(undefined2 *)((long)param_5 + 4) = uStack_464;
    *(undefined4 *)param_5 = local_468;
    break;
  case 7:
LAB_1005c851d:
    *(undefined4 *)param_5 = local_468;
    *(uint *)((long)param_5 + 4) = CONCAT22(uStack_462,uStack_464);
    *(undefined4 *)(param_5 + 1) = uStack_460;
    *(undefined4 *)((long)param_5 + 0xc) = uStack_45c;
    break;
  case 0xe:
    *(undefined1 *)param_5 = (undefined1)local_468;
    break;
  case 0x15:
    param_5[10] = local_418;
    param_5[8] = local_428;
    param_5[9] = uStack_420;
    param_5[6] = local_438;
    param_5[7] = uStack_430;
    param_5[4] = local_448;
    param_5[5] = uStack_440;
    param_5[2] = local_458;
    param_5[3] = uStack_450;
    *param_5 = CONCAT26(uStack_462,CONCAT24(uStack_464,local_468));
    param_5[1] = CONCAT44(uStack_45c,uStack_460);
    break;
  case 0x1a:
    _memcpy(param_5,&local_468,0x420);
  }
switchD_1005c82d8_caseD_2:
  uVar3 = FUN_1001e9bb5(&local_48);
  if ((uVar3 != 0xffffff80) && (uVar3 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4b8 = 0x8220202;
      local_4b4 = "Assertion failure";
      local_4ac = 0x400;
      local_4aa = uVar3;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_4b8,0x12);
    }
  }
  uVar4 = (ulong)uVar2;
LAB_1005c83c8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

