// name: FUN_1004c6ac1
// address: 1004c6ac1

undefined8
FUN_1004c6ac1(short param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined2 *param_5,undefined2 *param_6)

{
  long lVar1;
  undefined2 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined2 *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 != (undefined2 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined2 *)0x0) {
    *param_6 = 0;
  }
  local_70 = param_4;
  local_68 = param_3;
  iVar4 = FUN_1004c6512(&local_88);
  if (iVar4 != 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = iVar4;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    uVar5 = 0;
    goto LAB_1004c6c22;
  }
  uVar5 = 0;
  local_60 = param_6;
  FUN_1004c5c38(*local_88,(int)param_1,param_2,local_68,local_70,0,0,0);
  puVar2 = local_60;
  plVar6 = (long *)*local_88;
  lVar1 = plVar6[4];
  if ((short)((short)((uint)((int)plVar6[5] - (int)lVar1) >> 4) * -0x5555 +
             (short)((uint)((int)plVar6[2] - (int)plVar6[1]) >> 4) * -0x5555) < 1) {
LAB_1004c6c0d:
    (**(code **)(*plVar6 + 8))();
    *local_88 = 0;
  }
  else {
    lVar7 = plVar6[1];
    if (plVar6[5] != lVar1) {
      lVar7 = lVar1;
    }
    if (lVar7 == 0) {
      uVar5 = 1;
      goto LAB_1004c6c0d;
    }
    FUN_1001b7a5c(&local_58,lVar7);
    FUN_1004c67d2(local_80,lVar7);
    if (param_5 != (undefined2 *)0x0) {
      FUN_1001bb41a(&local_58,param_5);
    }
    if (puVar2 != (undefined2 *)0x0) {
      FUN_1001bb41a(local_80,puVar2);
    }
    FUN_1001b7a50(local_80);
    FUN_1001b7a50(&local_58);
    plVar6 = (long *)*local_88;
    uVar5 = 1;
    if (plVar6 != (long *)0x0) goto LAB_1004c6c0d;
  }
  FUN_1001c64c1(local_88);
LAB_1004c6c22:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

