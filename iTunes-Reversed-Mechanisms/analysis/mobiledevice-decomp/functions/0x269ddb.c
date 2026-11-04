// rea decompile_all
// name: ___AFCProcessArrayOrDictReply
// address: 0x269ddb
// body: available
// range: 0x269ddb-0x269e8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong ___AFCProcessArrayOrDictReply(undefined8 param_1,long param_2,undefined1 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = ___AFCOperationGetDataLength(param_2);
  uVar3 = _CFGetAllocator(param_2);
  lVar4 = *(long *)(param_2 + 0x48);
  if (lVar4 == 0) {
    lVar4 = _CFAllocatorAllocate(uVar3,uVar2,0);
    *(long *)(param_2 + 0x48) = lVar4;
    if (lVar4 == 0) {
      return 0xe8004003;
    }
    *(undefined8 *)(param_2 + 0x50) = uVar3;
    _CFRetain(uVar3);
    lVar4 = *(long *)(param_2 + 0x48);
  }
  uVar5 = _AFCReadData(param_1,lVar4,uVar2);
  if ((int)uVar5 == 0) {
    uVar1 = ___AFCCreateDictionaryOrArrayFromData
                      (uVar3,*(undefined8 *)(param_2 + 0x48),uVar2,param_3,param_2 + 0xf0);
    uVar5 = 0xe8004003;
    if (uVar1 != 0) {
      uVar5 = (ulong)uVar1;
    }
    if (*(long *)(param_2 + 0xf0) != 0) {
      uVar5 = (ulong)uVar1;
    }
  }
  return uVar5;
}

