// rea decompile_all
// name: _USBCUpdateSendManifestRequest
// address: 0x270a06
// body: available
// range: 0x270a06-0x270e45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x270e41 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _USBCUpdateSendManifestRequest(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_170;
  undefined1 local_160 [88];
  code *local_108;
  code *local_100;
  code *local_d8;
  code *local_d0;
  code *local_c8;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined2 local_52;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uStack_170 = _DynamicAssetCreate(&local_60);
  if ((int)uStack_170 == 0) {
    _uarpZero(local_160,0xe0);
    local_108 = _DynamicAssetUARPGetBytes;
    local_100 = _DynamicAssetUARPSetBytes;
    local_d8 = _DynamicAssetUARPReleased;
    local_d0 = _fAssetProcessingNotification2;
    local_c8 = _fAssetProcessingNotificationAck;
    uVar2 = _uarpAssetTagStructPersonalization();
    _uarpPlatformEndpointPrepareDynamicAsset(param_1,param_1 + 0x438,local_60,uVar2,local_160);
    uVar2 = local_60;
    local_4c = 0;
    uStack_170 = _uarpPersonalizationRequestAssetInitialize(param_1,local_60,1);
    if ((int)uStack_170 == 0) {
      local_52 = 0;
      uStack_170 = _uarpPlatformAssetQueryAssetID(*param_2);
      if ((int)uStack_170 == 0) {
        uStack_170 = _uarpPersonalizationRequestAddRemoteAssetID(param_1,uVar2,local_52);
        if ((int)uStack_170 == 0) {
          uStack_170 = _uarpPersonalizationRequestPreparePayload(param_1,uVar2,0);
          if ((int)uStack_170 == 0) {
            uVar3 = _uarpAssetTagStructPersonalization();
            uStack_170 = _uarpPersonalizationRequestAddPayloadTag(param_1,uVar2,0,uVar3);
            if ((int)uStack_170 == 0) {
              uStack_170 = _uarpPersonalizationRequestAddRemoteAssetPayloadIndex
                                     (param_1,uVar2,0,*(undefined2 *)(param_2 + 2));
              if ((int)uStack_170 == 0) {
                uStack_170 = _uarpPersonalizationRequestAddManifestPrefix
                                       (param_1,uVar2,0,"USBPortController",0x11);
                if ((int)uStack_170 == 0) {
                  uStack_170 = _uarpPersonalizationRequestAddPrefixNeedsLUN(param_1,uVar2,0,1);
                  if ((int)uStack_170 == 0) {
                    local_7c = 0;
                    _BackendGetPersParam(*(undefined8 *)(param_1 + 0x568),10,&local_7c,4,&local_4c);
                    if (local_7c == 0) {
                      uStack_170 = 0x36;
                    }
                    else {
                      uStack_170 = _uarpPersonalizationRequestAddLogicalUnitNumber(param_1,uVar2,0);
                      if ((int)uStack_170 == 0) {
                        local_64 = 0;
                        uStack_170 = _BackendGetPersParam
                                               (*(undefined8 *)(param_1 + 0x568),1,&local_64,4,
                                                &local_4c);
                        if ((int)uStack_170 == 0) {
                          uStack_170 = _uarpPersonalizationRequestAddChipID
                                                 (param_1,uVar2,0,local_64);
                          if ((int)uStack_170 == 0) {
                            local_78 = 0;
                            uStack_170 = _BackendGetPersParam
                                                   (*(undefined8 *)(param_1 + 0x568),2,&local_78,8,
                                                    &local_4c);
                            if ((int)uStack_170 == 0) {
                              uStack_170 = _uarpPersonalizationRequestAddBoardID64
                                                     (param_1,uVar2,0,local_78);
                              if ((int)uStack_170 == 0) {
                                local_70 = 0;
                                uStack_170 = _BackendGetPersParam
                                                       (*(undefined8 *)(param_1 + 0x568),3,&local_70
                                                        ,8,&local_4c);
                                if ((int)uStack_170 == 0) {
                                  uStack_170 = _uarpPersonalizationRequestAddECID
                                                         (param_1,uVar2,0,local_70);
                                  if ((int)uStack_170 == 0) {
                                    local_4f = 0;
                                    uStack_170 = _BackendGetPersParam
                                                           (*(undefined8 *)(param_1 + 0x568),8,
                                                            &local_4f,1,&local_4c);
                                    if ((int)uStack_170 == 0) {
                                      uStack_170 = _uarpPersonalizationRequestAddSecurityDomain
                                                             (param_1,uVar2,0,local_4f);
                                      if ((int)uStack_170 == 0) {
                                        local_4e = 0;
                                        uStack_170 = _BackendGetPersParam
                                                               (*(undefined8 *)(param_1 + 0x568),4,
                                                                &local_4e,1,&local_4c);
                                        if ((int)uStack_170 == 0) {
                                          uStack_170 = _uarpPersonalizationRequestAddProductionMode
                                                                 (param_1,uVar2,0,local_4e);
                                          if ((int)uStack_170 == 0) {
                                            local_4d = 0;
                                            uStack_170 = _BackendGetPersParam
                                                                   (*(undefined8 *)(param_1 + 0x568)
                                                                    ,5,&local_4d,1,&local_4c);
                                            if ((int)uStack_170 == 0) {
                                              uStack_170 = 
                                                  _uarpPersonalizationRequestAddSecurityMode
                                                            (param_1,uVar2,0,local_4d);
                                              if ((int)uStack_170 == 0) {
                                                local_48 = 0;
                                                uStack_40 = 0;
                                                uStack_170 = _BackendGetPersParam
                                                                       (*(undefined8 *)
                                                                         (param_1 + 0x568),6,
                                                                        &local_48,0x10,&local_4c);
                                                if ((int)uStack_170 == 0) {
                                                  uStack_170 = 
                                                  _uarpPersonalizationRequestAddNonceHash
                                                            (param_1,uVar2,0,&local_48,0x10);
                                                  if ((int)uStack_170 == 0) {
                                                    bVar1 = _BackendGetFlags(*(undefined8 *)
                                                                              (param_1 + 0x568));
                                                    uStack_170 = 
                                                  _uarpPersonalizationRequestMoreRequestsToFollow
                                                            (param_1,uVar2,0,bVar1 >> 4 & 1);
                                                  if ((int)uStack_170 == 0) {
                                                    uStack_170 = 
                                                  _uarpPersonalizationRequestAddMeasurement
                                                            (param_1,uVar2,0,param_2[5],
                                                             *(undefined4 *)(param_2 + 6));
                                                  if ((int)uStack_170 == 0) {
                                                    uStack_170 = 
                                                  _uarpPersonalizationRequestAssetFinalize
                                                            (param_1,uVar2);
                                                  if ((int)uStack_170 == 0) {
                                                    if ((_inRestore == '\x01') &&
                                                       ((_logLevel & 2) != 0)) {
                                                      _puts("Offering IM4M to controller");
                                                    }
                                                    else {
                                                      _uarpLogInfo(3,"Offering IM4M to controller\n"
                                                                  );
                                                    }
                                                    uStack_170 = _uarpPlatformEndpointOfferAsset
                                                                           (param_1,param_1 + 0x438,
                                                                            local_60);
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uStack_170;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

