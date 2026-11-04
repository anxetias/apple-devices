// rea decompile_all
// name: _CreateMutableCDRecord
// address: 0xa289c
// body: available
// range: 0xa289c-0xa2a09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 * _CreateMutableCDRecord(long param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  puVar2 = _calloc(1,0x68);
  *puVar2 = *(undefined2 *)(param_1 + 4);
  puVar2[1] = *(undefined2 *)(param_1 + 6);
  puVar2[2] = *(undefined2 *)(param_1 + 8);
  puVar2[3] = *(undefined2 *)(param_1 + 10);
  lVar3 = _GetExtraFieldWithSignatureFromCDRecord(param_1,&_kInfoZipExtraFieldSignature,8);
  if (lVar3 == 0) {
    uVar4 = _DOS2UNIXTime(*(undefined4 *)(param_1 + 0xc));
    *(ulong *)(puVar2 + 8) = uVar4;
  }
  else {
    *(ulong *)(puVar2 + 8) = (ulong)*(uint *)(lVar3 + 8);
    uVar4 = (ulong)*(uint *)(lVar3 + 4);
  }
  *(ulong *)(puVar2 + 4) = uVar4;
  uVar1 = _GetPOSIXFileModeFromCDRecord(param_1);
  puVar2[0xc] = uVar1;
  *(bool *)(puVar2 + 0xd) = *(char *)((ulong)*(ushort *)(param_1 + 0x1c) + 0x2d + param_1) == '/';
  *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)(param_1 + 0x10);
  uVar5 = _GetCDRecordCompressedSize(param_1);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  uVar5 = _GetCDRecordUncompressedSize(param_1);
  *(undefined8 *)(puVar2 + 0x14) = uVar5;
  puVar2[0x2c] = *(undefined2 *)(param_1 + 0x1e);
  puVar2[0x18] = *(undefined2 *)(param_1 + 0x20);
  *(uint *)(puVar2 + 0x1a) = (uint)*(ushort *)(param_1 + 0x22);
  puVar2[0x1c] = *(undefined2 *)(param_1 + 0x24);
  uVar5 = _GetLFOffsetFromCDRecord(param_1);
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  pvVar6 = _calloc((ulong)*(ushort *)(param_1 + 0x1c) + 1,1);
  _memcpy(pvVar6,(void *)(param_1 + 0x2e),(ulong)*(ushort *)(param_1 + 0x1c));
  *(void **)(puVar2 + 0x24) = pvVar6;
  pvVar6 = _malloc((ulong)*(ushort *)(param_1 + 0x1e));
  *(void **)(puVar2 + 0x30) = pvVar6;
  _memcpy(pvVar6,(void *)(param_1 + (ulong)*(ushort *)(param_1 + 0x1c) + 0x2e),
          (ulong)*(ushort *)(param_1 + 0x1e));
  pvVar6 = _malloc((ulong)*(ushort *)(param_1 + 0x20));
  *(void **)(puVar2 + 0x28) = pvVar6;
  _memcpy(pvVar6,(void *)((ulong)*(ushort *)(param_1 + 0x1e) +
                         param_1 + (ulong)*(ushort *)(param_1 + 0x20) + 0x2e),
          (ulong)*(ushort *)(param_1 + 0x20));
  return puVar2;
}

