// name: FUN_10032fec1
// address: 10032fec1

void FUN_10032fec1(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10032ff8e:
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      goto LAB_1003302b0;
    }
    goto LAB_10032ffab;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar4 = FUN_1001782e9(0,1);
    if (cVar4 == '\0') goto LAB_10032ff8e;
  }
  if (((*(char *)(param_1 + 0x6aca) != '\0') || (9 < *(uint *)(param_1 + 0x166d4))) ||
     ((0x381U >> (*(uint *)(param_1 + 0x166d4) & 0x1f) & 1) == 0)) goto LAB_10032ffb4;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar4 != '\0') {
    local_54 = *(char **)(param_1 + 0x152c8);
    if ((ulong)*(uint *)(param_1 + 0x166d4) < 10) {
      local_4a = (&PTR_s_Unknown_100854818)[*(uint *)(param_1 + 0x166d4)];
    }
    else {
      local_4a = "UNKNOWN";
    }
    local_58 = 0x8420202;
    local_4c = 0x822;
    __os_log_impl(0x100000000,uVar6,1,
                  "airtraffic> done updating device %{public}@, sync state is %{public}s",&local_58,
                  0x16);
  }
  if ((*(int *)(param_1 + 0x166d4) == 7) &&
     (*(int *)(param_1 + 0x15398) == *(int *)(param_1 + 0x1539c))) {
    FUN_1004e7aad(param_1,1);
  }
  FUN_1004eecd1(param_1);
  FUN_10033035e(param_1);
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_4a = "handlerData->trackData != nullptr";
      goto LAB_1003302b0;
    }
  }
  else {
    lVar7 = FUN_1004e0c3f(param_1,1);
    if (lVar7 != 0) {
      lVar7 = FUN_1002f9fc5(lVar7);
joined_r0x00010033007c:
      do {
        lVar3 = lVar7;
        if (lVar3 == 0) goto LAB_10032ffb4;
        lVar7 = FUN_1002fa118(lVar3);
        if (*(char *)(lVar3 + 0x45) == '\n') {
          lVar1 = *(long *)(lVar3 + 8);
          if (lVar1 == 0) {
            uVar6 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar6,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure (expected to be not NULL)";
              local_4c = 0x822;
              local_4a = "libraryTrackInfo";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar4 = FUN_1001782e9(0,0);
            if (cVar4 == '\0') goto joined_r0x00010033007c;
          }
          lVar2 = *(long *)(lVar1 + 0x180);
          lVar8 = FUN_100309008(*(undefined8 *)(param_1 + 0x30));
          if (lVar2 == lVar8) {
            uVar5 = FUN_100474029(lVar1,0,0,0);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar6 = DAT_1008c75b8;
            cVar4 = _os_log_type_enabled();
            if (cVar4 != '\0') {
              FUN_100476ac1(&local_58,lVar1);
              local_64 = FUN_1001b83ae(&local_58);
              local_68 = 0x8220102;
              __os_log_impl(0x100000000,uVar6,1,
                            "airtraffic> deleting library track \"%{public}s\" that failed to reverse sync"
                            ,&local_68,0xc);
              FUN_1001b7a50(&local_58);
            }
            FUN_1002b0cf4(lVar3);
            if (1 < uVar5) {
              FUN_1003584ca(lVar1,0,0);
            }
          }
        }
      } while( true );
    }
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_4a = "libraryTrackData != nullptr";
LAB_1003302b0:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
LAB_10032ffab:
  FUN_1001782e9(0,0);
LAB_10032ffb4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

