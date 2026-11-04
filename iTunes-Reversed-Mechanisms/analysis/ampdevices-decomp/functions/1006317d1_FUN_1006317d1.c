// name: FUN_1006317d1
// address: 1006317d1

undefined1 FUN_1006317d1(long param_1)

{
  undefined1 uVar1;
  short *psVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0,PTR_s_dictionary_10088c4a0);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  psVar2 = *(short **)(param_1 + 0x10);
  local_48 = uVar8;
  local_38 = param_1;
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSString_10082c6b8,
                       PTR_s_stringWithCharacters_length__10088d820,psVar2 + 1);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar8,PTR_s_setObject_forKey__10088c000,uVar9,
               *(undefined8 *)PTR__AMPDeviceOpenPanelTitleKey_10082b878);
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  }
  psVar2 = *(short **)(local_38 + 8);
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSString_10082c6b8,
                       PTR_s_stringWithCharacters_length__10088d820,psVar2 + 1);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar8,PTR_s_setObject_forKey__10088c000,uVar9,
               *(undefined8 *)PTR__AMPDeviceOpenPanelPromptKey_10082b870);
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  }
  lVar10 = local_38 + 0x30;
  cVar5 = FUN_1001b8428(lVar10);
  if (cVar5 == '\0') {
    uVar9 = FUN_1001bdcb0(lVar10,0);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar8,PTR_s_setObject_forKey__10088c000,uVar9,
               *(undefined8 *)PTR__AMPDeviceOpenPanelUUIDKey_10082b888);
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  }
  uVar7 = *(uint *)(local_38 + 4);
  if ((uVar7 & 2) != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar8,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
               *(undefined8 *)PTR__AMPDeviceOpenPanelCanChooseFilesKey_10082b868);
    uVar7 = *(uint *)(local_38 + 4);
  }
  if ((uVar7 & 4) != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar8,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
               *(undefined8 *)PTR__AMPDeviceOpenPanelCanChooseDirectoriesKey_10082b860);
    uVar7 = *(uint *)(local_38 + 4);
  }
  if ((uVar7 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar8,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
               *(undefined8 *)PTR__AMPDeviceOpenPanelAllowsMultipleSelectionKey_10082b858);
    uVar7 = *(uint *)(local_38 + 4);
  }
  if ((uVar7 & 8) != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar8,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
               *(undefined8 *)PTR__AMPDeviceOpenPanelTreatsFilePackagesAsDirectoriesKey_10082b880);
  }
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
  local_40 = _objc_retainAutoreleasedReturnValue(uVar8);
  puVar4 = PTR_s_addObject__10088c218;
  puVar3 = PTR_s_stringWithUTF8String__10088bfc8;
  sVar6 = *(short *)(local_38 + 0x24);
  if (0 < sVar6) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(local_38 + 0x28) + lVar11) != '\0') {
        uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSString_10082c6b8,puVar3,
                           *(long *)(local_38 + 0x28) + lVar11);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        (*(code *)PTR__objc_msgSend_10082c770)(local_40,puVar4,uVar8);
        (*(code *)PTR__objc_release_10082c7b0)(uVar8);
        sVar6 = *(short *)(local_38 + 0x24);
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x10;
    } while (lVar10 < sVar6);
  }
  uVar9 = local_48;
  (*(code *)PTR__objc_msgSend_10082c770)
            (local_48,PTR_s_setObject_forKey__10088c000,local_40,
             *(undefined8 *)PTR__AMPDeviceOpenPanelAllowedFileTypesKey_10082b850);
  local_80 = &local_88;
  local_88 = 0;
  local_78 = 0x2020000000;
  local_70 = 0;
  local_60 = &local_68;
  local_68 = 0;
  local_58 = 0x2020000000;
  local_50 = 0;
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientBroadcaster,PTR_s_sharedInstance_10088c4b8);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar8,PTR_s_openPanelWithParameters_withRepl_10088d948,uVar9);
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  uVar8 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
  while (*(char *)(local_60 + 3) == '\0') {
    _CFRunLoopRunInMode(DAT_100712580,uVar8,0);
  }
  uVar1 = *(undefined1 *)(local_80 + 3);
  __Block_object_dispose(&local_68,8);
  __Block_object_dispose(&local_88,8);
  puVar3 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_40);
  (*(code *)puVar3)(uVar9);
  return uVar1;
}

