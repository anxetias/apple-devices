// name: FUN_10021a952
// address: 10021a952

void FUN_10021a952(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ID IVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined1 local_b5 [5];
  long local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  uint local_74;
  undefined2 uStack_70;
  ushort uStack_6e;
  undefined2 uStack_6c;
  undefined8 local_6a;
  uint local_62;
  undefined2 local_5e;
  undefined8 local_5c;
  undefined2 local_54;
  undefined8 local_52;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = (*(code *)PTR__objc_msgSend_10082c770)(param_2,PTR_s_authorizationStatus_10088c338);
  if (lVar5 != 2) {
    if (DAT_1008c75d0 != -1) {
      _dispatch_once(&DAT_1008c75d0,&PTR___NSConcreteGlobalBlock_1008570a8);
    }
    local_98 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75c8);
    cVar4 = _os_log_type_enabled(local_98,1);
    if (cVar4 != '\0') {
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar1 = *(uint *)(lVar5 + 0x74);
      uVar7 = FUN_1001b83ae(lVar5 + 0x40);
      local_52 = FUN_1001b83ae(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x50);
      local_74 = uVar1 >> 0x18;
      uStack_6e = (ushort)(uVar1 >> 0x10) & 0xff;
      local_62 = uVar1 & 0xff;
      local_78 = 0x4000602;
      uStack_70 = 0x400;
      uStack_6c = 0;
      local_6a._0_6_ = CONCAT42(uVar1 >> 8,0x400) & 0xffffff;
      local_6a = (char *)CONCAT26(0x400,(uint6)local_6a);
      local_5e = 0x820;
      local_54 = 0x820;
      local_5c = uVar7;
      __os_log_impl(0x100000000,local_98,1,"notify> rejected: %c%c%c%c \'%s\' \'%s\'",&local_78,0x2e
                   );
    }
    goto LAB_10021b5c2;
  }
  local_98 = _objc_opt_new(PTR__OBJC_CLASS___UNMutableNotificationContent_10082c3a0);
  local_88 = 0;
  local_90 = 0;
  cVar4 = FUN_1001b8428(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x30);
  if (cVar4 == '\0') {
    local_88 = 0;
    local_90 = 0;
    uVar7 = FUN_1001bdcb0(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x30,0);
    local_90 = _objc_retainAutoreleasedReturnValue(uVar7);
  }
  else {
    local_88 = 0;
    local_90 = 0;
    IVar6 = NSUUID::UUID((ID)PTR__OBJC_CLASS___NSUUID_10082c6e0,PTR_s_UUID_10088c340);
    uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_UUIDString_10088c348);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    local_90 = (*(code *)PTR__objc_retain_10082c7b8)(uVar8);
    local_88 = local_90;
  }
  uVar7 = FUN_1001bdcb0(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x40,0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_10082c770)(local_98,PTR_s_setTitle__10088c350,uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  uVar7 = FUN_1001bdcb0(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x50,0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_10082c770)(local_98,PTR_s_setSubtitle__10088c358,uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  cVar4 = FUN_1001b8428(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x60);
  if (cVar4 == '\0') {
    uVar7 = FUN_1001bdcb0(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x60,0);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_msgSend_10082c770)(local_98,PTR_s_setBody__10088c360,uVar7);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(uint *)(lVar5 + 0x70);
  uVar18 = (ulong)uVar1;
  if ((uVar18 != 0) && (uVar2 = *(ulong *)(lVar5 + 0xa8), uVar2 != 0)) {
    uVar9 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
    uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar9 >> 0x38 < 2) {
      uVar16 = (ulong)(uVar1 & (int)uVar2 - 1U);
    }
    else {
      uVar16 = uVar18;
      if (uVar2 <= uVar18) {
        uVar16 = uVar18 % (uVar2 & 0xffffffff);
      }
    }
    plVar17 = *(long **)(*(long *)(lVar5 + 0xa0) + uVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      do {
        uVar10 = plVar17[1];
        if (uVar10 == uVar18) {
          if (*(uint *)(plVar17 + 2) == uVar1) {
            IVar6 = NSString::stringWithFormat_
                              ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                               PTR_s_stringWithFormat__10088c038,&cf__c_c_c_c_category,
                               (ulong)(uVar1 >> 0x18),(ulong)(uVar1 >> 0x10 & 0xff),
                               (ulong)(uVar1 >> 8 & 0xff),uVar1 & 0xff);
            uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
            (*(code *)PTR__objc_msgSend_10082c770)
                      (local_98,PTR_s_setCategoryIdentifier__10088c368,uVar7);
            (*(code *)PTR__objc_release_10082c7b0)(uVar7);
            lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
            break;
          }
        }
        else {
          if ((byte)(uVar9 >> 0x38) < 2) {
            uVar10 = uVar10 & uVar2 - 1;
          }
          else if (uVar2 <= uVar10) {
            uVar10 = uVar10 % uVar2;
          }
          if (uVar10 != uVar16) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
  puVar3 = PTR__objc_retain_10082c7b8;
  lVar11 = *(long *)(lVar5 + 0x78);
  lVar12 = *(long *)(lVar5 + 0x88);
  if (lVar11 == 0) {
    if (lVar12 != 0) {
      local_9c = *(undefined4 *)(lVar5 + 0x74);
      (*(code *)PTR__objc_retain_10082c7b8)(local_88);
      local_b0 = lVar12;
      uVar7 = (*(code *)puVar3)();
      uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_pathExtension_10088c3c0);
      local_80 = _objc_retainAutoreleasedReturnValue(uVar7);
      goto LAB_10021af11;
    }
  }
  else {
    local_9c = *(undefined4 *)(lVar5 + 0x74);
    lVar5 = (*(code *)PTR__objc_retain_10082c7b8)(local_88);
    local_b0 = lVar12;
    (*(code *)puVar3)();
    lVar11 = _CGImageSourceCreateWithData(lVar11,0);
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      uVar7 = _CGImageSourceGetType(lVar11);
      lVar5 = _objc_retainAutoreleasedReturnValue(uVar7);
      if (lVar5 == 0) {
        local_80 = 0;
        uVar7 = FUN_1001cc310();
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_78 = 0x8220202;
          local_74 = 0x7a168c;
          uStack_70 = 1;
          uStack_6e = 0;
          uStack_6c = 0x822;
          local_6a = "uti";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
        local_80 = 0;
        cVar4 = FUN_1001782e9(0,0);
        if (cVar4 != '\0') goto LAB_10021ae65;
        local_80 = 0;
      }
      else {
LAB_10021ae65:
        local_80 = 0;
        IVar6 = UTType::typeWithIdentifier_
                          ((ID)PTR__OBJC_CLASS___UTType_10082c398,
                           PTR_s_typeWithIdentifier__10088c3b0,lVar5);
        uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
        uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                          (uVar7,PTR_s_preferredFilenameExtension_10088c3b8);
        local_80 = _objc_retainAutoreleasedReturnValue(uVar8);
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
      }
      _CFRelease(lVar11);
      (*(code *)PTR__objc_release_10082c7b0)(lVar5);
LAB_10021af11:
      puVar3 = PTR__OBJC_CLASS___NSURL_10082dfd8;
      if (local_80 == 0) {
        lVar11 = 0;
        lVar5 = local_88;
      }
      else {
        uVar7 = _NSTemporaryDirectory();
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        IVar6 = NSURL::fileURLWithPath_isDirectory_
                          ((ID)puVar3,PTR_s_fileURLWithPath_isDirectory__10088bf88,uVar7,1);
        local_a8 = _objc_retainAutoreleasedReturnValue(IVar6);
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
        FUN_1001e3312(local_9c,local_b5);
        lVar5 = local_88;
        if (local_88 == 0) {
          IVar6 = NSUUID::UUID((ID)PTR__OBJC_CLASS___NSUUID_10082c6e0,PTR_s_UUID_10088c340);
          uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
          uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_UUIDString_10088c348);
          lVar5 = _objc_retainAutoreleasedReturnValue(uVar8);
          (*(code *)PTR__objc_release_10082c7b0)(uVar7);
        }
        IVar6 = NSString::stringWithFormat_
                          ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                           PTR_s_stringWithFormat__10088c038,&cf__s______,local_b5,lVar5,local_80);
        uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
        uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                          (local_a8,PTR_s_URLByAppendingPathComponent__10088c3c8,uVar7);
        lVar11 = _objc_retainAutoreleasedReturnValue(uVar8);
        if (DAT_1008c75d0 != -1) {
          _dispatch_once(&DAT_1008c75d0,&PTR___NSConcreteGlobalBlock_1008570a8);
        }
        uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75c8);
        cVar4 = _os_log_type_enabled(uVar8,2);
        if (cVar4 != '\0') {
          local_78 = 0x8420102;
          local_74 = (uint)lVar11;
          uStack_70 = (undefined2)((ulong)lVar11 >> 0x20);
          uStack_6e = (ushort)((ulong)lVar11 >> 0x30);
          __os_log_impl(0x100000000,uVar8,2,"notify> temp image file = %{public}@",&local_78,0xc);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar8);
        (*(code *)PTR__objc_release_10082c7b0)(local_a8);
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
        (*(code *)PTR__objc_release_10082c7b0)(local_80);
      }
    }
    (*(code *)PTR__objc_release_10082c7b0)(local_b0);
    (*(code *)PTR__objc_release_10082c7b0)(lVar5);
    if (lVar11 != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        cVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x78),
                           PTR_s_writeToURL_options_error__10088c378,lVar11,0);
        lVar5 = (*(code *)PTR__objc_retain_10082c7b8)(0);
        if (cVar4 != '\0') goto LAB_10021b1ca;
        local_80 = lVar5;
        (*(code *)PTR__objc_release_10082c7b0)(lVar11);
        if (DAT_1008c75d0 != -1) {
          _dispatch_once(&DAT_1008c75d0,&PTR___NSConcreteGlobalBlock_1008570a8);
        }
        lVar5 = local_80;
        lVar12 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75c8);
        cVar4 = _os_log_type_enabled(lVar12,0x10);
        if (cVar4 != '\0') {
          local_74 = (uint)lVar5;
          uStack_70 = (undefined2)((ulong)lVar5 >> 0x20);
          uStack_6e = (ushort)((ulong)lVar5 >> 0x30);
          pcVar15 = "notify> couldn\'t write image file %@";
          goto LAB_10021b397;
        }
