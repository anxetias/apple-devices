// name: FUN_1001bbc1c
// address: 1001bbc1c

undefined8 *
FUN_1001bbc1c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  long local_20;
  
  local_28 = local_f8;
  if (in_AL != '\0') {
    local_c8 = param_1;
    local_b8 = param_2;
    local_a8 = param_3;
    local_98 = param_4;
    local_88 = param_5;
    local_78 = param_6;
    local_68 = param_7;
    local_58 = param_8;
  }
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_9 = 0;
  param_9[1] = 0;
  local_30 = &stack0x00000008;
  local_38 = 0x3000000010;
  local_e8 = param_11;
  local_e0 = param_12;
  local_d8 = param_13;
  local_d0 = param_14;
  FUN_1001bb9b6(local_48);
  FUN_1001b80b2(param_9,local_48);
  FUN_1001b811c(local_48);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

