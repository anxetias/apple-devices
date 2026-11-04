// name: FUN_1004eb21f
// address: 1004eb21f

long FUN_1004eb21f(long param_1,long param_2,char param_3,char param_4,ushort param_5,char param_6,
                  long *param_7,uint *param_8,undefined4 *param_9)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_7 != (long *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (uint *)0x0) {
    *param_8 = 0;
  }
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = 0;
  }
  if (param_1 == 0) {
LAB_1004eb349:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1004eb427:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1004eb349;
    }
    if (((param_2 != 0) && (plVar1 = *(long **)(param_2 + 8), plVar1 != (long *)0x0)) &&
       (plVar1[2] != 0)) {
      if (param_5 == 0) {
        param_5 = *(ushort *)(param_1 + 0x14df6);
      }
      uVar5 = FUN_1004744bf(plVar1,0);
      if ((uVar5 & 0xc61000) == 0) {
        if (param_4 == '\0') {
          lVar7 = *(long *)(param_2 + 0x68);
        }
        else {
          lVar7 = FUN_1005dfe52(*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 100),
                                (uint)param_5 * 1000,0);
        }
      }
      else {
        lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0xa0);
        if (lVar7 == 0) {
          lVar7 = *(long *)(param_2 + 0x68);
        }
      }
      uVar3 = *(uint *)(param_1 + 0x6f60);
      if (uVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "handlerData->volumeBlockSize != 0";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar3 = *(uint *)(param_1 + 0x6f60);
        if (uVar3 != 0) goto LAB_1004eb4e3;
      }
      else {
LAB_1004eb4e3:
        uVar5 = (lVar7 + (ulong)uVar3) - 1;
        lVar7 = uVar5 - uVar5 % (ulong)uVar3;
      }
      if (param_7 != (long *)0x0) {
        *param_7 = lVar7;
      }
      if (((param_3 == '\0') || (*(char *)(param_1 + 0x353) == '\0')) ||
         (cVar2 = FUN_1003537ab(param_1,plVar1), cVar2 == '\0')) goto LAB_1004eb57f;
      if (*(char *)(param_1 + 0x354) == '\0') {
LAB_1004eb562:
        uVar3 = FUN_10035363a(param_1,plVar1);
        lVar7 = lVar7 + (ulong)uVar3;
        if (param_8 != (uint *)0x0) {
          *param_8 = uVar3;
        }
      }
      else if (plVar1[2] == *(long *)(param_1 + 0x30)) {
        lVar6 = FUN_10035403c(param_1);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x20) == *plVar1)) goto LAB_1004eb562;
      }
      else {
        lVar6 = FUN_100353c3b(param_1);
        if (lVar6 == 0) goto LAB_1004eb562;
      }
LAB_1004eb57f:
      if ((param_6 != '\0') && (*(long *)(param_1 + 0x16640) != 0)) {
        if (plVar1[2] == *(long *)(param_1 + 0x30)) {
          lVar6 = FUN_1005aa7e6();
        }
        else {
          lVar6 = FUN_1005a99fa();
        }
        lVar7 = lVar7 + lVar6;
        if (param_9 != (undefined4 *)0x0) {
          *param_9 = (int)lVar6;
        }
      }
      goto LAB_1004eb3b0;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "TrackInstanceIsValid(trackInstance)";
      goto LAB_1004eb427;
    }
  }
  lVar7 = 0;
  FUN_1001782e9(0,0);
LAB_1004eb3b0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar7;
}

