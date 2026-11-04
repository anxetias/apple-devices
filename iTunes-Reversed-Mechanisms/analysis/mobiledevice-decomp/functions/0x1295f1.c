// rea decompile_all
// name: ___47-[PersonalizedImage_initializeImageProperties:]_block_invoke
// address: 0x1295f1
// body: available
// range: 0x1295f1-0x129ebd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___47__PersonalizedImage_initializeImageProperties___block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_48 = 0;
  local_38 = param_3;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSDictionary,"class");
  cVar2 = (*(code *)puVar1)(param_2,"isKindOfClass:",uVar3);
  if (cVar2 == '\0') {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar9 = "Build identity %d is not a dictionary";
    uVar3 = local_38;
  }
  else {
    local_40 = param_1;
    uVar3 = (*(code *)puVar1)(param_2,"objectForKeyedSubscript:",&cf_ApBoardID);
    uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
    cVar2 = (*(code *)puVar1)(uVar3,"isKindOfClass:",uVar4);
    if (cVar2 == '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar9 = "Build identity %d missing expected key \'ApBoardID\'";
      uVar3 = local_38;
    }
    else {
      uVar4 = (*(code *)puVar1)(param_2,"objectForKeyedSubscript:",&cf_ApChipID);
      uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
      cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",uVar5);
      if (cVar2 == '\0') {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar9 = "Build identity %d missing expected key \'ApChipID\'";
        uVar3 = local_38;
      }
      else {
        uVar5 = (*(code *)puVar1)(param_2,"objectForKeyedSubscript:",&cf_ApSecurityDomain);
        uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
        cVar2 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar6);
        if (cVar2 == '\0') {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar9 = "Build identity %d missing expected key \'ApSecurityDomain\'";
          uVar3 = local_38;
        }
        else {
          uVar3 = (*(code *)puVar1)(&_OBJC_CLASS___NSScanner,"scannerWithString:",uVar3);
          cVar2 = (*(code *)puVar1)(uVar3,"scanHexLongLong:",&local_48);
          lVar8 = local_48;
          if (cVar2 == '\0') {
            return;
          }
          uVar3 = (*(code *)puVar1)(*(undefined8 *)(local_40 + 0x20),"boardID");
          lVar7 = (*(code *)puVar1)(uVar3,"unsignedLongLongValue");
          if (lVar8 != lVar7) {
            return;
          }
          uVar3 = (*(code *)puVar1)(&_OBJC_CLASS___NSScanner,"scannerWithString:",uVar4);
          cVar2 = (*(code *)puVar1)(uVar3,"scanHexLongLong:",&local_48);
          lVar8 = local_48;
          if (cVar2 == '\0') {
            return;
          }
          uVar3 = (*(code *)puVar1)(*(undefined8 *)(local_40 + 0x20),"chipID");
          lVar7 = (*(code *)puVar1)(uVar3,"unsignedLongLongValue");
          if (lVar8 != lVar7) {
            return;
          }
          uVar3 = (*(code *)puVar1)(&_OBJC_CLASS___NSScanner,"scannerWithString:",uVar5);
          cVar2 = (*(code *)puVar1)(uVar3,"scanHexLongLong:",&local_48);
          lVar8 = local_48;
          if (cVar2 == '\0') {
            return;
          }
          uVar3 = (*(code *)puVar1)(*(undefined8 *)(local_40 + 0x20),"securityDomain");
          lVar7 = (*(code *)puVar1)(uVar3,"unsignedLongLongValue");
          if (lVar8 != lVar7) {
            return;
          }
          uVar3 = (*(code *)puVar1)(param_2,"objectForKeyedSubscript:",&cf_Info);
          uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
          cVar2 = (*(code *)puVar1)(uVar3,"isKindOfClass:",uVar4);
          uVar3 = local_38;
          if (cVar2 == '\0') {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar9 = "Build identity %d missing expected key \'Info\'";
          }
          else {
            uVar3 = (*(code *)puVar1)(param_2,"objectForKeyedSubscript:",&cf_Manifest);
            uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
            cVar2 = (*(code *)puVar1)(uVar3,"isKindOfClass:",uVar4);
            if (cVar2 == '\0') {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar9 = "Build identity %d missing expected key \'Manifest\'";
              uVar3 = local_38;
            }
            else {
              lVar8 = (*(code *)PTR__objc_msgSend_00441098)
                                (uVar3,"objectForKeyedSubscript:",&cf_LoadableTrustCache);
              if (lVar8 != 0) {
                uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
                cVar2 = (*(code *)puVar1)(lVar8,"isKindOfClass:",uVar4);
                if (cVar2 == '\0') {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar9 = "Build identity %d has invalid value for key \'LoadableTrustCache\'";
                  uVar3 = local_38;
                  goto LAB_00129bc0;
                }
                uVar4 = (*(code *)puVar1)(lVar8,"objectForKeyedSubscript:",&cf_Info);
                uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
                cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",uVar5);
                if (cVar2 == '\0') {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar9 = "Build identity %d missing expected key \'Info\'";
                  uVar3 = local_38;
                  goto LAB_00129bc0;
                }
                uVar4 = (*(code *)puVar1)(uVar4,"objectForKeyedSubscript:",&cf_Path);
                *(undefined8 *)(*(long *)(*(long *)(local_40 + 0x28) + 8) + 0x28) = uVar4;
                uVar4 = *(undefined8 *)(*(long *)(*(long *)(local_40 + 0x28) + 8) + 0x28);
                uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
                cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",uVar5);
                if (cVar2 == '\0') {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar9 = "Build identity %d missing expected key \'Path\'";
                  uVar3 = local_38;
                  goto LAB_00129bc0;
                }
              }
              uVar3 = (*(code *)puVar1)(uVar3,"objectForKeyedSubscript:",&cf_PersonalizedDMG);
              uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
              cVar2 = (*(code *)puVar1)(uVar3,"isKindOfClass:",uVar4);
              if (cVar2 == '\0') {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                pcVar9 = "Build identity %d missing expected key \'PersonalizedDMG\'";
                uVar3 = local_38;
              }
              else {
                uVar4 = (*(code *)puVar1)(uVar3,"objectForKeyedSubscript:",&cf_Name);
                uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
                cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",uVar5);
                if (cVar2 == '\0') {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar9 = "Build identity %d missing expected key \'Name\'";
                  uVar3 = local_38;
                }
                else {
                  uVar5 = (*(code *)puVar1)(*(undefined8 *)(local_40 + 0x20),"imageVariant");
                  cVar2 = (*(code *)puVar1)(uVar4,"isEqualToString:",uVar5);
                  if (cVar2 == '\0') {
                    return;
                  }
                  uVar3 = (*(code *)puVar1)(uVar3,"objectForKeyedSubscript:",&cf_Info);
                  uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
                  cVar2 = (*(code *)puVar1)(uVar3,"isKindOfClass:",uVar4);
                  if (cVar2 == '\0') {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    pcVar9 = "Build identity %d missing expected key \'Info\'";
                    uVar3 = local_38;
                  }
                  else {
                    uVar4 = (*(code *)puVar1)(uVar3,"objectForKeyedSubscript:",&cf_Path);
                    lVar8 = local_40;
                    *(undefined8 *)(*(long *)(*(long *)(local_40 + 0x30) + 8) + 0x28) = uVar4;
                    uVar4 = *(undefined8 *)(*(long *)(*(long *)(local_40 + 0x30) + 8) + 0x28);
                    uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
                    cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",uVar5);
                    if (cVar2 != '\0') {
                      uVar3 = (*(code *)puVar1)(uVar3,"objectForKeyedSubscript:",&cf_HashMethod);
                      *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x28) = uVar3;
                      uVar3 = *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x28);
                      uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
                      cVar2 = (*(code *)puVar1)(uVar3,"isKindOfClass:",uVar4);
                      if ((cVar2 != '\0') &&
                         (cVar2 = (*(code *)PTR__objc_msgSend_00441098)
                                            (*(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x28),
                                             "isEqualToString:",&cf_sha1), cVar2 != '\0')) {
                        (*(code *)PTR__objc_msgSend_00441098)
                                  (*(undefined8 *)(lVar8 + 0x20),"setDigestLength:",0x14);
                      }
                      *param_4 = 1;
                      return;
                    }
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    pcVar9 = "Build identity %d missing expected key \'Path\'";
                    uVar3 = local_38;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00129bc0:
  __os_log_internal(0,_md_log_log,0x10,pcVar9,uVar3);
  return;
}

