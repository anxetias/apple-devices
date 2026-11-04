// rea decompile_all
// name: PRGSequencer::RemoveElement
// address: 0x1ba8e0
// body: available
// range: 0x1ba8e0-0x1ba97e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGSequencer::RemoveElement(void*) */

ulong __thiscall PRGSequencer::RemoveElement(PRGSequencer *this,void *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  PRGSequencer *pPVar5;
  void *pvVar6;
  undefined8 unaff_R14;
  undefined7 uVar7;
  
  uVar1 = (ulong)*(int *)(this + 0xcb0);
  if ((long)uVar1 < 1) {
    uVar1 = 0;
  }
  else {
    pvVar6 = *(void **)(this + 0x30);
    pPVar5 = this + 0x30;
    uVar7 = (undefined7)((ulong)unaff_R14 >> 8);
    if (pvVar6 == param_1) {
      uVar1 = CONCAT71(uVar7,1);
    }
    else {
      uVar2 = (ulong)(*(int *)(this + 0xcb0) - 1);
      uVar4 = 199;
      if (uVar2 < 199) {
        uVar4 = uVar2;
      }
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (uVar4 == uVar3) {
          uVar1 = CONCAT71(uVar7,uVar3 < 199 && uVar3 + 1 < uVar1);
          goto LAB_001ba977;
        }
        pvVar6 = *(void **)(pPVar5 + 8);
        pPVar5 = pPVar5 + 8;
        uVar2 = uVar3 + 1;
      } while (pvVar6 != param_1);
      uVar1 = CONCAT71(uVar7,uVar3 < 199 && uVar3 + 1 < uVar1);
    }
    if (param_1 != (void *)0x0) {
      _free(pvVar6);
    }
    *(undefined8 *)pPVar5 = 0;
  }
LAB_001ba977:
  return uVar1 & 0xffffffff;
}

