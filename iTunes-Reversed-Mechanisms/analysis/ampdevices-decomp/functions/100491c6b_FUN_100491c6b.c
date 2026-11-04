// name: FUN_100491c6b
// address: 100491c6b

long FUN_100491c6b(undefined1 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_2b8;
  undefined4 *puStack_2b0;
  undefined8 local_2a8;
  undefined6 uStack_2a0;
  undefined2 uStack_29a;
  undefined4 uStack_298;
  undefined2 uStack_294;
  undefined4 local_290;
  undefined3 uStack_28c;
  undefined8 local_288;
  undefined8 local_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined8 uStack_26f;
  long local_260;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1003070df();
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "trackData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    lVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    local_260 = FUN_10048bbac(lVar3,0x13,0);
    if (local_260 == 0) {
      lVar5 = 0;
      if (param_2 != '\0') {
        local_2a8 = 0;
        uStack_2a0 = 0;
        local_2b8 = 0;
        puStack_2b0 = (undefined4 *)0x0;
        uStack_29a = 0;
        uStack_298 = 0;
        uStack_294 = 0;
        local_290 = 0;
        uStack_28c = 0;
        local_288 = 0x3ff0000000000000;
        local_280 = 0;
        uStack_278 = 0;
        uStack_277 = 0;
        uStack_270 = 0;
        uStack_26f = 0;
        FUN_1001c34b7(0x23280025,&local_238);
        uStack_294 = 0x13;
        puStack_2b0 = &local_238;
        iVar2 = FUN_1002e2674(lVar3,param_1,&local_2b8,&local_260);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            *(undefined4 *)(local_260 + 0x68) = 0;
            FUN_100488970();
            lVar5 = local_260;
            goto LAB_100491dbd;
          }
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_258 = 0x8220202;
            local_254 = "Assertion failure";
            local_24c = 0x400;
            local_24a = iVar2;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_258,0x12);
          }
        }
        lVar5 = 0;
      }
    }
    else {
      *(undefined4 *)(local_260 + 0x68) = 0;
      lVar5 = local_260;
    }
  }
LAB_100491dbd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

