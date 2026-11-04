// name: FUN_100193afc
// address: 100193afc

int FUN_100193afc(undefined8 param_1,long param_2,char *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_5a8;
  long lStack_5a0;
  long *local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined *local_568;
  long local_560;
  long local_558;
  undefined *local_550;
  undefined *local_548;
  undefined *local_540;
  undefined8 local_538;
  undefined *local_530;
  undefined *local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined1 local_4d8 [128];
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_10017cbd0();
  if (cVar2 == '\0') {
    uVar7 = FUN_1001cc310();
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_100694d36(uVar7);
    }
LAB_100193c4f:
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    FUN_1001782e9(0,0);
  }
  else {
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      uVar7 = FUN_1001cc310();
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        FUN_100694cc0(uVar7);
      }
      goto LAB_100193c4f;
    }
    iVar3 = FUN_100188cfe(param_1,".localized",local_458);
    if (iVar3 == -0x80) goto LAB_100193c67;
    if (iVar3 != 0) {
      uVar7 = FUN_1001cc310();
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        FUN_100694c54(iVar3,uVar7);
      }
LAB_10019410f:
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
      goto LAB_100193c67;
    }
    local_508 = FUN_1001691ed(0,local_458,0);
    lVar4 = FUN_1001737f8(local_508);
    puVar1 = PTR__OBJC_CLASS___NSBundle_10082c640;
    if (lVar4 != 0) {
      if (param_2 == 0) {
        IVar5 = NSBundle::mainBundle
                          ((ID)PTR__OBJC_CLASS___NSBundle_10082c640,PTR_s_mainBundle_10088bfc0);
        uVar7 = _objc_retainAutoreleasedReturnValue(IVar5);
      }
      else {
        IVar5 = NSString::stringWithUTF8String_
                          ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                           PTR_s_stringWithUTF8String__10088bfc8,param_2);
        uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
        IVar5 = NSBundle::bundleWithIdentifier_
                          ((ID)puVar1,PTR_s_bundleWithIdentifier__10088bfd0,uVar6);
        uVar7 = _objc_retainAutoreleasedReturnValue(IVar5);
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      }
      local_4f0 = uVar7;
      IVar5 = NSFileManager::defaultManager
                        ((ID)PTR__OBJC_CLASS___NSFileManager_10082c668,
                         PTR_s_defaultManager_10088bfa0);
      local_4f8 = _objc_retainAutoreleasedReturnValue(IVar5);
      uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_localizations_10088bfd8);
      local_520 = _objc_retainAutoreleasedReturnValue(uVar7);
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0;
      uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_520,PTR_s_count_10088bdc0);
      IVar5 = NSMutableDictionary::dictionaryWithCapacity_
                        ((ID)puVar1,PTR_s_dictionaryWithCapacity__10088bfe0,uVar7);
      local_4e8 = _objc_retainAutoreleasedReturnValue(IVar5);
      IVar5 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3);
      local_500 = _objc_retainAutoreleasedReturnValue(IVar5);
      local_578 = 0;
      uStack_570 = 0;
      local_588 = 0;
      uStack_580 = 0;
      local_598 = (long *)0x0;
      uStack_590 = 0;
      local_5a8 = 0;
      lStack_5a0 = 0;
      local_4e0 = (*(code *)PTR__objc_retain_10082c7b8)(local_520);
      uVar7 = local_4f0;
      lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_4e0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_5a8,
                         local_4d8,0x10);
      if (lVar4 != 0) {
        local_558 = *local_598;
        do {
          local_568 = PTR_s_isEqualToString__10088bb98;
          local_530 = PTR_s_stringByAppendingPathExtension__10088bfe8;
          local_550 = PTR_s_resourcePath_10088bff0;
          local_528 = PTR_s_stringByAppendingPathComponent__10088bf80;
          local_548 = PTR_s_copyItemAtPath_toPath_error__10088bff8;
          local_540 = PTR_s_setObject_forKey__10088c000;
          lVar10 = 0;
          local_560 = lVar4;
          do {
            if (*local_598 != local_558) {
              _objc_enumerationMutation(local_4e0);
            }
            uVar6 = *(undefined8 *)(lStack_5a0 + lVar10 * 8);
            cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_568,&cf_Base);
            if (cVar2 == '\0') {
              uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_530,&cf_lproj);
              local_518 = _objc_retainAutoreleasedReturnValue(uVar8);
              uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_550);
              uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
              puVar1 = local_528;
              uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_528,local_518);
              uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
              uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,puVar1,local_500);
              uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
              puVar1 = PTR__objc_release_10082c7b0;
              (*(code *)PTR__objc_release_10082c7b0)(uVar8);
              (*(code *)puVar1)(uVar7);
              uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_530,&cf_strings);
              uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
              uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_508,local_528,uVar7);
              local_510 = _objc_retainAutoreleasedReturnValue(uVar8);
              (*(code *)PTR__objc_release_10082c7b0)(uVar7);
              local_538 = 0;
              cVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                                (local_4f8,local_548,uVar9,local_510,&local_538);
              lVar4 = (*(code *)PTR__objc_retain_10082c7b8)(local_538);
              if (lVar4 != 0 && cVar2 == '\0') {
                (*(code *)PTR__objc_msgSend_10082c770)(local_4e8,local_540,lVar4,uVar6);
              }
              puVar1 = PTR__objc_release_10082c7b0;
              (*(code *)PTR__objc_release_10082c7b0)(lVar4);
              uVar7 = local_4f0;
              (*(code *)puVar1)(local_510);
              (*(code *)puVar1)(uVar9);
              (*(code *)puVar1)(local_518);
            }
            lVar10 = lVar10 + 1;
          } while (local_560 != lVar10);
          lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                            (local_4e0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_5a8,
                             local_4d8,0x10);
        } while (lVar4 != 0);
      }
      (*(code *)PTR__objc_release_10082c7b0)(local_4e0);
      (*(code *)PTR__objc_msgSend_10082c770)(local_4e8,PTR_s_count_10088bdc0);
      FUN_10017060f(local_508);
      (*(code *)PTR__objc_release_10082c7b0)(local_500);
      (*(code *)PTR__objc_release_10082c7b0)(local_4e8);
      (*(code *)PTR__objc_release_10082c7b0)(local_4e0);
      (*(code *)PTR__objc_release_10082c7b0)(local_4f8);
      iVar3 = 0;
      goto LAB_10019410f;
    }
    uVar7 = FUN_1001cc310();
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_100694bde(uVar7);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    FUN_1001782e9(0,0);
  }
  iVar3 = -0x32;
LAB_100193c67:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

