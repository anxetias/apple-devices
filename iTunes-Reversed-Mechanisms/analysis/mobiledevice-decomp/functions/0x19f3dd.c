// rea decompile_all
// name: _AMAuthInstallGetLocalizedStatusString
// address: 0x19f3dd
// body: available
// range: 0x19f3dd-0x19f60f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


cfstringStruct * _AMAuthInstallGetLocalizedStatusString(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  int local_24;
  
  if (param_2 < 99) {
    switch(param_2) {
    case 0:
      pcVar3 = &cf_Noerror;
      break;
    case 1:
      pcVar3 = &cf_Badparameter;
      break;
    case 2:
      pcVar3 = &cf_Allocationerror;
      break;
    case 3:
      pcVar3 = &cf_Conversionerror;
      break;
    case 4:
      pcVar3 = &cf_Fileerror;
      break;
    case 5:
      pcVar3 = &cf_Hasherror;
      break;
    case 6:
      pcVar3 = &cf_Cryptoerror;
      break;
    case 7:
      pcVar3 = &cf_Badbuildidentity;
      break;
    case 8:
      pcVar3 = &cf_Entrynotfound;
      break;
    case 9:
      pcVar3 = &cf_Invalidimg3object;
      break;
    case 10:
      pcVar3 = &cf_Invalidbbfwobject;
      break;
    case 0xb:
      pcVar3 = &cf_Servernotreachable;
      break;
    case 0xc:
      pcVar3 = &cf_Servertimedout;
      break;
    case 0xd:
      pcVar3 = &cf_Unimplemented;
      break;
    case 0xe:
      pcVar3 = &cf_Internalerror;
      break;
    case 0xf:
      pcVar3 = &cf_Invalidbbfwfile;
      break;
    case 0x10:
      pcVar3 = &cf_Networkerror;
      break;
    case 0x11:
      pcVar3 = &cf_Badresponse;
      break;
    case 0x12:
      pcVar3 = &cf_Fusingfailed;
      break;
    case 0x13:
      pcVar3 = &cf_Basebandprovisioningfailed;
      break;
    case 0x14:
      pcVar3 = &cf_AppleConnectnotfound;
      break;
    case 0x15:
      pcVar3 = &cf_AppleConnectusercanceled;
      break;
    case 0x16:
      pcVar3 = &cf_AppleConnectbadcredentials;
      break;
    default:
      goto switchD_0019f40b_default;
    }
  }
  else {
    switch(param_2) {
    case 0xdac:
      pcVar3 = &cf_Thesigningserverreturnedaninternalerror;
      break;
    case 0xdad:
      pcVar3 = &cf_Youmustauthorizewiththesigningserverbeforemakingthisrequest;
      break;
    case 0xdaf:
      pcVar3 = &cf_Youarenotauthorizedtomakethisrequest_Pleasecheckyourdeviceorcredentials;
      break;
    case 0xdb0:
      pcVar3 = &cf_Thesigningservercouldnotfindtheresourcerequested;
      break;
    case 0xdb3:
      pcVar3 = &cf_Youmustauthorizewithaproxyserverbeforemakingthisrequest;
      break;
    default:
      if (param_2 == 99) {
        return &cf_Generic;
      }
      if (param_2 == 0xc7a) {
        return &cf_Declinedtoauthorizethisimageonthisdeviceforthisuser_;
      }
    case 0xdae:
    case 0xdb1:
    case 0xdb2:
switchD_0019f40b_default:
      pcVar3 = &cf___;
      if (param_2 - 0xc1cU < 900 && param_1 != 0) {
        local_24 = param_2;
        uVar1 = _CFGetAllocator(param_1);
        lVar2 = _CFNumberCreate(uVar1,9,&local_24);
        if (lVar2 != 0) {
          pcVar3 = (cfstringStruct *)_CFDictionaryGetValue(*(undefined8 *)(param_1 + 0x160),lVar2);
          _CFRelease(lVar2);
          if (pcVar3 == (cfstringStruct *)0x0) {
            pcVar3 = (cfstringStruct *)0x0;
            _AMAuthInstallLog(7,"AMAuthInstallGetLocalizedStatusString",
                              "no cached text for tss error code %d",local_24);
          }
        }
      }
    }
  }
  return pcVar3;
}

