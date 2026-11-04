// rea decompile_all
// name: _OpenLocalFileRaw
// address: 0x98537
// body: available
// range: 0x98537-0x985fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_OpenLocalFileRaw(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  lVar3 = _GetLFOffsetFromCDRecord(param_2);
  uVar1 = *(ushort *)(param_3 + 0x1a);
  uVar2 = *(ushort *)(param_3 + 0x1c);
  uVar4 = _GetCDRecordCompressedSize(param_2);
  uVar5 = _GetCDRecordUncompressedSize(param_2);
  pvVar6 = _calloc((ulong)*(ushort *)(param_2 + 0x1c) + 1,1);
  _memcpy(pvVar6,(void *)(param_2 + 0x2e),(ulong)*(ushort *)(param_2 + 0x1c));
  uVar4 = __OpenLocalFile(param_1,lVar3 + (ulong)uVar2 + (ulong)uVar1 + 0x1e,uVar4,uVar5,
                          *(undefined4 *)(param_2 + 0x10),*(undefined2 *)(param_2 + 10),pvVar6,
                          param_4,param_5);
  _free(pvVar6);
  return uVar4;
}

