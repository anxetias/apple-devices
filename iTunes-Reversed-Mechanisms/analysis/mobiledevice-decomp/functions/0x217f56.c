// rea decompile_all
// name: ACFUDataContainer::setData
// address: 0x217f56
// body: available
// range: 0x217f56-0x218018 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUDataContainer::setData(__CFData*) */

ulong __thiscall ACFUDataContainer::setData(ACFUDataContainer *this,__CFData *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  __CFData *p_Var4;
  __CFData *p_Var5;
  
  if (this[0x18] == (ACFUDataContainer)0x1) {
    setData((__CFData *)this);
  }
  else {
    if (*(long *)this != 0) {
      _CFRelease();
      *(undefined8 *)this = 0;
    }
    p_Var4 = param_1;
    lVar2 = _AMSupportSafeRetain();
    *(long *)this = lVar2;
    if (lVar2 == 0) {
      setData(p_Var4);
    }
    else {
      uVar3 = CONCAT71((int7)((ulong)param_1 >> 8),1);
      if (this[0x19] != (ACFUDataContainer)0x1) goto LAB_00217fe6;
      if (*(long *)(this + 0x10) == 0) {
        setData(p_Var4);
      }
      else {
        p_Var4 = *(__CFData **)PTR__kCFAllocatorDefault_004410e8;
        p_Var5 = p_Var4;
        lVar2 = _CFURLCreateWithString(p_Var4,*(long *)(this + 0x10),0);
        if (lVar2 == 0) {
          setData(p_Var5);
        }
        else {
          uVar1 = _AMSupportWriteDataToFileURL(p_Var4,*(undefined8 *)this,lVar2,1);
          _CFRelease(lVar2);
          if (uVar1 == 0) goto LAB_00217fe6;
          setData((__CFData *)(ulong)uVar1);
        }
      }
    }
  }
  uVar3 = 0;
LAB_00217fe6:
  return uVar3 & 0xffffffff;
}

