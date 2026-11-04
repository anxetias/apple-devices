// name: FUN_1001bb630
// address: 1001bb630

undefined8 *
FUN_1001bb630(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9,long *param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined2 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  long local_28;
  
  local_38 = local_108;
  if (in_AL != '\0') {
    local_d8 = param_1;
    local_c8 = param_2;
    local_b8 = param_3;
    local_a8 = param_4;
    local_98 = param_5;
    local_88 = param_6;
    local_78 = param_7;
    local_68 = param_8;
  }
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_9 = 0;
  param_9[1] = 0;
  local_40 = &stack0x00000008;
  local_48 = 0x3000000010;
  lVar3 = *param_10;
  local_f8 = param_11;
  local_f0 = param_12;
  local_e8 = param_13;
  local_e0 = param_14;
  if (lVar3 == 0) {
    puVar1 = &DAT_100711b00;
    if (param_10[1] == 0) goto LAB_1001bb6cd;
    FUN_1001b8454(param_10);
    lVar3 = *param_10;
    if (lVar3 == 0) goto LAB_1001bb6cd;
  }
  puVar1 = (undefined2 *)(lVar3 + 0xc);
LAB_1001bb6cd:
  uVar2 = FUN_1001b8378(param_10);
  lVar3 = FUN_1001735df(0,puVar1,uVar2,*(undefined8 *)PTR__kCFAllocatorNull_10082e028);
  if (lVar3 != 0) {
    FUN_1001bb9b6(local_58,lVar3,&local_48);
    FUN_1001b80b2(param_9,local_58);
    FUN_1001b811c(local_58);
    FUN_10017060f(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_9;
}

