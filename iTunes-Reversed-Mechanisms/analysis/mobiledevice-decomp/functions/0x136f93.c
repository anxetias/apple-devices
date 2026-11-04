// rea decompile_all
// name: _AMDeviceDeleteHostPairingRecordForUDID
// address: 0x136f93
// body: available
// range: 0x136f93-0x137b02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x137afe to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceDeleteHostPairingRecordForUDID(long param_1)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  dispatch_object_t object;
  dispatch_queue_t pdVar10;
  dispatch_time_t timeout;
  int iVar11;
  char cVar12;
  bool bVar13;
  undefined8 local_238;
  undefined8 *local_230;
  undefined8 local_228;
  code *local_220;
  code *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 *local_200;
  undefined8 local_1f8;
  code *local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  code *local_1c8;
  undefined *local_1c0;
  dispatch_object_t local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined8 *puStack_1a0;
  long *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  char *local_168;
  char *local_160;
  char *local_158;
  long local_150;
  long local_148;
  char *local_140;
  char *local_138;
  char *local_130;
  long local_128;
  char *local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  dispatch_object_t local_100;
  dispatch_object_t local_f8;
  char local_e9;
  cfstringStruct *local_e8;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *local_a0;
  dispatch_object_t local_98;
  undefined8 *local_90;
  long local_88;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar6 = "Invalid input.";
  }
  else {
    lVar4 = _CFStringGetCStringPtr(param_1,0x8000100);
    if (lVar4 != 0) {
      uVar5 = _CFStringGetCStringPtr(param_1,0x8000100);
      lVar4 = _AMDeviceCreate(0,0,uVar5,0);
      if (lVar4 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Failed to create device.");
        iVar11 = -0x17fffffd;
        goto LAB_00137982;
      }
      uVar3 = _USBMuxDeletePairingRecord(*(undefined8 *)(lVar4 + 0x20));
      cVar12 = (uVar3 & 0xfffffffd) != 0;
      if ((bool)cVar12) {
        local_108 = param_1;
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar9 = _md_log_log;
        uVar5 = *(undefined8 *)(lVar4 + 0x20);
        pcVar6 = _strerror(uVar3);
        __os_log_internal(0,uVar9,0x10,"Failed to delete pairing record for %@: %d (%s)",uVar5,uVar3
                          ,pcVar6);
        param_1 = local_108;
      }
      local_150 = *(long *)(lVar4 + 0x20);
      local_230 = &local_238;
      local_238 = 0;
      local_228 = 0x3052000000;
      local_220 = ___Block_byref_object_copy__5112;
      local_218 = ___Block_byref_object_dispose__5113;
      local_210 = 0;
      local_200 = &local_208;
      local_208 = 0;
      local_1f8 = 0x3052000000;
      local_1f0 = ___Block_byref_object_copy__5112;
      local_1e8 = ___Block_byref_object_dispose__5113;
      local_1e0 = 0;
      if (local_150 == 0) {
        pcVar6 = "Invalid inputs.";
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
LAB_00137620:
        local_100._os_obj = (_os_object_s *)0x0;
LAB_0013762b:
        local_f8._os_obj = (_os_object_s *)0x0;
LAB_00137636:
        bVar13 = false;
        __os_log_internal(0,_md_log_log,0x10,pcVar6);
      }
      else {
        lVar7 = (*_getCUPairingManagerClass)();
        if (lVar7 != 0) {
          local_100._os_obj =
               (_os_object_s *)
               _dispatch_queue_create("MobileDevice-SPRPair",(dispatch_queue_attr_t)0x0);
          if (local_100._os_obj == (_os_object_s *)0x0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar6 = "Failed to create dispatch queue.";
            goto LAB_00137620;
          }
          local_f8._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
          if (local_f8._os_obj == (_os_object_s *)0x0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar6 = "Failed to create semaphore.";
            goto LAB_0013762b;
          }
          uVar5 = (*_getCUPairingManagerClass)();
          uVar5 = _objc_alloc(uVar5);
          lVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"init");
          if (lVar7 != 0) {
            (*(code *)PTR__objc_msgSend_00441098)(lVar7,"setDispatchQueue:",local_100._os_obj);
            (*(code *)PTR__objc_msgSend_00441098)(lVar7,"getPairedPeersWithOptions:completion:",4);
            _dispatch_semaphore_wait((dispatch_semaphore_t)local_f8._os_obj,0xffffffffffffffff);
            local_1a8 = 0;
            puStack_1a0 = (undefined8 *)0x0;
            local_198 = (long *)0x0;
            uStack_190 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_178 = 0;
            uStack_170 = 0;
            local_110 = local_230[5];
            lVar8 = (*(code *)PTR__objc_msgSend_00441098)
                              (local_110,"countByEnumeratingWithState:objects:count:",&local_1a8,
                               &local_b8,0x10);
            puVar1 = PTR__objc_msgSend_00441098;
            local_128 = lVar4;
            local_118 = lVar7;
            local_108 = param_1;
            local_e9 = cVar12;
            if (lVar8 != 0) {
              local_148 = *local_198;
              do {
                local_168 = "info";
                local_160 = "objectForKeyedSubscript:";
                local_158 = "isEqualToString:";
                local_120 = "dictionaryWithObjects:forKeys:count:";
                local_140 = "setInfo:";
                local_138 = "setAcl:";
                local_130 = "savePairedPeer:options:completion:";
                lVar4 = 0;
                do {
                  if (*local_198 != local_148) {
                    _objc_enumerationMutation(local_110);
                  }
                  uVar5 = puStack_1a0[lVar4];
                  uVar9 = (*(code *)puVar1)(uVar5,local_168);
                  uVar9 = (*(code *)puVar1)(uVar9,local_160,&cf_udid);
                  cVar12 = (*(code *)puVar1)(uVar9,local_158,local_150);
                  if (cVar12 != '\0') {
                    local_d8 = &cf_HostID;
                    local_c8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNull,"null");
                    local_d0 = &cf_udid;
                    local_c0 = (*(code *)puVar1)(&_OBJC_CLASS___NSNull,"null");
                    uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,local_120,&local_c8,
                                              &local_d8,2);
                    (*(code *)puVar1)(uVar5,local_140,uVar9);
                    local_e8 = &cf_com_apple_developer;
                    local_e0 = (*(code *)puVar1)(&_OBJC_CLASS___NSNull,"null");
                    uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,local_120,&local_e0,
                                              &local_e8,1);
                    (*(code *)puVar1)(uVar5,local_138,uVar9);
                    local_1d8 = PTR___NSConcreteStackBlock_004412a8;
                    local_1d0 = 0xc2000000;
                    local_1c8 = ___deleteSRPPairingRecord_block_invoke_34;
                    local_1c0 = &___block_descriptor_48_e8_32o40r_e17_v16__0__NSError_8l;
                    local_1b0 = &local_208;
                    local_1b8._os_obj = local_f8._os_obj;
                    (*(code *)puVar1)(local_118,local_130,uVar5,4,&local_1d8);
                    _dispatch_semaphore_wait
                              ((dispatch_semaphore_t)local_f8._os_obj,0xffffffffffffffff);
                  }
                  lVar4 = lVar4 + 1;
                } while (lVar8 != lVar4);
                lVar8 = (*(code *)puVar1)(local_110,"countByEnumeratingWithState:objects:count:",
                                          &local_1a8,&local_b8,0x10);
              } while (lVar8 != 0);
            }
            cVar12 = local_e9;
            param_1 = local_108;
            lVar4 = local_128;
            bVar13 = local_200[5] == 0;
            if (!bVar13) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,"Failed to remove SRP pairing record: %@",
                                local_200[5]);
            }
            lVar7 = local_118;
            (*(code *)PTR__objc_msgSend_00441098)(local_118,"invalidate");
            (*(code *)PTR__objc_release_004410a0)(lVar7);
            goto LAB_00137656;
          }
          pcVar6 = "Failed to create pairing manager.";
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          goto LAB_00137636;
        }
        bVar13 = true;
        local_100._os_obj = (_os_object_s *)0x0;
        local_f8._os_obj = (_os_object_s *)0x0;
      }
