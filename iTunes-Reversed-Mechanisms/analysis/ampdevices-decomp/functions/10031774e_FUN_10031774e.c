// name: FUN_10031774e
// address: 10031774e

int FUN_10031774e(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined1 param_9,undefined1 param_10,undefined8 param_11)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = param_1;
  local_60 = param_6;
  FUN_1001c62d9(local_a0,0x38);
  local_72 = 1;
  local_88 = local_60;
  local_80 = param_7;
  local_78 = param_8;
  local_74 = param_9;
  local_73 = param_10;
  local_70 = param_11;
  local_a0[0] = param_2;
  local_9c = param_3;
  local_98 = param_4;
  local_90 = param_5;
  iVar2 = FUN_1002f7c7e(local_68,0x7464666c,local_a0);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

