// name: FUN_100331f6e
// address: 100331f6e

int FUN_100331f6e(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x3a2) == '\0') goto LAB_100332426;
  FUN_100332458();
  FUN_1003326e7(param_1 + 0x166e8,&cf_Media,1,param_1);
  FUN_1003326e7(param_1 + 0x16720,&cf_Ringtone,2,param_1);
  FUN_1003326e7(param_1 + 0x16758,&cf_VoiceMemo,4,param_1);
  FUN_1003326e7(param_1 + 0x16790,&cf_Book,8,param_1);
  puVar2 = PTR__kCFTypeArrayCallBacks_10082e130;
  uVar7 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  *(undefined8 *)(param_1 + 0x167c8) = uVar7;
  puVar4 = PTR__kCFTypeDictionaryValueCallBacks_10082e140;
  puVar3 = PTR__kCFTypeDictionaryKeyCallBacks_10082e138;
  uVar7 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  *(undefined8 *)(param_1 + 0x167d0) = uVar7;
  uVar7 = FUN_100170720(DAT_1008c4d90,0,puVar2);
  *(undefined8 *)(param_1 + 0x167e8) = uVar7;
  uVar7 = FUN_100171409(DAT_1008c4d90,0,puVar3,puVar4);
  *(undefined8 *)(param_1 + 0x167f0) = uVar7;
  uVar7 = FUN_100171409(DAT_1008c4d90,0,puVar3,puVar4);
  *(undefined8 *)(param_1 + 0x167f8) = uVar7;
  uVar7 = FUN_100171409(DAT_1008c4d90,0,puVar3,puVar4);
  *(undefined8 *)(param_1 + 0x16800) = uVar7;
  uVar7 = FUN_100170720(DAT_1008c4d90,0,puVar2);
  *(undefined8 *)(param_1 + 0x16870) = uVar7;
  plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar8 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x16808) = 0;
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData->airTrafficLibraryTrackInstanceIDMap != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)(plVar8 + 1);
    *(long **)(param_1 + 0x16808) = plVar8;
    pvVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar9 != (void *)0x0) {
      *(void **)pvVar9 = pvVar9;
      *(void **)((long)pvVar9 + 8) = pvVar9;
      *(undefined8 *)((long)pvVar9 + 0x10) = 0;
      *(void **)(param_1 + 0x168c0) = pvVar9;
      iVar6 = FUN_1001e9c3e(param_1 + 0x16878);
      if (iVar6 == -0x80) goto LAB_100332429;
      if (iVar6 == 0) {
        lVar1 = param_1 + 0x16690;
        iVar6 = FUN_1001c703f(lVar1,FUN_100330a41,param_1);
        if (iVar6 == -0x80) goto LAB_100332429;
        if (iVar6 == 0) {
          FUN_1001c75a2(*(undefined8 *)(param_1 + 0x30),lVar1);
          lVar10 = FUN_1004e0c3f(0,0);
          if (lVar10 != 0) {
            FUN_1001c75a2(lVar10,lVar1);
          }
          uVar7 = FUN_1001c156e();
          FUN_1001c6b4a(uVar7,lVar1);
          if (*(long *)(param_1 + 0x16688) != 0) {
            iVar6 = FUN_10033295f(param_1);
            if (iVar6 != 0) {
              uVar7 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar7,0x10);
              if (cVar5 == '\0') goto LAB_100332429;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
              goto LAB_10033232c;
            }
            if (*(char *)(param_1 + 0x14cd8) == '\0') {
              dVar11 = (double)FUN_1001ebd46();
              if (*(char *)(param_1 + 0x16841) == '\0') {
                dVar11 = dVar11 + DAT_100700b00;
                do {
                  dVar12 = (double)FUN_1001ebd46();
                  if (dVar11 <= dVar12) break;
                  FUN_1001b0d8d(DAT_10070f2b8);
                } while (*(char *)(param_1 + 0x16841) == '\0');
              }
            }
          }
LAB_100332426:
          iVar6 = 0;
          goto LAB_100332429;
        }
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 == '\0') goto LAB_100332429;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 == '\0') goto LAB_100332429;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
      }
LAB_10033232c:
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      goto LAB_100332429;
    }
    *(undefined8 *)(param_1 + 0x168c0) = 0;
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData->airTrafficPhotoAssetPromisedFileItemList != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar6 = -0x6c;
LAB_100332429:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

