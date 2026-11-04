// name: FUN_10039fb84
// address: 10039fb84

long * FUN_10039fb84(int param_1,long param_2,long param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar3 = operator_new(0x110,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar3 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "albumInfo != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *plVar3 = (long)&PTR_FUN_100856788;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    plVar3[0xf] = 0;
    plVar3[0x10] = 0;
    FUN_1001b7a44();
    FUN_1001de708(plVar3 + 0x13);
    FUN_1001b7a44();
    FUN_1001de708(plVar3 + 0x17);
    FUN_1001aa318(plVar3 + 0x19);
    *(undefined2 *)((long)plVar3 + 0xec) = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1a] = 0;
    plVar3[0x1b] = 0;
    *(undefined8 *)((long)plVar3 + 0xda) = 0;
    *(undefined8 *)((long)plVar3 + 0xe2) = 0;
    *(undefined2 *)(plVar3 + 0x1f) = 0x4040;
    *(byte *)((long)plVar3 + 0xfa) = *(byte *)((long)plVar3 + 0xfa) & 0xf0;
    FUN_1001c62d9(plVar3 + 0x20,0x10);
    if (param_1 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = "inAlbumKind != kAlbumKind_Unknown";
LAB_10039fe3e:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
    }
    else if (param_2 == 0) {
LAB_10039fdbe:
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = "TrackDataIsValid(inTrackData)";
        goto LAB_10039fe3e;
      }
    }
    else {
      if (*(int *)(param_2 + 0x80) != 0x74646174) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_10039fdbe;
      }
      if (*(uint *)(param_2 + 0xa4) < 0x7fffffff) {
        plVar3[1] = 0x1616c6269;
        plVar3[9] = param_2;
        *(int *)(plVar3 + 2) = param_1;
        *(undefined1 *)((long)plVar3 + 0xe5) = param_4;
        uVar2 = FUN_1001ea5dc();
        *(undefined4 *)(plVar3 + 3) = uVar2;
        if (param_3 == 0) {
          param_3 = FUN_1002fa216(param_2);
        }
        plVar3[4] = param_3;
        FUN_10039ffa2(plVar3);
        goto LAB_10039fe77;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = "inTrackData->numAlbums < 0x7FFFFFFF";
        goto LAB_10039fe3e;
      }
    }
    FUN_1001782e9(0,0);
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  plVar3 = (long *)0x0;
LAB_10039fe77:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

