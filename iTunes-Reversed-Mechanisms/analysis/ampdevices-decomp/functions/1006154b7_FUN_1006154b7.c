// name: FUN_1006154b7
// address: 1006154b7

undefined8 FUN_1006154b7(long param_1,int param_2,ulong param_3,ulong param_4,long param_5)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x10);
  uVar5 = FUN_100601f45(lVar1);
  if ((int)uVar5 != 0) goto LAB_1006154f7;
  cVar3 = FUN_1001ee041();
  if (param_4 == 0 && param_3 == 0) {
    uVar5 = 0;
    if (cVar3 == '\0') goto LAB_1006156ce;
  }
  else {
    if ((cVar3 != '\0') && (uVar5 = FUN_1001e9de0(lVar2 + 0x6760), (int)uVar5 != 0))
    goto LAB_1006154f7;
    if (param_2 == 0x6f707470) {
      if ((param_3 == 1) || ((long)(ulong)*(uint *)(lVar2 + 0x67ac) < (long)param_3)) {
LAB_10061558c:
        if (0xffffffff < (long)param_3) {
          uVar5 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar5,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "completedOperations <= 4294967295U";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        *(int *)(lVar2 + 0x67ac) = (int)param_3;
        *(undefined1 *)(lVar2 + 0x67a8) = 1;
      }
    }
    else if (*(uint *)(lVar2 + 0x67ac) != param_3) goto LAB_10061558c;
    if (*(uint *)(lVar2 + 0x67b0) != param_4) {
      if (0xffffffff < (long)param_4) {
        uVar5 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar5,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "totalOperations <= 4294967295U";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *(int *)(lVar2 + 0x67b0) = (int)param_4;
      *(undefined1 *)(lVar2 + 0x67a8) = 1;
    }
    if (param_2 < 0x6470726d) {
      if ((param_2 != 0) && (param_2 != 0x6370726d)) goto LAB_100615670;
    }
    else if ((param_2 != 0x6470726d) && ((param_2 != 0x69646c65 && (param_2 != 0x7570726d)))) {
LAB_100615670:
      *(int *)(lVar2 + 0x67b4) = param_2;
      if (*(int *)(lVar2 + 0x67b8) != param_2) {
        *(undefined1 *)(lVar2 + 0x67a8) = 1;
      }
    }
    if (param_5 != 0) {
      cVar4 = FUN_1001e3edc(param_5,lVar2 + 0x67bc,0);
      if (cVar4 == '\0') {
        FUN_1001e1c39(param_5,lVar2 + 0x67bc);
        *(undefined1 *)(lVar2 + 0x67a8) = 1;
      }
    }
    if (cVar3 == '\0') {
LAB_1006156ce:
      uVar5 = FUN_1006020dd(lVar1);
    }
    else {
      FUN_1001e9eb9(lVar2 + 0x6760);
      uVar5 = 0;
    }
  }
  if (((param_2 == 0x6f707470 && (int)uVar5 == 0) && (uVar5 = 0, *(char *)(lVar1 + 0x3f7) != '\0'))
     && (*(long *)(lVar2 + 0x30) != 0)) {
    uVar5 = 0x2349;
    if ((*(byte *)(*(long *)(lVar2 + 0x30) + 0x2be0) & 0x20) != 0) {
      uVar5 = 0;
    }
  }
LAB_1006154f7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

