// name: FUN_10031973e
// address: 10031973e

long FUN_10031973e(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *local_68;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = *(long *)(param_2 + 8);
  if (((*(byte *)(lVar4 + 0xc3) & 8) == 0) || (*(int *)(param_2 + 0x3c) != 0x48545450)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "searchTrack->isPreview && searchTrackInstance->trackKind == kITURLKind";
      goto LAB_1003199a7;
    }
  }
  else {
    lVar7 = *(long *)(lVar4 + 0x10);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x80) != 0x74646174) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7ab58c;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_100319944;
      }
      if (*(long *)(lVar4 + 0x70) != 0) {
        lVar7 = lVar7 + 0x1fd0;
        FUN_1001dccc7(lVar7);
        iVar2 = FUN_1001de13c(lVar7,*(undefined4 *)(*(long *)(lVar4 + 0x70) + 0x30),&local_68,
                              &local_60);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            lVar4 = FUN_1002f9fc5(param_1);
            if (lVar4 != 0) {
              param_1 = param_1 + 0x1fd0;
              do {
                if ((*(byte *)(*(long *)(lVar4 + 8) + 0xc3) & 8) != 0) {
                  if (*(long *)(*(long *)(lVar4 + 8) + 0x10) == 0) {
                    lVar5 = 0;
                  }
                  else {
                    lVar5 = *(long *)(*(long *)(lVar4 + 0x10) + 0x38);
                  }
                  if ((*(long *)(param_2 + 8) == 0) ||
                     (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0)) {
                    lVar6 = 0;
                  }
                  else {
                    lVar6 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
                  }
                  if ((lVar5 == lVar6) && (*(int *)(lVar4 + 0x3c) == 0x48545450)) {
                    FUN_1001dccc7(param_1);
                    iVar2 = FUN_1001de13c(param_1,*(undefined4 *)
                                                   (*(long *)(*(long *)(lVar4 + 8) + 0x70) + 0x30),
                                          &local_58,&local_5c);
                    if ((iVar2 == 0) && (local_5c == local_60)) {
                      iVar2 = _memcmp((void *)CONCAT44(uStack_54,local_58),local_68,(long)local_5c);
                      FUN_1001dcd18(param_1);
                      if (iVar2 == 0) goto LAB_1003199ed;
                    }
                    else {
                      FUN_1001dcd18(param_1);
                    }
                  }
                }
                lVar4 = FUN_1002fa118(lVar4);
              } while (lVar4 != 0);
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
        lVar4 = 0;
LAB_1003199ed:
        FUN_1001dcd18(lVar7);
        goto LAB_10031991e;
      }
    }
LAB_100319944:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackDataIsValid( searchTrackData ) && searchTrack->extendedInfo";
LAB_1003199a7:
      local_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  lVar4 = 0;
  FUN_1001782e9(0,0);
LAB_10031991e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

