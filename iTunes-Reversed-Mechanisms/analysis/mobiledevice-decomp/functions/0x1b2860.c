// rea decompile_all
// name: __AMAuthInstallSsoCreateServiceTicketAndDAWToken
// address: 0x1b2860
// body: available
// range: 0x1b2860-0x1b2ee0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallSsoCreateServiceTicketAndDAWToken
              (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 *param_5,
              undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  char *pcVar10;
  cfstringStruct *pcVar11;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  
  local_90 = 0;
  local_98 = param_3;
  local_78 = param_2;
  local_70 = param_6;
  local_68 = param_5;
  uVar4 = _CFNumberCreate(0,4,&local_98);
  local_38 = 0;
  local_58 = 0;
  local_60 = 0;
  local_88 = 0;
  local_80 = 0;
  local_50 = 0;
  if (__ssoFrameworkBundle == 0) {
    __AMAuthInstallSsoCreateServiceTicketAndDAWToken_cold_9();
  }
  else if (*(long *)(__ssoSymbolTable + 8) == 0) {
    __AMAuthInstallSsoCreateServiceTicketAndDAWToken_cold_8();
  }
  else if (*(long *)(__ssoSymbolTable + 0x10) == 0) {
    __AMAuthInstallSsoCreateServiceTicketAndDAWToken_cold_7();
  }
  else {
    if (*(long *)(__ssoSymbolTable + 0x18) != 0) {
      uVar5 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,1,
                         PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      cVar1 = _AMAuthInstallSsoShouldUseStealthMode(param_1);
      if (cVar1 != '\0') {
        _CFDictionarySetValue
                  (uVar5,&cf_SSOKeyStealthMode,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
        _AMAuthInstallLog(6,"_AMAuthInstallSsoCreateServiceTicketAndDAWToken","Using stealth mode");
      }
      if (0 < local_98) {
        _CFDictionarySetValue(uVar5,&cf_SSOKeyAppID,uVar4);
      }
      if (param_7 != (undefined8 *)0x0) {
        _CFDictionarySetValue
                  (uVar5,&cf_SSOKeyIsDAWTokenRequired,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
      }
      local_48 = uVar5;
      pcVar6 = (cfstringStruct *)
               _AMAuthInstallPreferencesCopyStringValue(&cf_AuthInstallSSORealm,&cf_SSORealm);
      pcVar11 = &cf_APPLECONNECT_APPLE_COM;
      if (pcVar6 != (cfstringStruct *)0x0) {
        pcVar11 = pcVar6;
      }
      pcVar7 = (cfstringStruct *)
               _AMAuthInstallPreferencesCopyStringValue(&cf_AuthInstallSSOEnv,&cf_SSOEnv);
      pcVar6 = &cf_INT;
      if (pcVar7 != (cfstringStruct *)0x0) {
        pcVar6 = pcVar7;
      }
      pcVar8 = (cfstringStruct *)
               _AMAuthInstallPreferencesCopyStringValue(&cf_AuthInstallSSOHost,&cf_SSOHost);
      pcVar7 = &cf_sso_corp_apple_com;
      if (pcVar8 != (cfstringStruct *)0x0) {
        pcVar7 = pcVar8;
      }
      iVar2 = _pthread_mutex_lock((pthread_mutex_t *)&__ssoApiMutex);
      local_40 = pcVar11;
      if (iVar2 != 0) {
        __AMAuthInstallSsoCreateServiceTicketAndDAWToken_cold_1();
        iVar2 = 0xe;
        lVar9 = 0;
        goto LAB_001b2c6f;
      }
      _SafeRelease(0);
      uVar5 = local_48;
      local_38 = 0;
      iVar3 = (**(code **)(__ssoSymbolTable + 8))
                        (pcVar11,pcVar6,local_78,pcVar7,0,0,local_48,&local_58,&local_60,&local_90,0
                         ,&local_38);
      if (iVar3 != 0) {
        iVar2 = 0x10;
        if (iVar3 != -0x18831) {
          iVar2 = (iVar3 != -0x30d72) + 0x15;
        }
        pcVar10 = "SSOGetServiceTicket() error: %@";
LAB_001b2e5b:
        lVar9 = 0;
        _AMAuthInstallLog(3,"_AMAuthInstallSsoCreateServiceTicketAndDAWToken",pcVar10,local_38);
        goto LAB_001b2c63;
      }
      if (local_58 == 0) {
        __AMAuthInstallSsoCreateServiceTicketAndDAWToken_cold_5(&local_38);
LAB_001b2ec6:
        iVar2 = 0xe;
LAB_001b2ecc:
        lVar9 = 0;
      }
      else {
        if (local_60 == 0) {
          __AMAuthInstallSsoCreateServiceTicketAndDAWToken_cold_4(&local_38);
          goto LAB_001b2ec6;
        }
        if (local_98 < 1) {
LAB_001b2b35:
          _SafeRelease(local_38);
          local_38 = 0;
          iVar3 = (**(code **)(__ssoSymbolTable + 0x10))(local_90,local_80,uVar5,0,&local_38);
          if (iVar3 != 0) {
            iVar2 = 0x10;
            if (iVar3 != -0x18831) {
              iVar2 = (iVar3 != -0x30d72) + 0x15;
            }
            pcVar10 = "SSOPostLogin() error: %@";
            goto LAB_001b2e5b;
          }
          if (local_50 == 0) {
            lVar9 = 0;
          }
          else {
            uVar5 = _CFDictionaryGetValue(local_50,&cf_DAWToken);
            lVar9 = _AMSupportSafeRetain(uVar5);
            cVar1 = __CheckVerifyResult(local_50,&cf_AppID,uVar4);
            iVar2 = 0x1b;
            if ((cVar1 == '\0') ||
               (cVar1 = __CheckVerifyResult(local_50,&cf_TokenCreatorAppId,uVar4), cVar1 == '\0'))
            goto LAB_001b2c63;
          }
          if ((param_7 == (undefined8 *)0x0) || (lVar9 != 0)) {
            _AMAuthInstallLog(5,"_AMAuthInstallSsoCreateServiceTicketAndDAWToken",
                              "sso ticket granted for %@ (%@)",local_58,local_88);
            if (local_58 != 0 && local_68 != (undefined8 *)0x0) {
              uVar5 = _CFRetain();
              *local_68 = uVar5;
            }
            if (local_60 != 0 && local_70 != (undefined8 *)0x0) {
              uVar5 = _CFRetain();
              *local_70 = uVar5;
            }
            iVar2 = 0;
            if ((param_7 != (undefined8 *)0x0) && (lVar9 != 0)) {
              uVar5 = _CFRetain(lVar9);
              *param_7 = uVar5;
            }
            goto LAB_001b2c63;
          }
          __AMAuthInstallSsoCreateServiceTicketAndDAWToken_cold_2();
          iVar2 = 0x1b;
          goto LAB_001b2ecc;
        }
        _SafeRelease(local_38);
        local_38 = 0;
        iVar3 = (**(code **)(__ssoSymbolTable + 0x18))
                          (local_58,local_40,pcVar6,local_78,uVar4,local_60,uVar5,&local_88,
                           &local_80,&local_50,&local_38);
        if (iVar3 == 0) {
          if (local_50 == 0) {
            __AMAuthInstallSsoCreateServiceTicketAndDAWToken_cold_3();
            goto LAB_001b2ec6;
          }
          goto LAB_001b2b35;
        }
        iVar2 = 0x10;
        if (iVar3 != -0x18831) {
          iVar2 = (iVar3 != -0x30d72) + 0x15;
        }
        lVar9 = 0;
        _AMAuthInstallLog(3,"_AMAuthInstallSsoCreateServiceTicketAndDAWToken",
                          "SSOVerifyServiceTicket() error %d: %@",iVar3,local_38);
      }
LAB_001b2c63:
      _pthread_mutex_unlock((pthread_mutex_t *)&__ssoApiMutex);
      goto LAB_001b2c6f;
    }
    __AMAuthInstallSsoCreateServiceTicketAndDAWToken_cold_6();
  }
  iVar2 = 99;
  lVar9 = 0;
  pcVar7 = (cfstringStruct *)0x0;
  pcVar6 = (cfstringStruct *)0x0;
  local_40 = (cfstringStruct *)0x0;
  local_48 = 0;
LAB_001b2c6f:
  if (iVar2 != 0 && (iVar2 != 0x1b || 0 >= param_4)) {
    _AMSupportCreateErrorInternal
              (param_8,&cf_AuthInstallErrorDomain,iVar2,0,&cf__s___,
               "_AMAuthInstallSsoCreateServiceTicketAndDAWToken",local_38);
  }
  _SafeRelease(lVar9);
  _SafeRelease(local_50);
  _SafeRelease(local_80);
  _SafeRelease(local_88);
  _SafeRelease(local_58);
  _SafeRelease(local_60);
  _SafeRelease(local_40);
  _SafeRelease(pcVar6);
  _SafeRelease(pcVar7);
  _SafeRelease(local_38);
  _SafeRelease(uVar4);
  _SafeRelease(local_48);
  _SafeRelease(local_90);
  if (iVar2 == 0x1b && 0 < param_4) {
    iVar2 = __AMAuthInstallSsoCreateServiceTicketAndDAWToken
                      (param_1,local_78,local_98,param_4 + -1,local_68,local_70,param_7,param_8);
  }
  return iVar2;
}

