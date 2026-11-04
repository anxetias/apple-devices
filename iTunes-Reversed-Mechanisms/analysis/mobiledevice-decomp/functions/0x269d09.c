// rea decompile_all
// name: ___AFCProcessDataPacket
// address: 0x269d09
// body: available
// range: 0x269d09-0x269dda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ___AFCProcessDataPacket(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = ___AFCOperationGetDataLength(param_2);
  uVar2 = _CFGetAllocator(param_2);
  if (lVar1 < 1) {
    lVar1 = _CFDataCreate(uVar2,0,0);
    *(long *)(param_2 + 0xf0) = lVar1;
    if (lVar1 != 0) {
      return 0;
    }
    return 0xe8004003;
  }
  lVar3 = *(long *)(param_2 + 0x48);
  if (lVar3 == 0) {
    lVar3 = _CFAllocatorAllocate(uVar2,lVar1,0);
    *(long *)(param_2 + 0x48) = lVar3;
    if (lVar3 == 0) {
      return 0xe8004003;
    }
    *(undefined8 *)(param_2 + 0x50) = uVar2;
    _CFRetain(uVar2);
    lVar3 = *(long *)(param_2 + 0x48);
  }
  uVar4 = _AFCReadData(param_1,lVar3,lVar1);
  if ((int)uVar4 == 0) {
    lVar1 = _CFDataCreateWithBytesNoCopy
                      (uVar2,*(undefined8 *)(param_2 + 0x48),lVar1,*(undefined8 *)(param_2 + 0x50));
    *(long *)(param_2 + 0xf0) = lVar1;
    if (lVar1 == 0) {
      return 0xe8004003;
    }
    *(undefined8 *)(param_2 + 0x48) = 0;
    _CFRelease(*(undefined8 *)(param_2 + 0x50));
    *(undefined8 *)(param_2 + 0x50) = 0;
    return 0;
  }
  return uVar4;
}

