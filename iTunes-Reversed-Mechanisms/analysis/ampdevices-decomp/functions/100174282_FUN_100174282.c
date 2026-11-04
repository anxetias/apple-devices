// name: FUN_100174282
// address: 100174282

void FUN_100174282(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  char cVar1;
  undefined8 uVar2;
  undefined1 local_e8 [24];
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
  local_d0 = param_12;
  local_c8 = param_13;
  local_c0 = param_14;
  if (param_9 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067ff36(uVar2);
    }
  }
  else {
    if (param_11 != 0) {
      local_28 = local_e8;
      local_30 = &stack0x00000008;
      local_38 = 0x3000000018;
      _CFStringAppendFormatAndArguments();
      goto LAB_100174358;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067fec0(uVar2);
    }
  }
  FUN_1001782e9(0,0);
LAB_100174358:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