LAB_10021b3aa:
        lVar11 = 0;
      }
      else {
        IVar6 = NSFileManager::defaultManager
                          ((ID)PTR__OBJC_CLASS___NSFileManager_10082c668,
                           PTR_s_defaultManager_10088bfa0);
        uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
        uVar8 = (*(code *)PTR__objc_retain_10082c7b8)
                          (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x88));
        cVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (uVar7,PTR_s_copyItemAtURL_toURL_error__10088c370,uVar8,lVar11);
        local_80 = (*(code *)PTR__objc_retain_10082c7b8)(0);
        (*(code *)PTR__objc_release_10082c7b0)(uVar8);
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
        lVar5 = local_80;
        if (cVar4 == '\0') {
          (*(code *)PTR__objc_release_10082c7b0)(lVar11);
          if (DAT_1008c75d0 != -1) {
            _dispatch_once(&DAT_1008c75d0,&PTR___NSConcreteGlobalBlock_1008570a8);
          }
          lVar5 = local_80;
          lVar12 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75c8);
          cVar4 = _os_log_type_enabled(lVar12,0x10);
          if (cVar4 != '\0') {
            local_74 = (uint)lVar5;
            uStack_70 = (undefined2)((ulong)lVar5 >> 0x20);
            uStack_6e = (ushort)((ulong)lVar5 >> 0x30);
            pcVar15 = "notify> couldn\'t copy image file %@";
LAB_10021b397:
            local_78 = 0x8400102;
            __os_log_impl(0x100000000,lVar12,0x10,pcVar15,&local_78,0xc);
          }
          goto LAB_10021b3aa;
        }
