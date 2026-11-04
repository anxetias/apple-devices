// name: FUN_10048fb22
// address: 10048fb22

undefined4 FUN_10048fb22(int *param_1,short *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_288;
  char *local_284;
  undefined2 local_27c;
  undefined2 local_27a;
  undefined6 uStack_278;
  undefined2 uStack_272;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined1 local_24a [32];
  byte local_22a;
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10048fbdb:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_288 = 0x8220202;
      local_284 = "Assertion failure";
      local_27c = 0x822;
      local_27a = 0xa159;
      uStack_278 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_288,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_288 = 0x8220202;
        local_284 = "Assertion failure (expected to be true)";
        local_27c = 0x822;
        local_27a = 0x2d50;
        uStack_278 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_288,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10048fbdb;
    }
    if (param_2 == (short *)0x0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_288 = 0x8220202;
        local_284 = "Assertion failure";
        local_27c = 0x822;
        local_27a = 0x565c;
        uStack_278 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_288,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (*(long *)(param_1 + 0x94) == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_288 = 0x8220202;
        local_284 = "Assertion failure";
        local_27c = 0x822;
        local_27a = 0x2495;
        uStack_278 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_288,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      FUN_100489136(param_1,local_24a);
      if ((local_22a & 1) != 0) {
        FUN_1004870ae(param_1,local_228);
        uVar2 = 0;
        if (*param_2 != 0) {
          cVar1 = FUN_1001e3edc(param_2,local_228,0x20);
          if (cVar1 == '\0') {
            FUN_1001b7a44(&local_288);
            local_270 = 0;
            uStack_268 = 0;
            local_260 = 0;
            uStack_278 = SUB86(param_2,0);
            uStack_272 = (undefined2)((ulong)param_2 >> 0x30);
            uVar2 = FUN_100483f95(param_1,0x706c726e);
            FUN_1001b7a50(&local_288);
          }
        }
        goto LAB_10048fc57;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_288 = 0x8220202;
        local_284 = "Assertion failure";
        local_27c = 0x822;
        local_27a = 0x283c;
        uStack_278 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_288,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  uVar2 = 0xffffffce;
LAB_10048fc57:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

