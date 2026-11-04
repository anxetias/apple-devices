// rea decompile_all
// name: _AMDeviceMountImageOnHost
// address: 0x128a0b
// body: available
// range: 0x128a0b-0x12903c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x129038 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDeviceMountImageOnHost(long param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined8 local_178;
  long lStack_170;
  long *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  long local_130;
  undefined8 local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined1 local_f8 [128];
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  long local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_120 = 0;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Invalid parameter";
LAB_00128bd2:
    __os_log_internal(0,_md_log_log,0x10,pcVar11);
    lVar9 = 0;
  }
  else {
    local_108 = _CFURLCopyFileSystemPath(param_1,0);
    puVar12 = PTR__objc_msgSend_00441098;
    if (local_108 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Failed to allocate string.";
      goto LAB_00128bd2;
    }
    local_118 = &_OBJC_CLASS___NSMutableDictionary;
    local_78 = &cf_main_url;
    local_70 = &cf_agent;
    local_50 = &cf_classic;
    local_68 = &cf_read_only;
    local_58 = param_1;
    local_48 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
    local_60 = &cf_mount_nobrowse;
    local_40 = (*(code *)puVar12)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
    uVar4 = (*(code *)puVar12)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                               &local_58,&local_78,4);
    uVar4 = (*(code *)puVar12)(local_118,"dictionaryWithDictionary:",uVar4);
    if (param_2 == 0) {
      uVar7 = _objc_alloc(&_OBJC_CLASS___NSURL);
      lVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,"initWithString:",&cf__tmp);
      lVar9 = local_108;
      if (lVar6 != 0) {
        (*(code *)PTR__objc_msgSend_00441098)(uVar4,"setValue:forKey:",lVar6,&cf_mount_point);
        lVar5 = 0;
        goto LAB_00128c8d;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Failed to allocate NSURL for path /tmp.";
    }
    else {
      (*(code *)PTR__objc_msgSend_00441098)(uVar4,"setValue:forKey:",param_2,&cf_mount_point);
      lVar6 = 0;
      lVar5 = _CFURLCopyFileSystemPath(param_2,0);
      lVar9 = local_108;
      if (lVar5 != 0) {
LAB_00128c8d:
        iVar3 = _DIHLDiskImageAttach(uVar4,0,0,&local_120);
        puVar12 = PTR__objc_msgSend_00441098;
        if (iVar3 == 0) {
          uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                            (local_120,"objectForKeyedSubscript:",&cf_system_entities);
          uVar7 = (*(code *)puVar12)(&_OBJC_CLASS___NSArray,"class");
          cVar2 = (*(code *)puVar12)(uVar4,"isKindOfClass:",uVar7);
          if (cVar2 == '\0') {
joined_r0x00128ec8:
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
LAB_00128f67:
            uVar7 = 0;
            __os_log_internal(0,_md_log_log,0x10,"Invalid result");
          }
          else {
            local_148 = 0;
            uStack_140 = 0;
            local_158 = 0;
            uStack_150 = 0;
            local_168 = (long *)0x0;
            uStack_160 = 0;
            local_178 = 0;
            lStack_170 = 0;
            local_110 = lVar6;
            local_118 = (undefined *)
                        (*(code *)PTR__objc_msgSend_00441098)
                                  (uVar4,"countByEnumeratingWithState:objects:count:",&local_178,
                                   local_f8,0x10);
            if (local_118 == (undefined *)0x0) {
              uVar7 = 0;
              lVar6 = local_110;
            }
            else {
              local_130 = *local_168;
              uVar7 = 0;
              local_128 = uVar4;
              local_100 = lVar5;
              do {
                puVar12 = (undefined *)0x0;
                do {
                  if (*local_168 != local_130) {
                    _objc_enumerationMutation(local_128);
                  }
                  puVar1 = PTR__objc_msgSend_00441098;
                  uVar4 = *(undefined8 *)(lStack_170 + (long)puVar12 * 8);
                  uVar8 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSDictionary,"class")
                  ;
                  cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",uVar8);
                  lVar9 = local_108;
                  lVar6 = local_110;
                  if (cVar2 == '\0') {
                    lVar5 = local_100;
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      lVar5 = local_100;
                    }
                    goto LAB_00128f67;
                  }
                  lVar9 = (*(code *)puVar1)(uVar4,"objectForKey:",&cf_mount_point);
                  if (lVar9 != 0) {
                    lVar10 = (*(code *)PTR__objc_msgSend_00441098)
                                       (uVar4,"objectForKey:",&cf_dev_entry);
                    lVar6 = local_110;
                    lVar5 = local_100;
                    lVar9 = local_108;
                    if (lVar10 == 0) goto joined_r0x00128ec8;
                    uVar7 = _CFRetain(uVar4);
                    lVar6 = local_110;
                    lVar5 = local_100;
                    lVar9 = local_108;
                    goto LAB_00128bea;
                  }
                  puVar12 = puVar12 + 1;
                } while (local_118 != puVar12);
                local_118 = (undefined *)
                            (*(code *)PTR__objc_msgSend_00441098)
                                      (local_128,"countByEnumeratingWithState:objects:count:",
                                       &local_178,local_f8,0x10);
                lVar6 = local_110;
                lVar5 = local_100;
                lVar9 = local_108;
              } while (local_118 != (undefined *)0x0);
            }
          }
        }
        else {
          local_100 = lVar5;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar4 = _md_log_log;
          pcVar11 = _strerror(iVar3);
          lVar5 = local_100;
          uVar7 = 0;
          __os_log_internal(0,uVar4,0x10,"DIHLDiskImageAttach failed (%@ / %@): %d (%s)",lVar9,
                            local_100,iVar3,pcVar11);
        }
        goto LAB_00128bea;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Failed to allocate string.";
    }
    __os_log_internal(0,_md_log_log,0x10,pcVar11);
  }
  uVar7 = 0;
  lVar6 = 0;
  lVar5 = 0;
LAB_00128bea:
  puVar12 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar5);
  (*(code *)puVar12)(lVar9);
  (*(code *)puVar12)(lVar6);
  if (local_120 != 0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

