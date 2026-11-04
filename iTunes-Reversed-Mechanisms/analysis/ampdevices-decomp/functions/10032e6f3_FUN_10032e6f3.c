// name: FUN_10032e6f3
// address: 10032e6f3

int FUN_10032e6f3(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    plVar8 = (long *)(param_2 + 0x58);
    do {
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure";
          local_22c = 0x822;
          local_22a = "trackInstance != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x2b;
        goto LAB_10032ea4e;
      }
    } while (*(int *)((long)plVar8 + 0x3c) != 0x46494c45);
    iVar3 = FUN_10032daa1(param_1,plVar8,0,&local_238);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        lVar4 = FUN_100166b7f(*(undefined8 *)(param_1 + 0x16210),&cf_VoiceMemos);
        iVar3 = 0;
        if (lVar4 != 0) {
          pcVar5 = (char *)FUN_1001656af(DAT_1008c4d90,&local_238,
                                         *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
          lVar6 = FUN_100166b7f(lVar4,pcVar5);
          if (lVar6 != 0) {
            cVar1 = FUN_100167dd2(lVar6,&cf_RecordedOnDevice,0);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar7 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar1 == '\0') {
              if (cVar2 != '\0') {
                local_258 = 0x8420102;
                local_254 = pcVar5;
                __os_log_impl(0x100000000,uVar7,1,
                              "sync> deleting voice memo info for file \"%{public}@\"",&local_258,
                              0xc);
              }
              FUN_100171552(lVar4,pcVar5);
            }
            else {
              if (cVar2 != '\0') {
                local_258 = 0x8420102;
                local_254 = pcVar5;
                __os_log_impl(0x100000000,uVar7,1,
                              "sync> keeping recorded voice memo file \"%{public}@\"",&local_258,0xc
                             );
              }
              FUN_1002b765a(plVar8);
              *(undefined1 *)((long)plVar8 + 0x44) = 0;
              FUN_100171552(lVar6,&cf_TrackLibraryID);
              FUN_100171552(lVar6,&cf_TrackPersistentID);
            }
          }
          FUN_10017060f(pcVar5);
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_258 = 0x8220202;
          local_254 = "Assertion failure";
          local_24c = 0x400;
          local_24a = iVar3;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_258,0x12);
        }
      }
    }
  }
LAB_10032ea4e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

