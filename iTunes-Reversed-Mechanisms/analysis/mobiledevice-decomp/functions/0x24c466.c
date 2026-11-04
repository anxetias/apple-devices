// rea decompile_all
// name: SERestoreInfo::P73BaseDeviceInfo::updateDict
// address: 0x24c466
// body: available
// range: 0x24c466-0x24c5d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24c5bf to 0x24d794 SERestoreInfo::P73BaseDeviceInfo::updateDict (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24c5c4 to 0x24d794 SERestoreInfo::P73BaseDeviceInfo::updateDict (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24c5c9 to 0x24d794 SERestoreInfo::P73BaseDeviceInfo::updateDict (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24c5ce to 0x24d794 SERestoreInfo::P73BaseDeviceInfo::updateDict (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeviceInfo::updateDict(__CFDictionary*, bool) const */

void __thiscall
SERestoreInfo::P73BaseDeviceInfo::updateDict
          (P73BaseDeviceInfo *this,__CFDictionary *param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  __CFDictionary *p_Var4;
  
  p_Var4 = *(__CFDictionary **)PTR__kCFAllocatorDefault_004410e8;
  uVar3 = 3;
  lVar1 = _CFNumberCreate();
  if (lVar1 == 0) {
    IcefallDeviceInfo::updateDict(p_Var4,(bool)uVar3);
  }
  else {
    _CFDictionarySetValue(param_1,&cf_SE_ChipID,lVar1);
    _CFRelease();
    lVar1 = *(long *)(this + 0x20);
    p_Var4 = (__CFDictionary *)0x0;
    lVar2 = _CFDataCreate(0,lVar1,*(long *)(this + 0x28) - lVar1);
    uVar3 = (undefined1)lVar1;
    if (lVar2 != 0) {
      _CFDictionarySetValue(param_1,&cf_SE_ID,lVar2);
      _CFRelease();
      lVar1 = *(long *)(this + 0x40);
      p_Var4 = (__CFDictionary *)0x0;
      lVar2 = _CFDataCreate(0,lVar1,*(long *)(this + 0x48) - lVar1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        updateDict(p_Var4,SUB81(lVar1,0));
      }
      _CFDictionarySetValue(param_1,&cf_SE_Nonce,lVar2);
      _CFRelease();
      lVar1 = *(long *)(this + 0x58);
      p_Var4 = (__CFDictionary *)0x0;
      lVar2 = _CFDataCreate(0,lVar1,*(long *)(this + 0x60) - lVar1);
      if (lVar2 != 0) {
        _CFDictionarySetValue(param_1,&cf_SE_RootKeyIdentifier,lVar2);
        _CFRelease();
        if (!param_2) {
          lVar1 = *(long *)(this + 0x70);
          p_Var4 = (__CFDictionary *)0x0;
          lVar2 = _CFDataCreate(0,lVar1,*(long *)(this + 0x78) - lVar1);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            updateDict(p_Var4,SUB81(lVar1,0));
          }
          _CFDictionarySetValue(param_1,&cf_SE_OSUPubKeyID,lVar2);
          _CFRelease(lVar2);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      updateDict(p_Var4,SUB81(lVar1,0));
    }
  }
                    /* WARNING: Subroutine does not return */
  updateDict(p_Var4,(bool)uVar3);
}

