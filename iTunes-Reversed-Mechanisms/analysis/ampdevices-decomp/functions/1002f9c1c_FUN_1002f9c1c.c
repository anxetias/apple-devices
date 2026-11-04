// name: FUN_1002f9c1c
// address: 1002f9c1c

int FUN_1002f9c1c(long param_1,byte param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002f9cf6:
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_4a = "TrackDataIsValid(inTrackData)";
LAB_1002f9d76:
      local_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7ab58c;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_1002f9cf6;
    }
    if (*(long *)(param_3 + 0x20) != 0) {
      lVar7 = FUN_1002f930c(param_1);
      do {
        do {
          lVar2 = lVar7;
          iVar5 = 0;
          if (lVar2 == 0) goto LAB_1002f9daa;
          lVar7 = FUN_1002f9451(lVar2);
        } while ((param_2 != 0xff) && (bVar4 = FUN_100474865(lVar2), (bVar4 & param_2) == 0));
        local_58 = (undefined4)lVar2;
        uStack_54 = (undefined4)((ulong)lVar2 >> 0x20);
        plVar1 = *(long **)(param_3 + 0x20);
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10016bf14();
        }
        iVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_58);
      } while (iVar5 == 0);
      goto LAB_1002f9daa;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_4a = "inCallbackFunction != nullptr";
      goto LAB_1002f9d76;
    }
  }
  FUN_1001782e9(0,0);
  iVar5 = -0x32;
LAB_1002f9daa:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

