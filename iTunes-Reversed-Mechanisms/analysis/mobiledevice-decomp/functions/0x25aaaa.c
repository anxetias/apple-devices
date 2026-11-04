// rea decompile_all
// name: _YonkersAddEntitlementsToTATSURequestDict
// address: 0x25aaaa
// body: available
// range: 0x25aaaa-0x25af5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25af56 to 0x2a95ac _CFDictionaryAddValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _YonkersAddEntitlementsToTATSURequestDict(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_ReadECKey);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_ReadECKey,*puVar5);
    }
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_WriteECKey);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_WriteECKey,*puVar5);
    }
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_WriteECID);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_WriteECID,*puVar5);
    }
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_WriteEpoch);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_WriteEpoch,*puVar5);
    }
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_ReadGID);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_ReadGID,*puVar5);
    }
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_ReadFWKey);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_ReadFWKey,*puVar5);
    }
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_AllowOfflineBoot);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_AllowOfflineBoot,*puVar5);
    }
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_TempDemote);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_TempDemote,*puVar5);
    }
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_AccessSensor);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_AccessSensor,*puVar5);
    }
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_AccessSecurity);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_AccessSecurity,*puVar5);
    }
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_FADemote);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_FADemote,*puVar5);
    }
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_DebugStatus);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_DebugStatus,*puVar5);
    }
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Yonkers_Provisioning);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(param_2,&cf_Yonkers_Provisioning,*puVar5);
      return;
    }
  }
  return;
}

