// name: FUN_10042a707
// address: 10042a707

int FUN_10042a707(undefined8 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long local_378 [2];
  int local_364;
  ulong local_260;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  int local_22a;
  long local_38;
  
  uVar7 = (ulong)param_2;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (**(code **)(*(long *)*param_1 + 0x168))();
  if (iVar2 == 2) {
LAB_10042a755:
    ___bzero(local_378,0x118);
    if (param_2 != 0) {
      do {
        uVar5 = 0x200;
        if ((uint)uVar7 < 0x200) {
          uVar5 = uVar7;
        }
        local_260 = uVar5;
        iVar2 = (**(code **)(*(long *)*param_1 + 0xb0))
                          ((long *)*param_1,&local_260,&local_238,1,local_378);
        if (iVar2 != 0) {
          if (iVar2 == -0x80) goto LAB_10042a8f7;
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_10042a8f7;
          puVar4 = &local_258;
          local_258 = 0x8220202;
          local_254 = "Assertion failure";
          local_24c = 0x400;
          local_24a = iVar2;
          goto LAB_10042a94d;
        }
        do {
        } while (local_364 == 1);
        iVar2 = -0x27;
        if ((local_364 != 0) || (local_260 != uVar5)) goto LAB_10042a8f7;
        uVar6 = (uint)uVar7 - (int)uVar5;
        uVar7 = (ulong)uVar6;
      } while (uVar6 != 0);
    }
  }
  else {
    iVar2 = (**(code **)(*(long *)*param_1 + 0x168))();
    if (iVar2 == 4) goto LAB_10042a755;
    iVar2 = (**(code **)(*(long *)*param_1 + 0xf8))((long *)*param_1,local_378);
    if (iVar2 == -0x80) goto LAB_10042a8f7;
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') goto LAB_10042a8f7;
      puVar4 = &local_238;
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x400;
      local_22a = iVar2;
LAB_10042a94d:
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",puVar4,0x12);
      goto LAB_10042a8f7;
    }
    iVar2 = (**(code **)(*(long *)*param_1 + 0xf0))((long *)*param_1,uVar7 + local_378[0]);
    if (iVar2 == -0x80) goto LAB_10042a8f7;
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') goto LAB_10042a8f7;
      puVar4 = &local_238;
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x400;
      local_22a = iVar2;
      goto LAB_10042a94d;
    }
  }
  iVar2 = 0;
LAB_10042a8f7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

