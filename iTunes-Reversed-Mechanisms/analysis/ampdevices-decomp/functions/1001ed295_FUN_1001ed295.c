// name: FUN_1001ed295
// address: 1001ed295

int FUN_1001ed295(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int local_fc;
  undefined8 local_f8 [2];
  long local_e8 [4];
  long *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 local_78;
  undefined8 local_70;
  int *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c8 = (long *)0x0;
  local_f8[0] = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_98 = (code *)0x0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1001c62d9(local_f8,0xc0);
  local_98 = FUN_1001ed46d;
  local_68 = &local_fc;
  local_78 = param_2;
  local_70 = param_3;
  iVar2 = FUN_1001e8dd6(&local_60,0,0);
  local_fc = iVar2;
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      local_fc = FUN_1001ecff1(param_1,local_f8);
      if ((local_fc == 0) && (iVar2 = FUN_1001e91e4(&local_60,param_4), iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006c4bff(uVar3);
        }
        FUN_1001782e9(0,0);
        local_fc = iVar2;
      }
      FUN_1001e9587(&local_60);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c4c75(iVar2,uVar3);
      }
    }
  }
  iVar2 = local_fc;
  if (local_c8 == local_e8) {
    lVar4 = 0x20;
  }
  else {
    lVar4 = 0x28;
    if (local_c8 == (long *)0x0) goto LAB_1001ed40b;
  }
  (**(code **)(*local_c8 + lVar4))();
LAB_1001ed40b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

