// name: FUN_10040ddbd
// address: 10040ddbd

void FUN_10040ddbd(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  undefined2 local_462;
  undefined4 local_460;
  int local_458 [7];
  char local_43c [1028];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10017076e(*(undefined8 *)(param_2 + 0x68));
  if (0 < lVar3) {
    lVar10 = 0;
    do {
      lVar4 = FUN_10016499b(*(undefined8 *)(param_2 + 0x68),lVar10);
      if (lVar4 == 0) {
        uVar9 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar9,0x10);
        if (cVar1 != '\0') {
          local_46a = "fileDict != nullptr";
LAB_10040e23d:
          local_46c = 0x822;
          local_474 = "Assertion failure";
          local_478 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
        }
LAB_10040e262:
        FUN_1001782e9(0,0);
        iVar2 = -0x32;
        goto LAB_10040e271;
      }
      lVar5 = FUN_10016696d(lVar4,&cf_Data);
      if (lVar5 == 0) {
        uVar9 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar9,0x10);
        if (cVar1 != '\0') {
          local_46a = "fileData != nullptr";
          goto LAB_10040e23d;
        }
        goto LAB_10040e262;
      }
      lVar6 = FUN_100170ef7(lVar5);
      if (lVar6 < 0) {
        uVar9 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar9,0x10);
        if (cVar1 != '\0') {
          local_46a = "fileSize >= 0";
          goto LAB_10040e23d;
        }
        goto LAB_10040e262;
      }
      lVar7 = FUN_10016696d(lVar4,&cf_ParentSpec);
      if (lVar7 == 0) {
        uVar9 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar9,0x10);
        if (cVar1 != '\0') {
          local_46a = "fileParentSpec != nullptr";
          goto LAB_10040e23d;
        }
        goto LAB_10040e262;
      }
      lVar8 = FUN_100170ef7(lVar7);
      if (lVar8 != 0x420) {
        uVar9 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar9,0x10);
        if (cVar1 != '\0') {
          local_46a = "JRCFDataGetLength(fileParentSpec) == sizeof(JRFileSpec)";
          goto LAB_10040e23d;
        }
        goto LAB_10040e262;
      }
      lVar4 = FUN_100166c1b(lVar4,&cf_Name);
      if (lVar4 == 0) {
        uVar9 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar9,0x10);
        if (cVar1 != '\0') {
          local_46a = "fileName != nullptr";
          goto LAB_10040e23d;
        }
        goto LAB_10040e262;
      }
      iVar2 = *(int *)(param_2 + 100);
      uVar9 = FUN_100170f3b(lVar7);
      iVar2 = FUN_1001661fe(lVar5,uVar9,lVar4,local_458,(iVar2 == 0x7472616b) * '\x04' + '\x01');
      if (iVar2 != 0) {
        if (iVar2 != -0x80) {
          uVar9 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar9,0x10);
          if (cVar1 != '\0') {
            local_478 = 0x8220202;
            local_474 = "Assertion failure";
            local_46c = 0x400;
            local_46a = (char *)CONCAT44(local_46a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_478,0x12);
          }
        }
        goto LAB_10040e271;
      }
      if (((*(int *)(param_2 + 100) == 0x61727477) || (*(int *)(param_2 + 100) == 0x67656e75)) &&
         (local_458[0] == 0x41464350)) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          pcVar11 = "Genius data";
          if (*(int *)(param_2 + 100) == 0x61727477) {
            pcVar11 = "artwork";
          }
          local_460 = FUN_100170ef7(lVar5);
          local_478 = 0x8220302;
          local_46c = 0x822;
          local_46a = local_43c;
          local_462 = 0x400;
          local_474 = pcVar11;
          __os_log_impl(0x100000000,uVar9,1,
                        "airtraffic> saved %{public}s to \"%{public}s\" (%u bytes)",&local_478,0x1c)
          ;
        }
      }
      *(long *)(param_2 + 0x78) =
           *(long *)(param_2 + 0x78) +
           (long)(lVar6 + (ulong)*(uint *)(param_2 + 0x70) + -1) /
           (long)(ulong)*(uint *)(param_2 + 0x70);
      FUN_1001e9809(param_2 + 0x80);
      if (*(char *)(param_2 + 0x60) != '\0') {
        iVar2 = -0x80;
        goto LAB_10040e271;
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
  }
  iVar2 = 0;
LAB_10040e271:
  *(int *)(param_2 + 0x90) = iVar2;
  FUN_1001e9809(param_2 + 0x80);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

