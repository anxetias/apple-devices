// rea decompile_all
// name: ACFURestoreHost::createBoolFromData
// address: 0x21497c
// body: available
// range: 0x21497c-0x214a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::createBoolFromData(__CFData const*) */

ACFURestoreHost * __thiscall
ACFURestoreHost::createBoolFromData(ACFURestoreHost *this,__CFData *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  __CFData *p_Var5;
  __CFNumber *p_Var6;
  undefined8 uVar7;
  ACFURestoreHost AVar8;
  __CFNumber *local_38;
  
  uVar7 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
  local_38 = (__CFNumber *)0x0;
  p_Var5 = *(__CFData **)PTR__kCFAllocatorDefault_004410e8;
  lVar2 = _CFNumberCreate(p_Var5,4);
  if (lVar2 == 0) {
    createBoolFromData(p_Var5);
    AVar8 = (ACFURestoreHost)0x1;
  }
  else {
    bVar1 = createNum64Num32FromData(param_1,&local_38);
    p_Var6 = local_38;
    if (bVar1 == 0) {
      uVar4 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar4,2,"%s::%s: CFData to CFBoolean conversion failure\n","ACFURestoreHost",
                 "createBoolFromData");
      p_Var6 = local_38;
    }
    else {
      lVar3 = _CFNumberCompare(lVar2,local_38,0);
      if (lVar3 != 0) {
        uVar7 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
      }
    }
    AVar8 = (ACFURestoreHost)(bVar1 ^ 1);
    _CFRelease(lVar2);
    if (p_Var6 != (__CFNumber *)0x0) {
      _CFRelease(p_Var6);
    }
  }
  *(undefined8 *)this = uVar7;
  this[8] = AVar8;
  return this;
}

