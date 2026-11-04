// name: FUN_10037ddf6
// address: 10037ddf6

undefined8 FUN_10037ddf6(long param_1,uint param_2,uint param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar8 = 0;
  uVar11 = 0;
  local_60 = param_2;
  local_5c = param_3;
  piVar6 = (int *)FUN_1004909fc(param_1 + 8);
  if (piVar6 == (int *)0x0) {
LAB_10037df07:
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      pcVar9 = "PlaylistIsValid(playlist)";
LAB_10037dfd2:
      uStack_4c = 0x822;
      local_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar9,0);
      uStack_48 = (undefined6)((ulong)pcVar9 >> 0x10);
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  else {
    if (*piVar6 != 0x706c7374) {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7ab58c;
        local_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x2d50;
        uStack_48 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x16,uVar8,
                            uVar11);
      }
      cVar5 = FUN_1001782e9(0,1);
      if (cVar5 == '\0') goto LAB_10037df07;
    }
    if (param_2 == 0) {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        pcVar9 = "inSortOrder != kTrackOrderInvalid";
        goto LAB_10037dfd2;
      }
    }
    else {
      uVar10 = *(uint *)(*(long *)(piVar6 + 0x1e) + 0x18);
      if (uVar10 == 0) {
        uVar8 = 0;
        goto LAB_10037e003;
      }
      if (param_4 < uVar10) {
        FUN_10037c504(param_1,&local_60,&local_5c);
        uVar10 = uVar10 + ~param_4;
        if ((local_5c & 1) == 0) {
          uVar10 = param_4;
        }
        uVar4 = local_5c & 0xfffffffe;
        if (0x79 < local_60) {
          uVar10 = param_4;
          uVar4 = local_5c;
        }
        FUN_10037d7c4(&local_58,param_1,local_60,uVar4);
        plVar3 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
        if (CONCAT44(uStack_54,local_58) == 0) {
          uVar8 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar8,0x10);
          if (cVar5 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            local_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x6a86;
            uStack_48 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          uVar8 = 0;
          FUN_1001782e9(0,0);
        }
        else {
          uVar8 = FUN_10037b3b0(CONCAT44(uStack_54,local_58),uVar10);
        }
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            std::__shared_weak_count::__release_weak();
          }
        }
        goto LAB_10037e003;
      }
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        pcVar9 = "inTrackIndex < numTracks";
        goto LAB_10037dfd2;
      }
    }
  }
  uVar8 = 0;
  FUN_1001782e9(0,0);
LAB_10037e003:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

