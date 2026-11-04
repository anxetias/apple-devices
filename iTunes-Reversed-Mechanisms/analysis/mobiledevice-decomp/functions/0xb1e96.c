// rea decompile_all
// name: _bundleInfoIntoDict
// address: 0xb1e96
// body: available
// range: 0xb1e96-0xb21ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb21ea to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _bundleInfoIntoDict(char *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  undefined8 uVar9;
  char local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_448,0x401);
  uVar1 = _snprintf(local_448,0x401,"%s/Info.plist",param_1);
  if (uVar1 < 0x401) {
    lVar2 = _createHash(local_448,1);
    if (lVar2 != 0) {
      _CFDictionarySetValue(param_2,&cf_INFO_PLIST_HASH,lVar2);
      sVar3 = _strlen(param_1);
      lVar4 = _CFURLCreateFromFileSystemRepresentation(0,param_1,sVar3,1);
      if (lVar4 == 0) {
        _dmlog("bundleInfoIntoDict",0x317,&cf_unabletocreateCFURLReffor_s,param_1);
LAB_000b2169:
        uVar9 = 0xffffffff;
      }
      else {
        lVar5 = __CFBundleCreateUnique(0,lVar4);
        if (lVar5 == 0) {
          _bundleInfoIntoDict_cold_3(lVar4);
          goto LAB_000b2169;
        }
        uVar9 = *(undefined8 *)PTR__kCFBundleVersionKey_00441128;
        lVar6 = _CFBundleGetValueForInfoDictionaryKey(lVar5,uVar9);
        if (lVar6 == 0) {
          _dmlog("bundleInfoIntoDict",0x31b,&cf_nokCFBundleVersionKeyin_s,param_1);
LAB_000b21a9:
          lVar6 = 0;
          uVar9 = 0xffffffff;
        }
        else {
          _CFDictionarySetValue(param_2,uVar9,lVar6);
          uVar9 = *(undefined8 *)PTR___kCFBundleShortVersionStringKey_004410d8;
          pcVar7 = (cfstringStruct *)_CFBundleGetValueForInfoDictionaryKey(lVar5,uVar9);
          if (pcVar7 == (cfstringStruct *)0x0) {
            if (_verbose_onceToken != -1) {
              _bundleInfoIntoDict_cold_1();
            }
            pcVar7 = &cf___;
            if (_gVerbose == '\x01') {
              _dmlog("bundleInfoIntoDict",800,&cf_no_kCFBundleShortVersionStringKeyin_s,param_1);
            }
          }
          else {
            _CFDictionarySetValue(param_2,uVar9,pcVar7);
          }
          lVar6 = _CFStringCreateWithFormat(0,0,&cf_____,lVar6,pcVar7);
          if (lVar6 == 0) {
            _bundleInfoIntoDict_cold_2();
            goto LAB_000b21a9;
          }
          _CFDictionarySetValue(param_2,&cf_BUNDLE_VERSION,lVar6);
          lVar8 = _CFBundleGetIdentifier(lVar5);
          if (lVar8 == 0) {
            _dmlog("bundleInfoIntoDict",0x32b,&cf_unabletogetbundleidfrom___bundle___,lVar4,lVar5);
            uVar9 = 0xffffffff;
          }
          else {
            _CFDictionarySetValue(param_2,&cf_BUNDLE_ID,lVar8);
            lVar8 = _CFBundleGetValueForInfoDictionaryKey(lVar5,&cf_UISupportedDevices);
            if ((lVar8 != 0) ||
               (lVar8 = _CFBundleGetValueForInfoDictionaryKey(lVar5,&cf_SupportedDevices),
               lVar8 != 0)) {
              _CFDictionarySetValue(param_2,&cf_SUPPORTED_DEVICES,lVar8);
            }
            uVar9 = 0;
          }
        }
        _CFRelease(lVar5);
        _CFRelease(lVar4);
        if (lVar6 != 0) {
          _CFRelease(lVar6);
        }
      }
      _CFRelease(lVar2);
      goto LAB_000b210f;
    }
    _bundleInfoIntoDict_cold_4();
  }
  else {
    _dmlog("bundleInfoIntoDict",0x30c,&cf_pathistoolong__s_Info_plist,param_1);
  }
  uVar9 = 0xffffffff;
LAB_000b210f:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

