// name: FUN_1001afbbd
// address: 1001afbbd

void FUN_1001afbbd(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  ID IVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar6 = _CGMainDisplayID();
  IVar7 = NSScreen::screens((ID)PTR__OBJC_CLASS___NSScreen_10082d320,PTR_s_screens_10088c168);
  lVar8 = _objc_retainAutoreleasedReturnValue(IVar7);
  if (iVar6 != param_1) {
    uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(lVar8,PTR_s_objectEnumerator_10088c190);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    (*(code *)PTR__objc_release_10082c7b0)(lVar8);
    puVar4 = PTR_s_intValue_10088c1a8;
    puVar3 = PTR_s_deviceDescription_10088c1a0;
    puVar2 = PTR_s_objectForKey__10088be28;
    puVar1 = PTR__objc_release_10082c7b0;
    lVar8 = 0;
    while( true ) {
      uVar11 = (*(code *)PTR__objc_msgSend_10082c770)(uVar10,PTR_s_nextObject_10088c198);
      lVar9 = _objc_retainAutoreleasedReturnValue(uVar11);
      (*(code *)puVar1)(lVar8);
      if (lVar9 == 0) break;
      uVar11 = _objc_opt_class(PTR__OBJC_CLASS___NSScreen_10082d320);
      cVar5 = _objc_opt_isKindOfClass(lVar9,uVar11);
      lVar8 = lVar9;
      if (cVar5 != '\0') {
        uVar11 = (*(code *)PTR__objc_retain_10082c7b8)(lVar9);
        uVar12 = (*(code *)PTR__objc_msgSend_10082c770)(uVar11,puVar3);
        uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
        uVar13 = (*(code *)PTR__objc_msgSend_10082c770)(uVar12,puVar2,&cf_NSScreenNumber);
        lVar14 = _objc_retainAutoreleasedReturnValue(uVar13);
        (*(code *)puVar1)(uVar12);
        if (lVar14 == 0) {
          uVar12 = FUN_1001cc310();
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          cVar5 = _os_log_type_enabled(uVar12,0x10);
          if (cVar5 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "displayID != __null";
            __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          (*(code *)puVar1)(uVar12);
          FUN_1001782e9(0,0);
        }
        iVar6 = (*(code *)PTR__objc_msgSend_10082c770)(lVar14,puVar4);
        (*(code *)puVar1)(lVar14);
        if (iVar6 == param_1) break;
        (*(code *)puVar1)(uVar11);
      }
    }
    (*(code *)PTR__objc_release_10082c7b0)(lVar9);
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    goto LAB_1001afe05;
  }
  if (lVar8 == 0) {
LAB_1001afdf9:
    lVar9 = 0;
  }
  else {
    lVar9 = (*(code *)PTR__objc_msgSend_10082c770)(lVar8,PTR_s_count_10088bdc0);
    if (lVar9 == 0) goto LAB_1001afdf9;
    uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(lVar8,PTR_s_objectAtIndex__10088bf78,0);
    lVar9 = _objc_retainAutoreleasedReturnValue(uVar10);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar8);
LAB_1001afe05:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    _objc_autoreleaseReturnValue(lVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

