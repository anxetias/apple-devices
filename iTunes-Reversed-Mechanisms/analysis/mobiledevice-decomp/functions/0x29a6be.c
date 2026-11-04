// rea decompile_all
// name: _AMAuthInstallProvisioningProvisionIfNecessary
// address: 0x29a6be
// body: available
// range: 0x29a6be-0x29ad41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallProvisioningProvisionIfNecessary(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uStack_60;
  undefined4 local_54;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  if (param_1 == 0) {
    iVar3 = 1;
    goto LAB_0029aa79;
  }
  iVar3 = 1;
  if ((param_2 != 0) && (lVar5 = *(long *)(param_1 + 0x30), lVar5 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x130);
    if (uVar1 < 0xc) {
      iVar3 = 0;
      if ((0xf81U >> (uVar1 & 0x1f) & 1) == 0) {
        if ((0x26U >> (uVar1 & 0x1f) & 1) == 0) {
          if (*(long *)(lVar5 + 0x48) == 0) {
            *(undefined4 *)(param_1 + 0x130) = 8;
            pcVar6 = "encryptedSessionKey is NULL";
LAB_0029a8b9:
            _AMAuthInstallLog(3,"AMAuthInstallProvisioningProvisionIfNecessary",pcVar6);
            iVar3 = 0x13;
          }
          else {
            iVar3 = *(int *)(lVar5 + 4);
            if ((((((iVar3 == 0x5e) || (iVar3 == 0x68)) || (iVar3 == 0x3b0e1)) ||
                 ((((iVar3 == 0x7f0e1 || (iVar3 == 0xe50e1)) ||
                   ((iVar3 == 0x1440e1 || ((iVar3 == 0x1720e1 || (iVar3 == 0x19f0e1)))))) ||
                  (iVar3 == 0x1fe0e1)))) ||
                ((((iVar3 == 0x2af0e1 || (iVar3 == 0x7f50e1)) || (iVar3 == 0x9210e1)) ||
                 ((iVar3 == 0x9540e1 || (*(char *)(param_1 + 0x148) != '\0')))))) ||
               ((*(long *)(lVar5 + 0x20) == 0 &&
                ((*(long *)(lVar5 + 0x28) == 0 && (*(long *)(lVar5 + 0x30) == 0)))))) {
              if (*(int *)(lVar5 + 0x60) != 3) {
                pcVar6 = "Cannot provision unfused boards";
                goto LAB_0029a8b9;
              }
              _AMAuthInstallLog(5,"AMAuthInstallProvisioningProvisionIfNecessary",
                                "Requesting manifest from server (%@)",
                                *(undefined8 *)(param_1 + 0x128));
              iVar3 = _AMAuthInstallProvisioningRequestManifest(param_1,&local_38);
              *(undefined4 *)(param_1 + 0x130) = 4;
              if (iVar3 != 0) {
                pcVar6 = "AMAuthInstallProvisioningRequestManifest failed";
                goto LAB_0029ad07;
              }
              if (local_38 != 0) goto LAB_0029abb9;
            }
            else {
              _AMAuthInstallLog(5,"AMAuthInstallProvisioningProvisionIfNecessary",
                                "Performing local re-lock");
              iVar3 = _AMAuthInstallBasebandLocalProvisionDevice(param_1,&local_38);
              if (iVar3 != 0) {
                *(undefined4 *)(param_1 + 0x130) = 8;
                pcVar6 = "AMAuthInstallMonetLocalProvisionDevice failed";
LAB_0029ad07:
                _AMAuthInstallLog(3,"AMAuthInstallProvisioningProvisionIfNecessary",pcVar6);
                goto LAB_0029aa6e;
              }
              if (local_38 != 0) {
                *(undefined4 *)(param_1 + 0x130) = 6;
LAB_0029abb9:
                _CFDictionaryRemoveAllValues(param_2);
                _CFDictionarySetValue(param_2,&cf_provisioning_manifest_bin,local_38);
                iVar3 = 0;
                goto LAB_0029aa6e;
              }
              *(undefined4 *)(param_1 + 0x130) = 8;
            }
            _AMAuthInstallLog(3,"AMAuthInstallProvisioningProvisionIfNecessary",
                              "manifestData is NULL");
            iVar3 = 0xe;
          }
        }
        else {
          if ((*(long *)(lVar5 + 0x58) == 0) || (cVar2 = _CFBooleanGetValue(), cVar2 != '\x01')) {
LAB_0029a777:
            if (*(long *)(*(long *)(param_1 + 0x30) + 0x50) != 0) {
              cVar2 = _CFBooleanGetValue();
              if (cVar2 != '\x01') {
                lVar5 = *(long *)(param_1 + 0x30);
                if (((*(long *)(lVar5 + 0x20) != 0) || (*(long *)(lVar5 + 0x28) != 0)) ||
                   (*(long *)(lVar5 + 0x30) != 0)) {
                  if (*(char *)(param_1 + 0x148) == '\0') {
                    *(undefined4 *)(param_1 + 0x130) = 7;
                    pcVar6 = 
                    "Device already has MEID and/or IMEI and/or IMEI2. Bringup provisioning complete. Not attempting to provision."
                    ;
                    goto LAB_0029a97b;
                  }
                  _AMAuthInstallLog(5,"AMAuthInstallProvisioningProvisionIfNecessary",
                                    "Device already has MEID and/or IMEI and/or IMEI2. Force provisioning is enabled requesting new values."
                                   );
                }
                iVar3 = _AMAuthInstallProvisioningRequestInfoPlist(param_1,&local_48);
                *(undefined4 *)(param_1 + 0x130) = 5;
                if (iVar3 == 0) {
                  if (local_48 != 0) {
                    _CFDictionarySetValue(param_2,&cf_provisioning_info_plist);
                    pcVar6 = "Bringup baseband found, doing single stage provisioning";
                    goto LAB_0029a97b;
                  }
                  pcVar6 = "info.plist is NULL";
                  iVar3 = 0;
                }
                else {
                  pcVar6 = "AMAuthInstallProvisioningRequestInfoPlist failed";
                }
                goto LAB_0029ac3e;
              }
              local_50 = 0;
              iVar3 = _AMAuthInstallCryptoRegisterKeys(param_1);
              if (iVar3 != 0) goto LAB_0029aa6e;
              if ((*(char *)(param_1 + 0x148) == '\0') &&
                 (((lVar5 = *(long *)(param_1 + 0x30), *(long *)(lVar5 + 0x20) != 0 ||
                   (*(long *)(lVar5 + 0x28) != 0)) || (*(long *)(lVar5 + 0x30) != 0)))) {
                _AMAuthInstallLog(5,"AMAuthInstallProvisioningProvisionIfNecessary",
                                  "Local re-locking enabled. Forcing use of P1 provisioning key.");
                iVar4 = _AMAuthInstallCryptoCreateSubjectPublicKeyInfoForKey
                                  (param_1,&cf_bb_monet_ticket_provisioning_public,&local_40);
LAB_0029aa31:
                if (local_40 != 0) {
                  _CFDictionarySetValue(param_2,&cf_provisioning_puk_pem);
                  _AMAuthInstallLog(5,"AMAuthInstallProvisioningProvisionIfNecessary",
                                    "Mature baseband found, doing two stage provisioning");
                  *(undefined4 *)(param_1 + 0x130) = 2;
                  iVar3 = 0;
                  goto LAB_0029aa6e;
                }
                pcVar6 = "Public key is NULL";
                iVar3 = iVar4;
              }
              else {
                cVar2 = __AMAuthInstallSupportsECProvision(param_1);
                if (cVar2 != '\0') {
                  iVar4 = 0;
                  _AMAuthInstallLog(5,"AMAuthInstallProvisioningProvisionIfNecessary",
                                    "ECDH Server based provisioning enabled. Creating empty puk.pem file for BBUpdater"
                                   );
                  local_54 = 0xefbeadde;
                  local_40 = _CFDataCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                                           &local_54,4);
                  goto LAB_0029aa31;
                }
                _AMAuthInstallLog(5,"AMAuthInstallProvisioningProvisionIfNecessary",
                                  "LEGACY Server based provisioning enabled. Reading provisioning key from settings."
                                 );
                iVar3 = _AMAuthInstallBasebandGetKeyHash
                                  (param_1,&cf_BbProvisioningManifestKeyHash,&local_50);
                if (iVar3 == 0) {
                  if (local_50 == 0) {
                    pcVar6 = "keyHashData is NULL";
                    iVar3 = 0;
                  }
                  else {
                    iVar3 = _AMAuthInstallCryptoCreateSubjectPublicKeyInfoForKeyFromHash
                                      (param_1,local_50,&local_40);
                    iVar4 = 0;
                    if (iVar3 == 0) goto LAB_0029aa31;
                    pcVar6 = "AMAuthInstallCryptoCreateSubjectPublicKeyInfoForKey failed";
                  }
                }
                else {
                  pcVar6 = "AMAuthInstallBasebandGetKeyHash failed";
                }
              }
              *(undefined4 *)(param_1 + 0x130) = 8;
              goto LAB_0029ac3e;
            }
            lVar5 = _CFDataCreateMutable(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
            if (lVar5 == 0) {
              _AMAuthInstallLog(3,"AMAuthInstallProvisioningProvisionIfNecessary",
                                "emptyData is NULL");
              iVar3 = 2;
              goto LAB_0029aa6e;
            }
            _CFDictionarySetValue(param_2,&cf_provisioning_,lVar5);
            _CFRelease(lVar5);
            pcVar6 = "Baseband not reporting manifest status, not attempting to provision yet.";
LAB_0029a97b:
            iVar3 = 0;
            uStack_60 = 5;
          }
          else {
            if ((*(char *)(param_1 + 0x148) != '\0') || (*(char *)(param_1 + 0x149) != '\0')) {
              _AMAuthInstallLog(5,"AMAuthInstallProvisioningProvisionIfNecessary",
                                "Existing provisioning manifest found. Force provisioning is enabled; provisioning anyway."
                               );
              goto LAB_0029a777;
            }
            iVar3 = _AMAuthInstallProvisioningSendAck(param_1,0);
            if (iVar3 == 0x18) {
              _AMAuthInstallLog(5,"AMAuthInstallProvisioningProvisionIfNecessary",
                                "provisioning ack failed, enabling force provisioning.");
              *(undefined1 *)(param_1 + 0x148) = 1;
              goto LAB_0029a777;
            }
            if (iVar3 == 0) {
              *(undefined4 *)(param_1 + 0x130) = 7;
              pcVar6 = "Existing provisioning manifest found. Not attempting to provision.";
              goto LAB_0029a97b;
            }
            pcVar6 = "Provisioning server failed to respond, cannot provision.";
LAB_0029ac3e:
            uStack_60 = 3;
          }
          _AMAuthInstallLog(uStack_60,"AMAuthInstallProvisioningProvisionIfNecessary",pcVar6);
        }
      }
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallProvisioningProvisionIfNecessary",
                        "Unexpected provisioning state = %d");
      iVar3 = 99;
    }
  }
LAB_0029aa6e:
  if (*(int *)(param_1 + 0x130) == 8) {
    iVar3 = 0x13;
  }
LAB_0029aa79:
  _SafeRelease(0);
  _SafeRelease(local_48);
  _SafeRelease(local_40);
  _SafeRelease(local_38);
  return iVar3;
}

