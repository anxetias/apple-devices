// rea decompile_all
// name: _AMDCopyArrayOfDevicesMatchingQuery
// address: 0x1021eb
// body: available
// range: 0x1021eb-0x10281f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDCopyArrayOfDevicesMatchingQuery(long param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  bool bVar15;
  
  uVar14 = 0xe8000007;
  if (param_2 == 0) {
    return 0xe8000007;
  }
  lVar4 = _CFGetTypeID(param_2);
  lVar5 = _CFDictionaryGetTypeID();
  if (param_3 == (long *)0x0) {
    return 0xe8000007;
  }
  if (lVar4 != lVar5) {
    return 0xe8000007;
  }
  if (param_1 == 0) {
    lVar4 = _AMDCreateDeviceList();
  }
  else {
    lVar4 = _CFArrayCreateCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                               *(undefined8 *)(param_1 + 0x18));
  }
  if (lVar4 == 0) {
    return 0xe8000001;
  }
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar5 = _CFArrayCreateMutable(uVar1,0,PTR__kCFTypeArrayCallBacks_004411a8);
  if (lVar5 == 0) {
    uVar14 = 0xe8000003;
    goto LAB_001027ae;
  }
  lVar6 = _CFDictionaryGetValue(param_2,&cf_MatchingMode);
  if (lVar6 == 0) {
    pcVar13 = "No matching mode specified.";
LAB_0010277f:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,pcVar13);
  }
  else {
    cVar2 = _CFEqual(lVar6,&cf_MatchAny);
    if (((cVar2 == '\0') && (cVar2 = _CFEqual(lVar6,&cf_MatchAll), cVar2 == '\0')) &&
       (cVar2 = _CFEqual(lVar6,&cf_MatchWildcard), cVar2 == '\0')) {
      pcVar13 = "Unknown matching mode.";
      goto LAB_0010277f;
    }
    cVar2 = _CFEqual(lVar6,&cf_MatchWildcard);
    if (((cVar2 == '\0') && (lVar7 = _CFDictionaryGetValue(param_2,&cf_MatchUDID), lVar7 == 0)) &&
       (lVar7 = _CFDictionaryGetValue(param_2,&cf_MatchConnectionType), lVar7 == 0)) {
      pcVar13 = "No matching criteria specified.";
      goto LAB_0010277f;
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_MatchUDID);
    if (lVar7 != 0) {
      lVar8 = _CFGetTypeID(lVar7);
      lVar9 = _CFArrayGetTypeID();
      if (lVar8 != lVar9) {
        pcVar13 = "UniqueDeviceIDs is expected to be an array of CFStrings.";
        goto LAB_0010277f;
      }
    }
    lVar8 = _CFDictionaryGetValue(param_2,&cf_MatchConnectionType);
    if (((lVar8 != 0) && (cVar2 = _CFEqual(lVar8,&cf_MatchConnectionTypeUSB), cVar2 == '\0')) &&
       (cVar2 = _CFEqual(lVar8,&cf_MatchConnectionTypeNetwork), cVar2 == '\0')) {
      pcVar13 = "connection type given, but unknown.";
      goto LAB_0010277f;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,2,"Query is %@",param_2);
    for (lVar9 = 0; lVar10 = _CFArrayGetCount(lVar4), lVar9 < lVar10; lVar9 = lVar9 + 1) {
      lVar10 = _CFArrayGetValueAtIndex(lVar4,lVar9);
      if (lVar10 != 0) {
        lVar11 = _CFGetTypeID(lVar10);
        if (__AMDeviceTypeID == 0) {
          __AMDeviceTypeID = __CFRuntimeRegisterClass(&_AMDeviceGetTypeID__AMDeviceClass);
        }
        if (lVar11 == __AMDeviceTypeID) {
          cVar2 = _CFEqual(lVar6,&cf_MatchWildcard);
          if (cVar2 != '\x01') {
            if (lVar8 == 0) {
LAB_0010251a:
              if (lVar7 != 0) {
                lVar11 = 0;
                do {
                  lVar12 = _CFArrayGetCount(lVar7);
                  if (lVar12 <= lVar11) goto LAB_00102604;
                  uVar14 = _CFArrayGetValueAtIndex(lVar7,lVar11);
                  lVar12 = _CFStringCompare(uVar14,*(undefined8 *)(lVar10 + 0x20),1);
                  if (lVar12 == 0) {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    __os_log_internal(0,_md_log_log,2,"device %@ UDID matches with UDID %@",lVar10,
                                      uVar14);
                    _CFEqual(lVar6,&cf_MatchAll);
                  }
                  else {
                    cVar2 = _CFEqual(lVar6,&cf_MatchAll);
                    if (cVar2 == '\x01') {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      goto LAB_001026a6;
                    }
                  }
                  cVar2 = _CFEqual(lVar6,&cf_MatchAny);
                  lVar11 = lVar11 + 1;
                } while ((lVar12 != 0) || (cVar2 != '\x01'));
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                goto LAB_00102663;
              }
LAB_00102604:
              cVar2 = _CFEqual(lVar6,&cf_MatchAll);
              if (cVar2 == '\0') goto LAB_001026ca;
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar13 = "device %@ apparenly matches ALL the given criteria. adding to the list.";
            }
            else {
              iVar3 = *(int *)(lVar10 + 0x30);
              if (iVar3 == 0) {
                cVar2 = _CFEqual(lVar8,&cf_MatchConnectionTypeNetwork);
                bVar15 = cVar2 != '\0';
                iVar3 = *(int *)(lVar10 + 0x30);
              }
              else {
                bVar15 = false;
              }
              if (iVar3 == 1) {
                cVar2 = _CFEqual(lVar8,&cf_MatchConnectionTypeUSB);
                if (cVar2 != '\0') {
                  bVar15 = true;
                }
                iVar3 = *(int *)(lVar10 + 0x30);
              }
              if ((iVar3 == 2) &&
                 (cVar2 = _CFEqual(lVar8,&cf_MatchConnectionTypePairedDevice), cVar2 != '\0')) {
                bVar15 = true;
              }
              cVar2 = _CFEqual(lVar6,&cf_MatchAll);
              if ((cVar2 == '\x01') && (!bVar15)) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
LAB_001026a6:
                __os_log_internal(0,_md_log_log,2,
                                  "device %@: matching mode is ALL, didmatch is FALSE. continuing.",
                                  lVar10);
                goto LAB_001026ca;
              }
              cVar2 = _CFEqual(lVar6,&cf_MatchAny);
              if ((cVar2 != '\x01') || (!bVar15)) goto LAB_0010251a;
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
LAB_00102663:
              pcVar13 = "device %@: matching mode is ANY, didmatch is TRUE. adding.";
            }
            __os_log_internal(0,_md_log_log,2,pcVar13,lVar10);
          }
          _CFArrayAppendValue(lVar5,lVar10);
        }
      }
LAB_001026ca:
    }
    lVar6 = _CFArrayCreateCopy(uVar1,lVar5);
    if (lVar6 == 0) {
      uVar14 = 0xe8000001;
    }
    else {
      *param_3 = lVar6;
      uVar14 = 0;
    }
  }
  _CFRelease(lVar4);
  lVar4 = lVar5;
LAB_001027ae:
  _CFRelease(lVar4);
  return uVar14;
}

