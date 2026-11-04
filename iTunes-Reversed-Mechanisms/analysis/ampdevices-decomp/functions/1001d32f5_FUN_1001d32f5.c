// name: FUN_1001d32f5
// address: 1001d32f5

undefined4
FUN_1001d32f5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,char *param_12,
             undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined4 uVar1;
  char *pcVar2;
  undefined1 local_e8 [32];
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
  long local_20;
  
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
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_30 = &stack0x00000008;
  local_38 = 0x3000000020;
  local_c8 = param_13;
  local_c0 = param_14;
  pcVar2 = _sqlite3_vmprintf(param_12,&local_38);
  if (pcVar2 == (char *)0x0) {
    uVar1 = 0xffffff94;
  }
  else {
    uVar1 = FUN_1001d302b(param_9,pcVar2,0,0);
    _sqlite3_free(pcVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

