// name: FUN_100474a49
// address: 100474a49

undefined1 FUN_100474a49(long param_1,char param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    cVar5 = FUN_100474d03(param_1);
    if (((cVar5 != '\0') && (plVar8 = *(long **)(param_1 + 0x58), plVar8 != (long *)0x0)) &&
       (*plVar8 != 0)) {
      bVar3 = false;
      bVar4 = false;
      bVar1 = false;
      bVar2 = false;
      do {
        if (*(ushort *)(plVar8[3] + 2) - 1 < 3) {
          if ((plVar8[1] == 0) || (*(long *)(plVar8[1] + 0x10) == 0)) {
            uVar7 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar7,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "TrackInstanceIsValid(trackInstance)";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else if (*(int *)((long)plVar8 + 0x3c) != 0x53485244) {
            bVar2 = true;
          }
          bVar1 = true;
        }
        else if (*(ushort *)(plVar8[3] + 2) == 0) {
          if ((plVar8[1] == 0) || (*(long *)(plVar8[1] + 0x10) == 0)) {
            uVar7 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar7,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "TrackInstanceIsValid(trackInstance)";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else if (*(int *)((long)plVar8 + 0x3c) != 0x53485244) {
            bVar4 = true;
          }
          bVar3 = true;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
      if ((((bVar1) && (param_2 == '\0' || bVar3)) && ((param_3 == '\0' || (bVar2)))) &&
         (((param_3 == '\0' || (param_2 == '\0')) || (bVar4)))) {
        uVar6 = FUN_1002ac9e0(*(undefined8 *)(param_1 + 0x58));
        goto LAB_100474c81;
      }
    }
    uVar6 = 0;
  }
LAB_100474c81:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

