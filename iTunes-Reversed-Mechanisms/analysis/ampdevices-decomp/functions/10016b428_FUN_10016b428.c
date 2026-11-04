// name: FUN_10016b428
// address: 10016b428

undefined8 FUN_10016b428(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  undefined8 local_d8;
  void *pvStack_d0;
  void *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined8 local_94;
  undefined2 local_8c;
  int local_8a;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_b8 = 0;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_d8 = 0;
  pvStack_d0 = (void *)0x0;
  local_b0 = 0x100;
  local_a8 = 0;
  local_a0 = 0;
  iVar2 = FUN_10016bf46(&local_d8,param_1);
  if (iVar2 == 0) {
    if (local_68 == param_2) {
      uVar3 = FUN_1001705fc(local_60);
      goto LAB_10016b54e;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_98 = local_98 & 0xffff0000;
      pcVar4 = "json> Parsed root is not of expected type.";
      uVar5 = 2;
      goto LAB_10016b547;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_98 = 0x8000200;
      local_8c = 0x400;
      pcVar4 = "json> Parsing failed at offset %zu with code %u.";
      uVar5 = 0x12;
      local_94 = extraout_RDX;
      local_8a = iVar2;
LAB_10016b547:
      __os_log_impl(0x100000000,uVar3,0x10,pcVar4,&local_98,uVar5);
    }
  }
  uVar3 = 0;
LAB_10016b54e:
  _free(local_c8);
  if (pvStack_d0 != (void *)0x0) {
    operator_delete(pvStack_d0);
  }
  FUN_10016d798(&local_78);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

