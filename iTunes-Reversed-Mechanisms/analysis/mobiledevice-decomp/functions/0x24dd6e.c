// rea decompile_all
// name: SERestoreInfo::IcefallDeviceInfo::updateDict
// address: 0x24dd6e
// body: available
// range: 0x24dd6e-0x24df73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24df5b to 0x24d794 SERestoreInfo::P73BaseDeviceInfo::updateDict (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24df60 to 0x24d794 SERestoreInfo::P73BaseDeviceInfo::updateDict (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24df65 to 0x24d794 SERestoreInfo::P73BaseDeviceInfo::updateDict (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24df6a to 0x24d794 SERestoreInfo::P73BaseDeviceInfo::updateDict (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24df6f to 0x24d794 SERestoreInfo::P73BaseDeviceInfo::updateDict (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::IcefallDeviceInfo::updateDict(__CFDictionary*, bool) const */

void __thiscall
SERestoreInfo::IcefallDeviceInfo::updateDict
          (IcefallDeviceInfo *this,__CFDictionary *param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  __CFDictionary *p_Var5;
  
  p_Var5 = *(__CFDictionary **)PTR__kCFAllocatorDefault_004410e8;
  uVar4 = 3;
  lVar1 = _CFNumberCreate();
  if (lVar1 == 0) {
    updateDict(p_Var5,(bool)uVar4);
  }
  else {
    _CFDictionarySetValue(param_1,&cf_SE_ChipID,lVar1);
    _CFRelease();
    lVar1 = *(long *)(this + 0x10);
    p_Var5 = (__CFDictionary *)0x0;
    lVar2 = _CFDataCreate(0,lVar1,*(long *)(this + 0x18) - lVar1);
    uVar4 = (undefined1)lVar1;
    if (lVar2 != 0) {
      _CFDictionarySetValue(param_1,&cf_SE_ID,lVar2);
      _CFRelease();
      lVar1 = *(long *)(this + 0x28);
      p_Var5 = (__CFDictionary *)0x0;
      lVar2 = _CFDataCreate(0,lVar1,*(long *)(this + 0x30) - lVar1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        P73BaseDeviceInfo::updateDict(p_Var5,SUB81(lVar1,0));
      }
      _CFDictionarySetValue(param_1,&cf_SE_Nonce,lVar2);
      _CFRelease();
      if (this[0x99] == (IcefallDeviceInfo)0x1) {
        _CFDictionarySetValue
                  (param_1,&cf_SE_FactoryMode,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
      }
      lVar1 = *(long *)(this + 0x40);
      p_Var5 = (__CFDictionary *)0x0;
      lVar2 = _CFDataCreate(0,lVar1,*(long *)(this + 0x48) - lVar1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        P73BaseDeviceInfo::updateDict(p_Var5,SUB81(lVar1,0));
      }
      _CFDictionarySetValue(param_1,&cf_SE_RootKeyIdentifier,lVar2);
      _CFRelease(lVar2);
      if (!param_2) {
        puVar3 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
        if (this[10] == (IcefallDeviceInfo)0x0) {
          puVar3 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
        }
        _CFDictionarySetValue(param_1,&cf_SE_IsDev,*puVar3);
        lVar1 = *(long *)(this + 0x70);
        p_Var5 = (__CFDictionary *)0x0;
        lVar2 = _CFDataCreate(0,lVar1,*(long *)(this + 0x78) - lVar1);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          P73BaseDeviceInfo::updateDict(p_Var5,SUB81(lVar1,0));
        }
        _CFDictionarySetValue(param_1,&cf_SE_BLFWKeysIdentifier,lVar2);
        _CFRelease();
        lVar1 = *(long *)(this + 0x58);
        p_Var5 = (__CFDictionary *)0x0;
        lVar2 = _CFDataCreate(0,lVar1,*(long *)(this + 0x60) - lVar1);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          P73BaseDeviceInfo::updateDict(p_Var5,SUB81(lVar1,0));
        }
        _CFDictionarySetValue(param_1,&cf_SE_OsKeysIdentifier,lVar2);
        _CFRelease(lVar2);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  P73BaseDeviceInfo::updateDict(p_Var5,(bool)uVar4);
}

