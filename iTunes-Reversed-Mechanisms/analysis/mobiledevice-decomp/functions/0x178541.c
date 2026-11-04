// rea decompile_all
// name: __AMRHTTPDownloadHandleStreamCallback
// address: 0x178541
// body: available
// range: 0x178541-0x178999 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x178928 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRHTTPDownloadHandleStreamCallback(long param_1,long param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char cVar7;
  cfstringStruct *pcVar8;
  long local_50;
  long local_48;
  long local_40;
  float local_34;
  
  if (param_2 == 0x10) {
    if (param_1 == 0) {
      pcVar8 = &cf_Can_tgeterrorcodefromNULLreadstream;
LAB_001787e8:
      _AMRSafeLogAndRelease(3,pcVar8);
      lVar4 = -1;
LAB_001787f9:
      pcVar8 = (cfstringStruct *)_AMRMakeString(&cf_Failedtodownloadfile_HTTPstatus__ld,lVar4);
      if (pcVar8 != (cfstringStruct *)0x0) {
        uVar6 = 0xfb4;
        goto LAB_00178829;
      }
    }
    else {
      lVar3 = _CFReadStreamCopyProperty
                        (param_1,*(undefined8 *)PTR__kCFStreamPropertyHTTPResponseHeader_004413f8);
      if (lVar3 == 0) {
        pcVar8 = &cf_FailedtogettheHTTPheader;
        goto LAB_001787e8;
      }
      lVar4 = _CFHTTPMessageGetResponseStatusCode(lVar3);
      _AMRSafeLogAndRelease(3,0);
      _CFRelease(lVar3);
      if (lVar4 - 300U < 0xffffffffffffff9c) {
        if (lVar4 == 0x193) {
          pcVar8 = &cf_AccessDenied;
          uVar6 = 0xfbf;
          goto LAB_00178829;
        }
        goto LAB_001787f9;
      }
    }
LAB_001786b1:
    local_48 = 0;
    local_34 = 100.0;
    cVar7 = '\x01';
    bVar1 = false;
    local_40 = 0;
LAB_001786c4:
    local_50 = 0;
    pcVar8 = (cfstringStruct *)0x0;
    lVar3 = 0;
  }
  else {
    if (param_2 == 8) {
      local_50 = _CFReadStreamCopyError(param_1);
      cVar7 = '\x01';
      pcVar8 = &cf_FailedtodownloadHTTPfile;
      uVar6 = 0xfb4;
      local_48 = 0;
      local_40 = 0;
    }
    else {
      if (param_2 != 2) {
        local_34 = -1.0;
        bVar1 = false;
        local_48 = 0;
        local_40 = 0;
LAB_00178686:
        cVar7 = '\0';
        goto LAB_001786c4;
      }
      lVar3 = _CFReadStreamRead(param_1,param_3 + 7,0x1000);
      uVar6 = 0xfb4;
      if (lVar3 != -1) {
        if (lVar3 == 0) goto LAB_001786b1;
        _CFWriteStreamWrite(param_3[1],param_3 + 7,lVar3);
        uVar5 = param_3[5];
        if (uVar5 == 0) {
          local_40 = _CFReadStreamCopyProperty
                               (param_1,*(undefined8 *)
                                         PTR__kCFStreamPropertyHTTPResponseHeader_004413f8);
          if (local_40 == 0) {
            pcVar8 = &cf_FailedtogetHTTPheaderforcontentsize;
            local_48 = 0;
            local_40 = 0;
          }
          else {
            local_48 = _CFHTTPMessageCopyHeaderFieldValue(local_40,&cf_Content_Length);
            if (local_48 == 0) {
              pcVar8 = &cf_FailedtogetContent_Lengthheadervalue;
              local_48 = 0;
            }
            else {
              iVar2 = _CFStringGetIntValue(local_48);
              uVar5 = (ulong)iVar2;
              param_3[5] = uVar5;
              if (iVar2 != 0) goto LAB_00178747;
              pcVar8 = &cf_FailedtoparseContent_Lengthheadervalue;
            }
          }
          local_50 = 0;
          cVar7 = '\0';
          uVar6 = 0xfb4;
          goto LAB_00178833;
        }
        local_40 = 0;
        local_48 = 0;
LAB_00178747:
        lVar4 = param_3[6];
        param_3[6] = lVar3 + lVar4;
        local_34 = ((float)(ulong)(lVar3 + lVar4) / (float)uVar5) * 100.0;
        if (100.0 <= local_34) {
          local_34 = 100.0;
        }
        if (1.0 <= local_34 - *(float *)(param_3 + 0x207)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        goto LAB_00178686;
      }
      pcVar8 = &cf_Failedtoreadfromstream;
LAB_00178829:
      local_48 = 0;
      cVar7 = '\x01';
      local_40 = 0;
      local_50 = 0;
    }
LAB_00178833:
    lVar3 = _AMRCreateErrorWithDomain
                      (pcVar8,uVar6,&cf_com_apple_MobileDevice_MobileRestore,local_50);
    local_34 = 100.0;
    bVar1 = false;
  }
  _AMRSafeLogAndRelease(3,pcVar8);
  if ((code *)param_3[3] != (code *)0x0 && !bVar1) {
    (*(code *)param_3[3])(local_34,param_3[4],cVar7,lVar3,param_3[2]);
    *(float *)(param_3 + 0x207) = local_34;
  }
  if (cVar7 != '\0') {
    _CFReadStreamClose(*param_3);
    _CFWriteStreamClose(param_3[1]);
    if (*param_3 != 0) {
      _CFRelease();
    }
    if (param_3[1] != 0) {
      _CFRelease();
    }
    if (param_3[4] != 0) {
      _CFRelease();
    }
    _free(param_3);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (local_50 != 0) {
    _CFRelease();
  }
  if (local_40 != 0) {
    _CFRelease(local_40);
  }
  if (local_48 != 0) {
    _CFRelease(local_48);
    return;
  }
  return;
}

