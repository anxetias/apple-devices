// name: FUN_1001bb78a
// address: 1001bb78a

undefined8
FUN_1001bb78a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  long local_18;
  
  local_28 = local_e8;
  if (in_AL != '\0') {
    local_b8 = param_1;
    local_a8 = param_2;
    local_98 = param_3;
    local_88 = param_4;
    local_78 = param_5;
    local_68 = param_6;
    local_58 = param_7;
    local_48 = param_8;
  }
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_30 = &stack0x00000008;
  local_38 = 0x3000000010;
  local_d8 = param_11;
  local_d0 = param_12;
  local_c8 = param_13;
  local_c0 = param_14;
  FUN_1001bbb94(param_9);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return param_9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

