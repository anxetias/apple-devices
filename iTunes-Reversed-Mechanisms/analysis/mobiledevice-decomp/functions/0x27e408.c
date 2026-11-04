// rea decompile_all
// name: _AMAuthInstallBasebandGetRFSelfTestTicket
// address: 0x27e408
// body: available
// range: 0x27e408-0x27e802 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandGetRFSelfTestTicket
              (long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
              long *param_6,int param_7,long param_8,char param_9)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long local_40;
  char local_31;
  
  local_40 = 0;
  _AMAuthInstallLog(6,"AMAuthInstallBasebandGetRFSelfTestTicket",
                    "Entering RF Self Test LAI API to get a signed ticket");
  if (param_1 == 0) {
    pcVar8 = "inSnum is NULL";
LAB_0027e71c:
    _AMAuthInstallLog(6,"AMAuthInstallBasebandGetRFSelfTestTicket",pcVar8);
LAB_0027e72c:
    lVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      pcVar8 = "inNonce is NULL";
      goto LAB_0027e71c;
    }
    if (param_6 == (long *)0x0) goto LAB_0027e72c;
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar4 = _AMAuthInstallCreate();
    if (lVar4 == 0) {
      lVar4 = 0;
      _AMAuthInstallLog(6,"AMAuthInstallBasebandGetRFSelfTestTicket","amai is NULL");
LAB_0027e7ae:
      iVar3 = 2;
      lVar6 = 0;
      goto LAB_0027e6d3;
    }
    iVar3 = _AMAuthInstallBasebandSetFusings(lVar4,param_3,param_4,param_1);
    if (iVar3 != 0) {
      pcVar8 = "invalid baseband fusings";
LAB_0027e7a6:
      lVar6 = 0;
      goto LAB_0027e7f4;
    }
    iVar3 = _AMAuthInstallBasebandSetNonce(lVar4,param_2);
    if (iVar3 == 0) {
      _AMAuthInstallLog(6,"AMAuthInstallBasebandGetRFSelfTestTicket",
                        "will check signing support now");
      iVar3 = _AMAuthInstallBasebandSupportsServerSigning(lVar4,&local_31);
      _AMAuthInstallLog(6,"AMAuthInstallBasebandGetRFSelfTestTicket",
                        "signing support check completed");
      if (iVar3 == 0) {
        iVar3 = 1;
        if (local_31 != '\x01') {
          pcVar8 = "signing NOT supported";
          goto LAB_0027e7a6;
        }
        uVar5 = _CFGetAllocator(lVar4);
        lVar6 = _CFDictionaryCreateMutable
                          (uVar5,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar6 == 0) goto LAB_0027e7ae;
        lVar7 = *(long *)(lVar4 + 0x30);
        if (lVar7 == 0) {
          pcVar8 = "amai->bbParameters is NULL";
        }
        else {
          if (*(long *)(lVar7 + 0x18) != 0) {
            _CFDictionarySetValue(lVar6,&cf_BbNonce);
            lVar7 = *(long *)(lVar4 + 0x30);
          }
          if (*(long *)(lVar7 + 0x10) != 0) {
            _CFDictionarySetValue(lVar6,&cf_BbSNUM);
            lVar7 = *(long *)(lVar4 + 0x30);
          }
          if (*(int *)(lVar7 + 4) != 0) {
            __CFDictionarySetInteger32(lVar6,&cf_BbChipID);
            lVar7 = *(long *)(lVar4 + 0x30);
          }
          if (*(int *)(lVar7 + 8) != 0) {
            __CFDictionarySetInteger64(lVar6,&cf_BbGoldCertId);
          }
          __CFDictionarySetInteger32(lVar6,&cf_BbFieldDiagsEnable,param_5);
          if (param_9 == '\0') {
LAB_0027e61d:
            _AMAuthInstallLog(6,"AMAuthInstallBasebandGetRFSelfTestTicket","will start signing now")
            ;
            iVar3 = _AMAuthInstallRequestSendSync(lVar4,lVar6,&local_40);
            _AMAuthInstallLog(6,"AMAuthInstallBasebandGetRFSelfTestTicket","signing done");
            if (iVar3 == 0) {
              if (local_40 == 0) {
                iVar3 = 0xe;
              }
              else {
                iVar3 = 0;
                _AMAuthInstallLog(6,"AMAuthInstallBasebandGetRFSelfTestTicket",
                                  "returning the ticket content");
                cVar2 = _CFDictionaryContainsKey(local_40,&cf_BBTicket);
                if (cVar2 == '\0') {
                  iVar3 = 8;
                }
                else {
                  uVar5 = _CFDictionaryGetValue(local_40,&cf_BBTicket);
                  lVar7 = _CFDataCreateCopy(uVar1,uVar5);
                  *param_6 = lVar7;
                  if (lVar7 == 0) {
                    iVar3 = 2;
                  }
                }
              }
            }
            goto LAB_0027e6d3;
          }
          if (param_8 == 0) {
            pcVar8 = "inApECID is zero";
          }
          else {
            if (param_7 != 0) {
              __CFDictionarySetInteger64(lVar6,&cf_ApECID);
              __CFDictionarySetInteger32(lVar6,&cf_ApChipID,param_7);
              goto LAB_0027e61d;
            }
            pcVar8 = "inApChipID is zero";
          }
        }
LAB_0027e7f4:
        _AMAuthInstallLog(6,"AMAuthInstallBasebandGetRFSelfTestTicket",pcVar8);
        goto LAB_0027e6d3;
      }
      pcVar8 = "signing support check failed";
    }
    else {
      pcVar8 = "invalid baseband fusings";
    }
    _AMAuthInstallLog(6,"AMAuthInstallBasebandGetRFSelfTestTicket",pcVar8);
  }
  lVar6 = 0;
  iVar3 = 1;
LAB_0027e6d3:
  _SafeRelease(lVar6);
  _SafeRelease(local_40);
  _SafeRelease(lVar4);
  return iVar3;
}