LAB_00137656:
      if (local_230[5] != 0) {
        (*(code *)PTR__objc_release_004410a0)();
      }
      if (local_100._os_obj != (_os_object_s *)0x0) {
        _dispatch_release(local_100);
      }
      if (local_f8._os_obj != (_os_object_s *)0x0) {
        _dispatch_release(local_f8);
      }
      if (local_200[5] != 0) {
        (*(code *)PTR__objc_release_004410a0)();
      }
      __Block_object_dispose(&local_208,8);
      __Block_object_dispose(&local_238,8);
      if (!bVar13) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Failed to delete CUPairing record for %@.",
                          *(undefined8 *)(lVar4 + 0x20));
        cVar12 = '\x01';
      }
      cVar2 = __AMDRemotePairingSupportedOnHost();
      if ((cVar2 == '\0') || (cVar2 = __AMDRemotePairingDiscoveryEnabled(), cVar2 == '\0')) {
LAB_0013796b:
        iVar11 = -0x17ffffa4;
        if (cVar12 == '\0') {
          iVar11 = 0;
        }
      }
      else {
        local_1a8 = 0;
        local_198 = (long *)0x2020000000;
        uStack_190 = CONCAT44(uStack_190._4_4_,0xe8000001);
        puStack_1a0 = &local_1a8;
        local_e9 = cVar12;
        cVar12 = __AMDRemotePairingSupportedOnHost();
        if (cVar12 == '\0') {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,
                            "RemotePairing unsupported; cannot delete RP pairing records for UDID \'%@\'"
                            ,param_1);
          iVar11 = -0x17fffff1;
LAB_001378e2:
          __Block_object_dispose(&local_1a8,8);
        }
        else {
          object._os_obj = (_os_object_s *)_dispatch_group_create();
          if (object._os_obj == (_os_object_s *)0x0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Failed to allocate dispatch group.");
            iVar11 = -0x17ffff0f;
            goto LAB_001378e2;
          }
          _dispatch_group_enter((dispatch_group_t)object._os_obj);
          uVar5 = (*_getRPConnectableDeviceClass)();
          pdVar10 = _dispatch_get_global_queue(0,0);
          local_b8 = PTR___NSConcreteStackBlock_004412a8;
          local_b0 = 0xc2000000;
          local_a8 = ____AMDRemotePairingDeleteHostPairingRecordForUDID_block_invoke;
          local_a0 = &___block_descriptor_56_e8_32o40r_e17_v16__0__NSError_8l;
          local_98._os_obj = object._os_obj;
          local_90 = &local_1a8;
          local_88 = param_1;
          (*(code *)PTR__objc_msgSend_00441098)
                    (uVar5,"unpairDeviceWithUDID:targetQueue:completionHandler:",param_1,pdVar10);
          timeout = _dispatch_time(0,10000000000);
          lVar7 = _dispatch_group_wait((dispatch_group_t)object._os_obj,timeout);
          cVar12 = local_e9;
          if (lVar7 == 0) {
            iVar11 = *(int *)(puStack_1a0 + 3);
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Timed out waiting to unpair with UDID \'%@\'",
                              param_1);
            iVar11 = -0x17fffff4;
          }
          _dispatch_release(object);
          __Block_object_dispose(&local_1a8,8);
          if (iVar11 == 0) goto LAB_0013796b;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar5 = _md_log_log;
        uVar9 = _AMDErrorString(iVar11);
        __os_log_internal(0,uVar5,0x10,
                          "Failed to delete RemotePairing record for UDID \'%@\': 0x%08x (%s)",
                          param_1,iVar11,uVar9);
      }
      _CFRelease(lVar4);
      goto LAB_00137982;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar6 = "Failed to retrieve C string.";
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar6);
  iVar11 = -0x17fffff9;
LAB_00137982:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar11;
}

