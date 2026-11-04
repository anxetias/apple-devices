// name: makeFileSpec:fromURL:returningInfo:
// address: 10066125e

/* Function Stack Size: 0x28 bytes */

ID AMPDevicesClientConnection::makeFileSpec_fromURL_returningInfo_
             (ID param_1,SEL param_2,JRFileSpec *param_3,ID param_4,JRFileSpecInfo *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ID IVar13;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_isAFCURL_10088ddb8);
  if (cVar3 == '\0') {
    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_isFileURL_10088c900);
    if (cVar3 == '\0') {
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                         0xffff87ca);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    }
    else {
      uVar6 = _objc_retainAutorelease(uVar5);
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_fileSystemRepresentation_10088cac8)
      ;
      FUN_1001b7b04(&local_458,uVar6);
      iVar4 = FUN_10017df7e(0,&local_458,param_3,param_5,0);
      FUN_1001b7a50(&local_458);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          uVar6 = 0;
          goto LAB_1006616dc;
        }
        uVar6 = FUN_1001cc310();
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x400;
          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_458,0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      }
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                         iVar4);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    }
    goto LAB_1006616dc;
  }
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_pathComponents_10088d978);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar2 = PTR_s_count_10088bdc0;
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_count_10088bdc0);
  if (uVar8 < 2) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "[pathComponents count] >= 2";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                       0xffffffce);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  }
  else {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_host_10088d970);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_objectAtIndex__10088bf78,1);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar1 = PTR__OBJC_CLASS___NSString_10082c6b8;
    lVar11 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,puVar2);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar7,PTR_s_subarrayWithRange__10088dd98,2,lVar11 + -2);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar12 = (*(code *)PTR__objc_msgSend_10082c770)
                       (puVar1,PTR_s_pathWithComponents__10088dda0,uVar6);
    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    lVar11 = FUN_1005b8e71(uVar9);
    if (lVar11 == 0) {
      uVar6 = FUN_1001cc310();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "deviceRef != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      FUN_1001782e9(0,0);
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                         0x2365);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    }
    else {
      iVar4 = FUN_10036d754(lVar11,uVar10,&local_458);
      if (iVar4 == -0x80) {
LAB_100661624:
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                           iVar4);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      }
      else {
        if (iVar4 != 0) {
          uVar6 = FUN_1001cc310();
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_478 = 0x8220202;
            local_474 = "Assertion failure";
            local_46c = 0x400;
            local_46a = iVar4;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_478,0x12);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          goto LAB_100661624;
        }
        uVar6 = _objc_retainAutorelease(uVar12);
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_UTF8String_10088bf18);
        iVar4 = FUN_10036de38(&local_458,uVar6,param_3,param_5);
        if (iVar4 == -0x80) {
LAB_100661676:
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                            (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                             iVar4);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        }
        else {
          if (iVar4 != 0) {
            uVar6 = FUN_1001cc310();
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 != '\0') {
              local_478 = 0x8220202;
              local_474 = "Assertion failure";
              local_46c = 0x400;
              local_46a = iVar4;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_478,0x12);
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar6);
            goto LAB_100661676;
          }
          uVar6 = 0;
        }
        FUN_10036d918(&local_458);
      }
      FUN_10017060f(lVar11);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar12);
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
LAB_1006616dc:
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar13 = _objc_autoreleaseReturnValue(uVar6);
  return IVar13;
}

