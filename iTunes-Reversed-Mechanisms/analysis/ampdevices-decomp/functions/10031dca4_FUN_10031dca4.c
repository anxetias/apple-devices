// name: FUN_10031dca4
// address: 10031dca4

undefined8 FUN_10031dca4(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10031dd2d:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_4a = "TrackDataIsValid(trackData)";
LAB_10031dff4:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10031dd2d;
    }
    uVar7 = *(uint *)(param_1 + 0x9c);
    if (param_2 < uVar7) {
      puVar5 = *(uint **)(param_1 + 0x2750);
      if (puVar5 == (uint *)0x0) {
        uVar1 = uVar7 * 8 + 0x10;
        puVar5 = (uint *)FUN_1001c6429(uVar1);
        if (puVar5 == (uint *)0x0) {
          uVar4 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar4,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "lookupTable != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar8 = 0xffffff94;
        }
        else {
          *puVar5 = uVar7;
          puVar5[1] = uVar1;
          lVar6 = FUN_1002f930c(param_1);
          bVar2 = true;
          if (lVar6 != 0) {
            uVar7 = 0;
            do {
              if (*(uint *)(lVar6 + 8) <= uVar7) {
                uVar4 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar4,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "trackInfo->objectID > lastTrackID";
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              uVar1 = puVar5[2];
              if (*puVar5 <= uVar1) {
                uVar4 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar4,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "lookupTable->numTracks < lookupTable->maxTracks";
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                bVar2 = false;
                FUN_1001782e9(0,0);
                uVar4 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar4,0x10);
                uVar8 = 0xffffff94;
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,0xffffff94);
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                  bVar2 = false;
                }
                goto LAB_10031df78;
              }
              uVar7 = *(uint *)(lVar6 + 8);
              *(long *)(puVar5 + (ulong)uVar1 * 2 + 4) = lVar6;
              puVar5[2] = uVar1 + 1;
              lVar6 = FUN_1002f9451(lVar6);
            } while (lVar6 != 0);
          }
          uVar8 = 0;
LAB_10031df78:
          if (puVar5[2] == *(uint *)(param_1 + 0x9c)) {
            if (bVar2) {
              *(uint **)(param_1 + 0x2750) = puVar5;
              goto LAB_10031dd23;
            }
            FUN_1001c64c1(puVar5);
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar4,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "indexLookupTable->numTracks == trackData->numTracks";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            FUN_1001c64c1(puVar5);
            uVar8 = 0xffffffce;
          }
        }
        *(undefined8 *)(param_1 + 0x2750) = 0;
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,uVar8);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        uVar4 = 0;
      }
      else {
LAB_10031dd23:
        uVar4 = *(undefined8 *)(puVar5 + (ulong)param_2 * 2 + 4);
      }
      goto LAB_10031dd97;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_4a = "trackIndex < trackData->numTracks";
      goto LAB_10031dff4;
    }
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_10031dd97:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

