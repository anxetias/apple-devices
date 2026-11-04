// name: FUN_1004808be
// address: 1004808be

undefined8 FUN_1004808be(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  int local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == (long *)0x0) || (lVar1 = param_1[1], lVar1 == 0)) ||
     (*(long **)(lVar1 + 0x10) == (long *)0x0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "TrackInstanceIsValid(trackInstance)";
LAB_100480a19:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if ((param_2 == 0) || (plVar2 = *(long **)(param_2 + 0x10), plVar2 == (long *)0x0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "TrackInfoIsValid(destTrackInfo)";
      goto LAB_100480a19;
    }
  }
  else if (lVar1 == param_2) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "trackInstance->trackInfo != destTrackInfo";
      goto LAB_100480a19;
    }
  }
  else {
    if (*(long **)(lVar1 + 0x10) == plVar2) {
      cVar3 = FUN_10031b8dc(plVar2);
      if (cVar3 == '\x06') {
        local_58 = 0;
        iVar4 = FUN_100474029(param_2,0,&local_58,0);
        if (((local_58 != 0) && (iVar4 == local_58)) &&
           ((lVar6 = FUN_100597a61(param_2), lVar6 != 0 &&
            (cVar3 = FUN_100480bf1(param_1), cVar3 != '\0')))) {
          FUN_1002ae348(param_2);
        }
      }
      lVar6 = *(long *)(param_2 + 0x58);
      if (lVar6 == 0) {
LAB_100480b2f:
        uVar7 = 0;
      }
      else {
        if ((*(long *)(lVar6 + 8) == 0) || (*(long *)(*(long *)(lVar6 + 8) + 0x10) == 0)) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "TrackInstanceIsValid(trackInstance)";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_100480b2f;
        }
        if (*(int *)(lVar6 + 0x3c) != 0x53485244) goto LAB_100480b2f;
        cVar3 = FUN_100480bf1(param_1);
        uVar7 = 1;
        if (cVar3 == '\0') goto LAB_100480b2f;
      }
      if ((*(long **)(lVar1 + 0x58) != param_1) || (*param_1 != 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0x7274726e,param_1,0,0);
      }
      FUN_1002adba6(param_1);
      FUN_1002accc1(param_1,param_2,uVar7);
      uVar5 = 0;
      (**(code **)(*plVar2 + 0x10))(plVar2,0x6174726e,param_1,0,0);
      if (*(long *)(lVar1 + 0x58) == 0) {
        FUN_1004737f5(lVar1);
      }
      goto LAB_100480990;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = 
      "(((trackInstance) != nullptr) ? ((((trackInstance)->trackInfo) != nullptr) ? (((trackInstance)->trackInfo)->trackDataPrivate) : nullptr) : nullptr) == (((destTrackInfo) != nullptr) ? ((destTrackInfo)->trackDataPrivate) : nullptr)"
      ;
      goto LAB_100480a19;
    }
  }
  FUN_1001782e9(0,0);
  uVar5 = 0xffffffce;
LAB_100480990:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