LAB_10021b1ca:
        IVar6 = UNNotificationAttachment::attachmentWithIdentifier_URL_options_error_
                          ((ID)PTR__OBJC_CLASS___UNNotificationAttachment_10082c3b0,
                           PTR_s_attachmentWithIdentifier_URL_opt_10088c380,&cf_artwork,lVar11,0);
        lVar12 = _objc_retainAutoreleasedReturnValue(IVar6);
        local_80 = (*(code *)PTR__objc_retain_10082c7b8)(lVar5);
        (*(code *)PTR__objc_release_10082c7b0)(lVar5);
        if (lVar12 == 0) {
          if (DAT_1008c75d0 != -1) {
            _dispatch_once(&DAT_1008c75d0,&PTR___NSConcreteGlobalBlock_1008570a8);
          }
          uVar7 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75c8);
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_78 = 0x8400102;
            local_74 = (uint)local_80;
            uStack_70 = (undefined2)((ulong)local_80 >> 0x20);
            uStack_6e = (ushort)((ulong)local_80 >> 0x30);
            __os_log_impl(0x100000000,uVar7,0x10,"notify> error creating image attachment %@",
                          &local_78,0xc);
          }
        }
        else {
          local_40 = lVar12;
          IVar6 = NSArray::arrayWithObjects_count_
                            ((ID)PTR__OBJC_CLASS___NSArray_10082df78,
                             PTR_s_arrayWithObjects_count__10088bda0,&local_40,1);
          uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
          (*(code *)PTR__objc_msgSend_10082c770)(local_98,PTR_s_setAttachments__10088c388,uVar7);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
      }
      (*(code *)PTR__objc_release_10082c7b0)(lVar12);
      (*(code *)PTR__objc_release_10082c7b0)(local_80);
      (*(code *)PTR__objc_release_10082c7b0)(lVar11);
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  }
  uVar1 = *(uint *)(lVar5 + 0x74);
  uVar7 = *(undefined8 *)(lVar5 + 0x90);
  IVar6 = _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0);
  IVar13 = NSNumber::numberWithInt_
                     ((ID)PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithInt__10088c3d0,
                      (ulong)uVar1);
  uVar8 = _objc_retainAutoreleasedReturnValue(IVar13);
  puVar3 = PTR_s_setValue_forKey__10088c3d8;
  NSMutableDictionary::setValue_forKey_
            (IVar6,PTR_s_setValue_forKey__10088c3d8,uVar8,PTR_cf_usernotification_kind_10088f8e0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  NSMutableDictionary::setValue_forKey_
            (IVar6,puVar3,uVar7,PTR_cf_usernotification_userdict_10088f8e8);
  (*(code *)PTR__objc_msgSend_10082c770)(local_98,PTR_s_setUserInfo__10088c390,IVar6);
  (*(code *)PTR__objc_release_10082c7b0)(IVar6);
  IVar6 = UNNotificationRequest::requestWithIdentifier_content_trigger_
                    ((ID)PTR__OBJC_CLASS___UNNotificationRequest_10082c3c0,
                     PTR_s_requestWithIdentifier_content_tr_10088c398,local_90,local_98,0);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
  if (DAT_1008c75d0 != -1) {
    _dispatch_once(&DAT_1008c75d0,&PTR___NSConcreteGlobalBlock_1008570a8);
  }
  uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75c8);
  cVar4 = _os_log_type_enabled(uVar8,1);
  if (cVar4 != '\0') {
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = *(uint *)(lVar5 + 0x74);
    uVar14 = FUN_1001b83ae(lVar5 + 0x40);
    local_52 = FUN_1001b83ae(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x50);
    local_74 = uVar1 >> 0x18;
    uStack_6e = (ushort)(uVar1 >> 0x10) & 0xff;
    local_62 = uVar1 & 0xff;
    local_78 = 0x4000602;
    uStack_70 = 0x400;
    uStack_6c = 0;
    local_6a._0_6_ = CONCAT42(uVar1 >> 8,0x400) & 0xffffff;
    local_6a = (char *)CONCAT26(0x400,(uint6)local_6a);
    local_5e = 0x820;
    local_54 = 0x820;
    local_5c = uVar14;
    __os_log_impl(0x100000000,uVar8,1,"notify>  posting: %c%c%c%c \'%s\' \'%s\'",&local_78,0x2e);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  (*(code *)PTR__objc_msgSend_10082c770)
            (DAT_1008a2da0,PTR_s_addNotificationRequest_withCompl_10088c3a0,uVar7,
             &PTR___NSConcreteGlobalBlock_10083e178);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(local_88);
  (*(code *)PTR__objc_release_10082c7b0)(local_90);
LAB_10021b5c2:
  (*(code *)PTR__objc_release_10082c7b0)(local_98);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

