// rea decompile_all
// name: _doCryptoSendReceive
// address: 0x1760cf
// body: available
// range: 0x1760cf-0x176ca6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x176bb2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _doCryptoSendReceive(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  char *pcVar11;
  size_t sVar12;
  char *local_b8;
  long local_b0;
  undefined8 local_a8;
  char *local_a0;
  long local_98;
  void *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_b0 = 0;
  local_98 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (param_4 == (undefined8 *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pvVar10 = (void *)0x0;
    __os_log_internal(0,_md_log_log,0x10,"Invalid input(s).");
    iVar3 = -0x17fffff9;
    local_90 = (void *)0x0;
    lVar8 = 0;
    lVar6 = 0;
    lVar4 = 0;
    local_88 = 0;
    goto LAB_00176392;
  }
  lVar8 = *(long *)(param_1 + 0xd0);
  if (lVar8 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    local_88 = 0;
    __os_log_internal(0,_md_log_log,0x10,"Invalid session.");
    iVar3 = -0x17ffff13;
LAB_00176353:
    lVar6 = 0;
LAB_00176359:
    lVar4 = 0;
    local_90 = (void *)0x0;
LAB_00176364:
    pvVar10 = (void *)0x0;
LAB_00176366:
    lVar8 = 0;
    lVar5 = local_98;
    if (local_98 == 0 || iVar3 == 0) goto LAB_00176392;
  }
  else {
    local_a8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar4 = _CFWriteStreamCreateWithAllocatedBuffers(local_a8,local_a8);
    if (lVar4 == 0) {
LAB_00176316:
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_88 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Failed to convert object to binary.");
      iVar3 = -0x17fffffd;
      goto LAB_00176353;
    }
    cVar2 = _CFWriteStreamOpen(lVar4);
    if (cVar2 == '\0') {
      _CFRelease(lVar4);
      goto LAB_00176316;
    }
    lVar6 = 0;
    lVar5 = _CFPropertyListWrite(param_3,lVar4,200,0,0);
    if (0 < lVar5) {
      lVar6 = _CFWriteStreamCopyProperty
                        (lVar4,*(undefined8 *)PTR__kCFStreamPropertyDataWritten_004411a0);
    }
    _CFWriteStreamClose(lVar4);
    _CFRelease(lVar4);
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar6 == 0) goto LAB_00176316;
    local_a0 = (char *)(*(code *)PTR__objc_msgSend_00441098)(lVar6,"bytes");
    lVar5 = (*(code *)puVar1)(lVar6,"length");
    iVar3 = (*(code *)puVar1)(lVar8,
                              "deriveKeyWithSaltPtr:saltLen:infoPtr:infoLen:keyLen:outputKeyPtr:",
                              "WriteKeySaltMDLD",0x10,"WriteKeyInfoMDLD",0x10,0x20,&local_78);
    if (iVar3 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_88 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Failed to derive write key: %d",iVar3);
      iVar3 = -0x17ffffee;
      goto LAB_00176359;
    }
    local_90 = _malloc(lVar5 + 0x10U);
    if (local_90 == (void *)0x0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_88 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Failed to allocate memory.");
      iVar3 = -0x17fffffd;
      goto LAB_00176359;
    }
    lVar4 = _CFDictionaryCreateMutable(0,0,0,0);
    if (lVar4 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_88 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary (%u).",
                        *(undefined4 *)(param_1 + 0x10));
      iVar3 = -0x17fffffd;
      lVar4 = 0;
      goto LAB_00176364;
    }
    _CFDictionarySetValue(lVar4,&cf_MinIPhoneVersion,&cf_11_2);
    _CFDictionarySetValue(lVar4,&cf_MinAppleTVVersion,&cf_11_2);
    _CFDictionarySetValue(lVar4,&cf_MinWatchVersion,&cf_4_2);
    local_88 = lVar4;
    cVar2 = _AMDeviceIsAtLeastVersionOnPlatform(param_1,lVar4);
    if (cVar2 != '\0') {
      lVar4 = _createRandomNSData();
      if (lVar4 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar11 = "Failed to create nonce.";
        lVar4 = 0;
LAB_00176728:
        __os_log_internal(0,_md_log_log,0x10,pcVar11);
        iVar3 = -0x17fffffd;
        goto LAB_00176364;
      }
      local_b8 = (char *)_CFDataGetBytePtr(lVar4);
      if (local_b8 != (char *)0x0) {
        local_80 = _CFDataGetLength(lVar4);
        _CFDictionarySetValue(param_2,&cf_Nonce,lVar4);
        goto LAB_001765bd;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Failed to retrieve nonce pointer.";
LAB_00176787:
      pvVar10 = (void *)0x0;
LAB_00176789:
      __os_log_internal(0,_md_log_log,0x10,pcVar11);
LAB_00176795:
      iVar3 = -0x17fffffd;
      goto LAB_00176366;
    }
    local_80 = 0xc;
    local_b8 = "sendone01234";
    lVar4 = 0;
LAB_001765bd:
    uVar7 = (*_getkCryptoAEADDescriptorChaCha20Poly1305)();
    pvVar10 = local_90;
    iVar3 = (*_softLinkCryptoAEADEncryptMessageOneShot)
                      (uVar7,&local_78,0x20,local_b8,local_80,0,0,local_a0,lVar5,local_90,
                       (long)local_90 + lVar5,0x10);
    if (iVar3 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pvVar10 = (void *)0x0;
      __os_log_internal(0,_md_log_log,0x10,"Failed to encrypt payload (%ld): %d",local_80,iVar3);
      goto LAB_00176649;
    }
    lVar5 = _CFDataCreate(local_a8,pvVar10,lVar5 + 0x10U);
    if (lVar5 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Failed to create data.";
      goto LAB_00176787;
    }
    _CFDictionarySetValue(param_2,&cf_Payload,lVar5);
    _CFRelease(lVar6);
    _CFRelease(lVar5);
    iVar3 = _lockconn_send_message(param_1,param_2);
    if ((iVar3 != 0) || (iVar3 = _lockconn_receive_message(param_1,&local_98), iVar3 != 0)) {
LAB_0017680f:
      lVar6 = 0;
      goto LAB_00176364;
    }
    lVar5 = _CFDictionaryGetValue(local_98,&cf_Error);
    lVar6 = local_98;
    if (lVar5 != 0) {
      lVar8 = _CFGetTypeID(lVar5);
      lVar6 = _CFStringGetTypeID();
      if (lVar8 == lVar6) {
        iVar3 = __ConvertLockdowndError(lVar5);
      }
      else {
        iVar3 = -0x17ffffed;
      }
      goto LAB_0017680f;
    }
    uVar7 = _CFDataGetTypeID();
    lVar5 = __DictionaryGetTypedValue(lVar6,&cf_Payload,uVar7);
    lVar6 = local_98;
    if (lVar5 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Response missing payload.";
LAB_001768ec:
      lVar6 = 0;
      __os_log_internal(0,_md_log_log,0x10,pcVar11);
      iVar3 = -0x17ffffed;
      goto LAB_00176364;
    }
    uVar7 = _CFDataGetTypeID();
    lVar6 = __DictionaryGetTypedValue(lVar6,&cf_Nonce,uVar7);
    if (lVar6 == 0) {
      local_80 = 0xc;
      local_a0 = "receiveone01";
    }
    else {
      local_a0 = (char *)_CFDataGetBytePtr(lVar6);
      local_80 = _CFDataGetLength(lVar6);
    }
    puVar1 = PTR__objc_msgSend_00441098;
    lVar6 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"bytes");
    uVar9 = (*(code *)puVar1)(lVar5,"length");
    if (lVar6 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Failed to extract cipher text from payload.";
      goto LAB_001768ec;
    }
    if (uVar9 < 0x10) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      lVar6 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Invalid cipher text length.");
      iVar3 = -0x17ffffee;
      goto LAB_00176364;
    }
    sVar12 = uVar9 - 0x10;
    pvVar10 = _malloc(sVar12);
    if (pvVar10 == (void *)0x0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Failed to allocate memory.";
      lVar6 = 0;
      goto LAB_00176728;
    }
    iVar3 = (*(code *)PTR__objc_msgSend_00441098)
                      (lVar8,"deriveKeyWithSaltPtr:saltLen:infoPtr:infoLen:keyLen:outputKeyPtr:",
                       "ReadKeySaltMDLD",0xf,"ReadKeyInfoMDLD",0xf,0x20,&local_58);
    if (iVar3 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      lVar6 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Failed to device read key: %d",iVar3);
LAB_00176649:
      iVar3 = -0x17ffffee;
      goto LAB_00176366;
    }
    uVar7 = (*_getkCryptoAEADDescriptorChaCha20Poly1305)();
    iVar3 = (*_softLinkCryptoAEADDecryptMessageOneShot)
                      (uVar7,&local_58,0x20,local_a0,local_80,0,0,lVar6,sVar12,pvVar10,
                       lVar6 + sVar12,0x10);
    if (iVar3 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      lVar6 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Failed to decrypt payload.");
      goto LAB_00176649;
    }
    lVar6 = _CFDataCreate(local_a8,pvVar10,sVar12);
    if (lVar6 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Failed to create data.";
      lVar6 = 0;
      goto LAB_00176789;
    }
    iVar3 = 0;
    lVar5 = _CFPropertyListCreateWithData(local_a8,lVar6,2,0,&local_b0);
    lVar8 = lVar5;
    if (lVar5 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to create property list: %@",local_b0);
      goto LAB_00176795;
    }
  }
  uVar7 = _CFRetain(lVar5);
  *param_4 = uVar7;
LAB_00176392:
  if (local_b0 != 0) {
    _CFRelease();
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (local_90 != (void *)0x0) {
    _free(local_90);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_98 != 0) {
    _CFRelease();
  }
  if (pvVar10 != (void *)0x0) {
    _free(pvVar10);
  }
  if (local_88 != 0) {
    _CFRelease();
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

