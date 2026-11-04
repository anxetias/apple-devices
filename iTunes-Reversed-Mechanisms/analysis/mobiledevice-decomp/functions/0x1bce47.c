// rea decompile_all
// name: _ziplocal_getShort
// address: 0x1bce47
// body: available
// range: 0x1bce47-0x1bceb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ziplocal_getShort(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint in_EAX;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_38;
  
  uStack_38 = (ulong)in_EAX;
  iVar1 = _unzlocal_getByte();
  if (iVar1 == 0) {
    lVar4 = (long)uStack_38._4_4_;
    uVar2 = _unzlocal_getByte(param_1,param_2,(long)&uStack_38 + 4);
    lVar3 = 0;
    if ((int)uVar2 == 0) {
      lVar3 = (long)uStack_38._4_4_ * 0x100 + lVar4;
    }
  }
  else {
    uVar2 = 0xffffffff;
    lVar3 = 0;
  }
  *param_3 = lVar3;
  return uVar2;
}

