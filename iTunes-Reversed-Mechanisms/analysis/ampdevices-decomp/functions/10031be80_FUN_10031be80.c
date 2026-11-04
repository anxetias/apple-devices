// name: FUN_10031be80
// address: 10031be80

undefined8 FUN_10031be80(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10031bf39:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_3a = "TrackDataIsValid(inTrackData)";
LAB_10031bfb9:
      local_3c = 0x822;
      uStack_40 = 1;
      uStack_44 = 0x7a0a90;
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7ab58c;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_10031bf39;
    }
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar4 = FUN_100315ede(param_1);
      do {
        if (lVar4 == 0) {
          uVar3 = 0;
          break;
        }
        lVar5 = FUN_100316031(lVar4);
        local_48 = (undefined4)lVar4;
        uStack_44 = (undefined4)((ulong)lVar4 >> 0x20);
        plVar1 = *(long **)(param_2 + 0x20);
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10016bf14();
        }
        uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_48);
        lVar4 = lVar5;
      } while ((int)uVar3 == 0);
      goto LAB_10031bfec;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_3a = "inCallbackFunction != nullptr";
      goto LAB_10031bfb9;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_10031bfec:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

