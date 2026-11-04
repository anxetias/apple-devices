// name: FUN_100474029
// address: 100474029

int FUN_100474029(long param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    iVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == (long *)0x0) {
      iVar6 = 0;
      iVar3 = 0;
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      iVar3 = 0;
      iVar6 = 0;
      do {
        cVar1 = FUN_1002b630e(plVar4);
        iVar5 = (iVar5 + 1) - (uint)(cVar1 == '\0');
        if ((plVar4[1] == 0) || (*(long *)(plVar4[1] + 0x10) == 0)) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "TrackInstanceIsValid(trackInstance)";
            __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          iVar3 = iVar3 + (uint)(*(int *)((long)plVar4 + 0x3c) == 0x53485244);
        }
        plVar4 = (long *)*plVar4;
        iVar6 = iVar6 + 1;
      } while (plVar4 != (long *)0x0);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar3;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = iVar5;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar6 - iVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

