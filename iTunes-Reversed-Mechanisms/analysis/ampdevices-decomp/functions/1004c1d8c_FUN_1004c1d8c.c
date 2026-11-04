// name: FUN_1004c1d8c
// address: 1004c1d8c

int FUN_1004c1d8c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long local_270;
  undefined4 local_268;
  char *local_264;
  undefined2 local_25c;
  int local_25a;
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  char *local_23a;
  undefined1 local_60 [4];
  uint local_5c;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_270 = 0;
  local_60[0] = 0;
  local_5c = 0;
  FUN_1001c62d9(param_2,0x10);
  if (*(int *)((long)param_1 + 0x1c) == 0x46494c45) {
    if (param_1[0x9e] == 0) {
      FUN_1004c3f8e(param_1);
    }
    plVar3 = (long *)param_1[0x9f];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
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
    if (param_1[0x9e] == 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_248 = 0x8220202;
        local_244 = "Assertion failure";
        local_23c = 0x822;
        local_23a = "mCoreMediaItem != __null";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_248,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = -0x32;
    }
    else {
      cVar4 = FUN_100440388();
      iVar5 = -0x32;
      if (cVar4 != '\0') {
        iVar5 = FUN_100179732(1,&local_270);
        if (iVar5 != -0x80) {
          if (iVar5 == 0) {
            puVar8 = &local_248;
            uVar6 = (**(code **)(*param_1 + 0x348))(param_1,puVar8);
            if (uVar6 != 0) {
              uVar9 = (ulong)uVar6;
              do {
                iVar5 = (**(code **)(*param_1 + 0x350))(param_1,puVar8,local_270);
                if (iVar5 != 0) {
                  if (iVar5 == -0x80) goto LAB_1004c1f60;
                  uVar7 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar4 == '\0') goto LAB_1004c1f60;
                  puVar8 = &local_268;
                  local_268 = 0x8220202;
                  local_264 = "Assertion failure";
                  local_25c = 0x400;
                  local_25a = iVar5;
                  goto LAB_1004c20ce;
                }
                puVar8 = puVar8 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            FUN_1001799f1(local_270,local_60);
            uVar6 = 0x10;
            if (local_5c < 0x10) {
              uVar6 = local_5c;
            }
            FUN_1001c631b(local_58,param_2,uVar6);
            iVar5 = 0;
          }
          else {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 != '\0') {
              puVar8 = &local_248;
              local_248 = 0x8220202;
              local_244 = "Assertion failure";
              local_23c = 0x400;
              local_23a = (char *)CONCAT44(local_23a._4_4_,iVar5);
LAB_1004c20ce:
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar8,0x12);
            }
          }
        }
      }
    }
LAB_1004c1f60:
    if (local_270 != 0) {
      FUN_100179a7b();
    }
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_248 = 0x8220202;
      local_244 = "Assertion failure";
      local_23c = 0x822;
      local_23a = "mTrackKind == kITFileKind";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_248,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

