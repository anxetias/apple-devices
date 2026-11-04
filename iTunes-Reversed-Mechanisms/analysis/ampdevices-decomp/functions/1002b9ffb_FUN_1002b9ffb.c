// name: FUN_1002b9ffb
// address: 1002b9ffb

long FUN_1002b9ffb(long param_1,undefined2 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
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
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002ba12f:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    lVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure (expected to be true)";
        local_22c = 0x822;
        local_22a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002ba12f;
    }
    local_260 = FUN_10048bbac(param_1,param_2,0);
    lVar4 = local_260;
    if (param_3 != '\0' && local_260 == 0) {
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
      FUN_1001c34b7(0x23280016,&local_238);
      puStack_2b0 = &local_238;
      uStack_294 = param_2;
      iVar2 = FUN_1002e2674(param_1,4,&local_2b8,&local_260);
      lVar4 = local_260;
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          FUN_1002b9206(local_260);
          FUN_100488970(local_260);
          lVar4 = local_260;
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          lVar4 = local_260;
          if (cVar1 != '\0') {
            local_258 = 0x8220202;
            local_254 = "Assertion failure";
            local_24c = 0x400;
            local_24a = iVar2;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_258,0x12);
            lVar4 = local_260;
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

