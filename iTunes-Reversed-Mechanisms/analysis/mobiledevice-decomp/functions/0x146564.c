// rea decompile_all
// name: _AMDCopyErrorText
// address: 0x146564
// body: available
// range: 0x146564-0x14680d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1465a8 to 0xbdc98 _MISCopyErrorStringForErrorCode (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


cfstringStruct * _AMDCopyErrorText(uint param_1)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  size_t sVar11;
  
  if ((param_1 & 0xfc000000) == 0xe8000000) {
    uVar3 = param_1 >> 0xe & 0xfff;
    if (uVar3 == 0) {
      lVar5 = _AMDErrorString(param_1);
      if (lVar5 != 0) {
        lVar5 = _CFStringCreateWithCStringNoCopy
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar5,0x600,
                           *(undefined8 *)PTR__kCFAllocatorNull_004410f8);
        if (lVar5 == 0) {
          lVar5 = _CFStringCreateWithFormat(0,0,&cf__d,param_1);
        }
        lVar6 = _CFBundleGetBundleWithIdentifier(&cf_com_apple_mobiledevice);
        if (lVar6 == 0) {
          pcVar4 = &cf___;
          _CFRetain(&cf___);
        }
        else {
          _CFRetain(lVar6);
          pcVar4 = (cfstringStruct *)_CFBundleCopyLocalizedString(lVar6,lVar5,0,&cf_Localizable);
          _CFRelease(lVar6);
        }
        _CFRelease(lVar5);
        return pcVar4;
      }
      __InitializeError();
      if (_gExtraErrorInfo != 0) {
        _pthread_mutex_lock((pthread_mutex_t *)&_gExtraErrorInfoLock);
        sVar7 = _CFDictionaryGetCount(_gExtraErrorInfo);
        if ((sVar7 == 0) || (pvVar8 = _calloc(sVar7,8), pvVar8 == (void *)0x0)) {
          _pthread_mutex_unlock((pthread_mutex_t *)&_gExtraErrorInfoLock);
        }
        else {
          pvVar9 = _calloc(sVar7,8);
          if (pvVar9 == (void *)0x0) {
            lVar5 = 0;
          }
          else {
            uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
            lVar6 = _CFNumberCreate(uVar1,0xb);
            if (lVar6 == 0) {
              lVar5 = 0;
            }
            else {
              _CFDictionaryGetKeysAndValues(_gExtraErrorInfo,pvVar8,pvVar9);
              if ((long)sVar7 < 1) {
                lVar5 = 0;
              }
              else {
                lVar5 = 0;
                sVar11 = 0;
                do {
                  cVar2 = _CFEqual(lVar6,*(undefined8 *)((long)pvVar9 + sVar11 * 8));
                  if (cVar2 == '\x01') {
                    lVar5 = _CFGetTypeID(*(undefined8 *)((long)pvVar8 + sVar11 * 8));
                    lVar10 = _CFStringGetTypeID();
                    if (lVar5 == lVar10) {
                      lVar5 = _CFStringCreateCopy(uVar1,*(undefined8 *)((long)pvVar8 + sVar11 * 8));
                    }
                    else {
                      lVar5 = 0;
                    }
                    break;
                  }
                  sVar11 = sVar11 + 1;
                } while (sVar7 != sVar11);
              }
              _CFRelease(lVar6);
            }
            _free(pvVar8);
            pvVar8 = pvVar9;
          }
          _free(pvVar8);
          _pthread_mutex_unlock((pthread_mutex_t *)&_gExtraErrorInfoLock);
          if (lVar5 != 0) {
            pcVar4 = (cfstringStruct *)
                     _CFStringCreateWithFormat
                               (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                &cf_Anunknownerrormessage_____wasreceivedfromthedevice_,lVar5);
            _CFRelease(lVar5);
            return pcVar4;
          }
        }
      }
      return &cf_Anunknownerroroccurred_;
    }
    if (uVar3 == 2) {
      pcVar4 = (cfstringStruct *)_MISCopyErrorStringForErrorCode(param_1);
      return pcVar4;
    }
  }
  return (cfstringStruct *)0x0;
}

