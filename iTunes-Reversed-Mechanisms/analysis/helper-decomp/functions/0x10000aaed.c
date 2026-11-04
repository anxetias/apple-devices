// rea decompile_all
// name: FUN_10000aaed
// address: 0x10000aaed
// body: available
// range: 0x10000aaed-0x10000b5f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000b5f1 to 0x100027600 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000aaed(undefined8 param_1,long param_2,long param_3,long param_4,char param_5,
                  char param_6,long *param_7)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ID IVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ID IVar20;
  ID IVar21;
  undefined8 uVar22;
  char *pcVar23;
  code *pcVar24;
  undefined8 local_48;
  ID local_38;
  
  lVar4 = (*(code *)PTR__objc_msgSend_100012170)(param_1,"objectForKeyedSubscript:",&cf_Files);
  pcVar24 = (code *)PTR__objc_msgSend_100012170;
  if (param_2 == 0 || lVar4 == 0) {
    local_48 = 0;
  }
  else {
    IVar20 = MBFileManager::defaultManager((ID)&objc::class_t::MBFileManager,"defaultManager");
    uVar7 = (*pcVar24)(lVar4,"keyEnumerator");
    IVar11 = (*pcVar24)(uVar7,"nextObject");
    if (IVar11 == 0) {
      local_38 = 0;
    }
    else {
      uVar8 = *(undefined8 *)PTR__NSFileType_100012008;
      uVar9 = *(undefined8 *)PTR__NSFileTypeRegular_100012018;
      uVar10 = *(undefined8 *)PTR__NSFileSize_100012000;
      local_38 = 0;
      do {
        IVar21 = FUN_10000b5f7(IVar11,param_2);
        if (IVar21 == 0) {
          uVar18 = FUN_10000b8f0();
          pcVar23 = "File %@ exists in the manifest, but could not be found.";
LAB_10000ae68:
          __os_log_internal(0x100000000,uVar18,0,pcVar23,IVar11);
        }
        else {
          cVar2 = (*pcVar24)(IVar21,"hasSuffix:",&cf_mdinfo);
          IVar11 = IVar21;
          if (cVar2 != '\0') {
            uVar18 = (*pcVar24)(IVar21,"stringByDeletingPathExtension");
            IVar11 = (*pcVar24)(uVar18,"stringByAppendingPathExtension:",&cf_mddata);
          }
          IVar11 = MBFileManager::fileAttributesAtPath_traverseLink_
                             (IVar20,"fileAttributesAtPath:traverseLink:",IVar11,'\0');
          uVar18 = (*pcVar24)(IVar11,"objectForKeyedSubscript:",uVar8);
          cVar2 = (*pcVar24)(uVar18,"isEqualToString:",uVar9);
          if (cVar2 == '\0') {
            uVar18 = FUN_10000b8f0();
            pcVar23 = "Skipping path for restore, not a regular file: %@";
            IVar11 = IVar21;
            goto LAB_10000ae68;
          }
          lVar4 = (*pcVar24)(IVar21,"fileSystemRepresentation");
          lVar13 = (*pcVar24)(param_2,"length");
          sVar5 = _strlen((char *)(lVar13 + lVar4));
          lVar14 = 0;
          pcVar23 = ".DS_Store";
          do {
            sVar6 = _strlen(pcVar23);
            if ((sVar6 == sVar5) &&
               (iVar3 = _strncmp((char *)(lVar13 + lVar4),pcVar23,sVar5), iVar3 == 0)) {
              uVar18 = FUN_10000b8f0();
              __os_log_internal(0x100000000,uVar18,0,"Skipping file, not a valid backup path: %@",
                                IVar21);
              pcVar24 = (code *)PTR__objc_msgSend_100012170;
              goto LAB_10000ae6f;
            }
            pcVar23 = (&PTR_s_Info_plist_1000121e8)[lVar14];
            lVar14 = lVar14 + 1;
          } while (lVar14 != 4);
          uVar18 = (*(code *)PTR__objc_msgSend_100012170)(IVar11,"objectForKeyedSubscript:",uVar10);
          if (local_38 == 0) {
            IVar11 = _objc_alloc(&_OBJC_CLASS___NSMutableSet);
            local_38 = NSMutableSet::init(IVar11,"init");
          }
          uVar12 = FUN_10000b8f0();
          uVar19 = (*(code *)PTR__objc_msgSend_100012170)(uVar18,"longLongValue");
          pcVar24 = (code *)PTR__objc_msgSend_100012170;
          __os_log_internal(0x100000000,uVar12,1,"Found file to send: %@ (%lld)",IVar21,uVar19);
          if (param_7 != (long *)0x0) {
            lVar4 = (*pcVar24)(uVar18,"longLongValue");
            *param_7 = *param_7 + lVar4;
          }
          NSMutableSet::addObject_(local_38,"addObject:",IVar21);
        }
LAB_10000ae6f:
        IVar11 = (*pcVar24)(uVar7,"nextObject");
      } while (IVar11 != 0);
    }
    local_48 = _objc_autorelease(local_38);
  }
  uVar7 = (*(code *)PTR__objc_msgSend_100012170)
                    (param_1,"objectForKeyedSubscript:",&cf_Applications);
  puVar1 = PTR__objc_msgSend_100012170;
  if (param_4 != 0) {
    uVar8 = (*(code *)PTR__objc_msgSend_100012170)(uVar7,"allKeys");
    (*(code *)puVar1)(param_4,"addObjectsFromArray:",uVar8);
  }
  puVar1 = PTR__objc_msgSend_100012170;
  if (param_3 == 0) {
    uVar8 = FUN_10000b8f0();
    __os_log_internal(0x100000000,uVar8,1,"Not pruning app files");
  }
  else {
    uVar8 = (*(code *)PTR__objc_msgSend_100012170)(uVar7,"allKeys");
    uVar8 = (*(code *)puVar1)(uVar8,"mutableCopy");
    uVar9 = (*(code *)puVar1)(param_3,"objectEnumerator");
    while (lVar4 = (*(code *)puVar1)(uVar9,"nextObject"), lVar4 != 0) {
      (*(code *)puVar1)(uVar8,"removeObject:",lVar4);
    }
    uVar9 = FUN_10000b8f0();
    __os_log_internal(0x100000000,uVar9,1,
                      "Filtering out all files for the following applications: %@",uVar8);
    uVar9 = (*(code *)puVar1)(uVar8,"objectEnumerator");
    lVar4 = (*(code *)puVar1)(uVar9,"nextObject");
    while (lVar4 != 0) {
      if (param_4 != 0) {
        (*(code *)puVar1)(param_4,"removeObject:",lVar4);
      }
      uVar10 = (*(code *)puVar1)(uVar7,"objectForKeyedSubscript:",lVar4);
      uVar10 = (*(code *)puVar1)(uVar10,"objectForKey:",&cf_Files);
      uVar10 = (*(code *)puVar1)(uVar10,"objectEnumerator");
      lVar4 = (*(code *)puVar1)(uVar10,"nextObject");
      while (lVar4 != 0) {
        lVar4 = FUN_10000b5f7(lVar4,param_2);
        if (lVar4 != 0) {
          (*(code *)puVar1)(local_48,"removeObject:",lVar4);
        }
        lVar4 = (*(code *)puVar1)(uVar10,"nextObject");
      }
      lVar4 = (*(code *)puVar1)(uVar9,"nextObject");
    }
    (*(code *)PTR__objc_release_100012178)(uVar8);
  }
  if (param_5 == '\0') {
    uVar8 = FUN_10000b8f0();
    __os_log_internal(0x100000000,uVar8,1,"Not pruning app bundle files");
  }
  else {
    IVar11 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
    pcVar24 = (code *)PTR__objc_msgSend_100012170;
    IVar11 = NSMutableDictionary::init(IVar11,"init");
    uVar8 = _objc_autorelease(IVar11);
    uVar9 = (*pcVar24)(param_1,"objectForKeyedSubscript:",&cf_Applications);
    uVar10 = (*pcVar24)(uVar9,"keyEnumerator");
    lVar4 = (*pcVar24)(uVar10,"nextObject");
    if (lVar4 != 0) {
      uVar18 = *(undefined8 *)PTR__kCFAllocatorDefault_100012148;
      do {
        uVar12 = (*pcVar24)(uVar9,"objectForKeyedSubscript:",lVar4);
        lVar13 = (*pcVar24)(uVar12,"objectForKeyedSubscript:",&cf_AppInfo);
        if (lVar13 != 0) {
          if (DAT_1000166f8 == 0) {
            DAT_1000166f8 =
                 _CFDictionaryCreateMutable
                           (uVar18,0,PTR__kCFTypeDictionaryKeyCallBacks_100012150,
                            PTR__kCFTypeDictionaryValueCallBacks_100012158);
          }
          lVar14 = _CFDictionaryGetValue(lVar13,&cf_CFBundleIdentifier);
          if (lVar14 != 0) {
            lVar15 = _CFDictionaryGetValue(DAT_1000166f8,lVar14);
            if (lVar15 == 0) {
              lVar15 = _CFDictionaryGetValue(lVar13,&cf_Path);
              lVar13 = _CFDictionaryGetValue(lVar13,&cf_Container);
              if (lVar13 != 0 && lVar15 != 0) {
                lVar16 = _CFStringGetLength(lVar15);
                uVar17 = _CFStringGetLength(lVar13);
                if ((long)uVar17 < lVar16) {
                  lVar15 = _CFStringCreateWithSubstring(0,lVar15,uVar17 + 1,lVar16 + ~uVar17);
                  _CFDictionarySetValue(DAT_1000166f8,lVar14,lVar15);
                  _CFRelease(lVar15);
                  if (lVar15 != 0) goto LAB_10000b1d4;
                }
              }
            }
            else {
LAB_10000b1d4:
              (*(code *)PTR__objc_msgSend_100012170)
                        (uVar8,"setObject:forKeyedSubscript:",lVar15,lVar4);
            }
          }
        }
        pcVar24 = (code *)PTR__objc_msgSend_100012170;
        lVar4 = (*(code *)PTR__objc_msgSend_100012170)(uVar10,"nextObject");
      } while (lVar4 != 0);
    }
    uVar9 = (*pcVar24)(param_1,"objectForKeyedSubscript:",&cf_Applications);
    uVar10 = (*pcVar24)(uVar9,"keyEnumerator");
    lVar4 = (*pcVar24)(uVar10,"nextObject");
    while (lVar4 != 0) {
      IVar11 = _objc_alloc(&_OBJC_CLASS___NSAutoreleasePool);
      IVar11 = NSAutoreleasePool::init(IVar11,"init");
      uVar18 = (*(code *)PTR__objc_msgSend_100012170)(uVar9,"objectForKeyedSubscript:",lVar4);
      uVar12 = (*(code *)PTR__objc_msgSend_100012170)(uVar8,"objectForKeyedSubscript:",lVar4);
      puVar1 = PTR__objc_msgSend_100012170;
      uVar18 = (*(code *)PTR__objc_msgSend_100012170)(uVar18,"objectForKeyedSubscript:",&cf_Files);
      uVar18 = (*(code *)puVar1)(uVar18,"objectEnumerator");
      lVar13 = (*(code *)puVar1)(uVar18,"nextObject");
      while (lVar13 != 0) {
        uVar19 = FUN_10000b5f7(lVar13,param_2);
        cVar2 = (*(code *)puVar1)(local_48,"containsObject:",uVar19);
        if (cVar2 != '\0') {
          IVar20 = NSDictionary::dictionaryWithContentsOfFile_
                             ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithContentsOfFile:",uVar19
                             );
          IVar20 = NSDictionary::objectForKeyedSubscript_
                             (IVar20,"objectForKeyedSubscript:",&cf_Path);
          IVar21 = NSDictionary::hasPrefix_(IVar20,"hasPrefix:",uVar12);
          if ((char)IVar21 != '\0') {
            uVar22 = FUN_10000b8f0();
            __os_log_internal(0x100000000,uVar22,1,
                              "The backup file %@ is in the app bundle for %@: %@",lVar13,lVar4,
                              IVar20);
            (*(code *)puVar1)(local_48,"removeObject:",uVar19);
          }
        }
        lVar13 = (*(code *)puVar1)(uVar18,"nextObject");
      }
      NSAutoreleasePool::drain(IVar11,"drain");
      lVar4 = (*(code *)puVar1)(uVar10,"nextObject");
    }
  }
  uVar8 = FUN_10000b8f0();
  if (param_6 == '\0') {
    __os_log_internal(0x100000000,uVar8,1,"Not pruning system files");
  }
  else {
    __os_log_internal(0x100000000,uVar8,1,"Pruning system files");
    puVar1 = PTR__objc_msgSend_100012170;
    uVar8 = (*(code *)PTR__objc_msgSend_100012170)(local_48,"mutableCopy");
    uVar7 = (*(code *)puVar1)(uVar7,"objectEnumerator");
    while (lVar4 = (*(code *)puVar1)(uVar7,"nextObject"), lVar4 != 0) {
      uVar9 = (*(code *)puVar1)(lVar4,"objectForKeyedSubscript:",&cf_Files);
      uVar9 = (*(code *)puVar1)(uVar9,"objectEnumerator");
      lVar4 = (*(code *)puVar1)(uVar9,"nextObject");
      while (lVar4 != 0) {
        lVar4 = FUN_10000b5f7(lVar4,param_2);
        if (lVar4 != 0) {
          (*(code *)puVar1)(uVar8,"removeObject:",lVar4);
        }
        lVar4 = (*(code *)puVar1)(uVar9,"nextObject");
      }
    }
    (*(code *)PTR__objc_msgSend_100012170)(local_48,"minusSet:",uVar8);
    (*(code *)PTR__objc_release_100012178)(uVar8);
  }
  (*(code *)PTR__objc_msgSend_100012170)(local_48,"allObjects");
  return;
}

