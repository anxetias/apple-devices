// name: FUN_1002fa778
// address: 1002fa778

undefined4 FUN_1002fa778(uint *param_1,short *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (uint *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "sortFieldInfo != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    uVar3 = 0;
    if (lVar1 != 0) {
      if (*(long *)(lVar1 + 0x10) == 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "TrackInfoIsValid(trackInfo)";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar3 = 0xffffffce;
      }
      else {
        uVar4 = (ulong)*param_1;
        if (uVar4 < 6) {
          if (((param_2 == (short *)0x0) || (*param_2 == 0)) &&
             (*(int *)(lVar1 + 0x1a8 + uVar4 * 4) == 0)) {
            uVar3 = 0;
          }
          else {
            cVar2 = FUN_1001ee056();
            if (cVar2 == '\0') {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x822;
                local_3a = "JRIsCurrentThreadCooperative()";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            uVar3 = FUN_1001ddeca(*(undefined8 *)(param_1 + 0x12),param_2,
                                  lVar1 + (ulong)*param_1 * 4 + 0x1a8);
            uVar4 = (ulong)*param_1;
          }
          param_1[0x14] = *(uint *)(lVar1 + 0x1a8 + uVar4 * 4);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

