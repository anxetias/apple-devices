// rea decompile_all
// name: __ConvertOptionsToConfiguration
// address: 0xab3a7
// body: available
// range: 0xab3a7-0xab6e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __ConvertOptionsToConfiguration(undefined8 param_1,long param_2)

{
  uint *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  
  lVar3 = _CFDictionaryGetValue(param_1,&cf_HashedChunkSize);
  if ((lVar3 == 0) || (cVar2 = _CFNumberGetValue(lVar3,0xb,param_2), cVar2 != '\0')) {
    uVar4 = _CFDictionaryGetValue(param_1,&cf_CommandLineString);
    *(undefined8 *)(param_2 + 0x10) = uVar4;
    uVar4 = _CFDictionaryGetValue(param_1,&cf_ExecutableUUID);
    *(undefined8 *)(param_2 + 0x18) = uVar4;
    lVar3 = _CFDictionaryGetValue(param_1,&cf_CompressionOptions);
    if (lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      lVar5 = _CFStringCompare(lVar3,&cf_ForceUncompressed,0);
      if (lVar5 != 0) {
        lVar5 = _CFStringCompare(lVar3,&cf_PreserveCompression,0);
        if (lVar5 == 0) {
          uVar7 = 1;
        }
        else {
          lVar5 = _CFStringCompare(lVar3,&cf_TryRecompress,0);
          if (lVar5 == 0) {
            uVar7 = 2;
          }
          else {
            lVar3 = _CFStringCompare(lVar3,&cf_ForceCompressed,0);
            if (lVar3 != 0) {
              return 0;
            }
            uVar7 = 3;
          }
        }
      }
    }
    *(undefined4 *)(param_2 + 0x20) = uVar7;
    lVar3 = _CFDictionaryGetValue(param_1,&cf_ZlibCompressionLevel);
    puVar1 = (uint *)(param_2 + 0x28);
    if (lVar3 == 0) {
      *puVar1 = 9;
    }
    else {
      cVar2 = _CFNumberGetValue(lVar3,9,puVar1);
      if ((cVar2 == '\0') || (9 < *puVar1)) goto LAB_000ab4d1;
    }
    lVar3 = _CFDictionaryGetValue(param_1,&cf_HashType);
    if (lVar3 != 0) {
      uVar6 = 0;
      lVar5 = _CFStringCompare(lVar3,&cf_MD5,0);
      if (lVar5 != 0) {
        lVar5 = _CFStringCompare(lVar3,&cf_SHA1,0);
        if (lVar5 == 0) {
          uVar6 = 1;
        }
        else {
          lVar5 = _CFStringCompare(lVar3,&cf_SHA224,0);
          if (lVar5 == 0) {
            uVar6 = 4;
          }
          else {
            lVar5 = _CFStringCompare(lVar3,&cf_SHA256,0);
            if (lVar5 == 0) {
              uVar6 = 5;
            }
            else {
              lVar5 = _CFStringCompare(lVar3,&cf_SHA384,0);
              if (lVar5 == 0) {
                uVar6 = 6;
              }
              else {
                lVar3 = _CFStringCompare(lVar3,&cf_SHA512,0);
                if (lVar3 != 0) {
                  return 0;
                }
                uVar6 = 7;
              }
            }
          }
        }
      }
      *(undefined1 *)(param_2 + 0x2c) = uVar6;
    }
    lVar3 = _CFDictionaryGetValue(param_1,&cf_CompressionMethod);
    uVar7 = 8;
    if ((lVar3 != 0) && (lVar5 = _CFStringCompare(lVar3,&cf_DEFLATE,0), lVar5 != 0)) {
      lVar5 = _CFStringCompare(lVar3,&cf_LZFSE,0);
      if (lVar5 == 0) {
        uVar7 = 99;
      }
      else {
        lVar3 = _CFStringCompare(lVar3,&cf_LZMA,0);
        if (lVar3 != 0) {
          return 0;
        }
        uVar7 = 0xe;
      }
    }
    *(undefined4 *)(param_2 + 0x24) = uVar7;
    __FetchAndSetBoolean(param_1,&cf_UncompressBloatedFiles,param_2 + 0x2d,1);
    __FetchAndSetBoolean(param_1,&cf_NoCache,param_2 + 0x2e,0);
    __FetchAndSetBoolean(param_1,&cf_NoSeekOutput,param_2 + 0x2f,0);
    __FetchAndSetBoolean(param_1,&cf_SkipPrescan,(undefined1 *)(param_2 + 0x30),0);
    __FetchAndSetBoolean(param_1,&cf_NoCentralDirectory,param_2 + 0x31,0);
    lVar3 = _CFDictionaryGetValue(param_1,&cf_CustomPathOrdering);
    if (lVar3 != 0) {
      *(undefined1 *)(param_2 + 0x30) = 1;
    }
    *(long *)(param_2 + 0x38) = lVar3;
    __FetchAndSetBoolean(param_1,&cf_IncludeContainingDirectory,param_2 + 0x40,0);
    __FetchAndSetBoolean(param_1,&cf_FollowAllSymlinks,param_2 + 0x41,0);
    uVar4 = 1;
  }
  else {
LAB_000ab4d1:
    uVar4 = 0;
  }
  return uVar4;
}

