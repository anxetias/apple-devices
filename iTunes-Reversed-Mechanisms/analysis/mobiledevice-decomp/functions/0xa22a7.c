// rea decompile_all
// name: _CreateMutableLocalFileRecord
// address: 0xa22a7
// body: available
// range: 0xa22a7-0xa23f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 * _CreateMutableLocalFileRecord(long param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = _calloc(1,0x50);
  *puVar2 = *(undefined2 *)(param_1 + 4);
  puVar2[1] = *(undefined2 *)(param_1 + 6);
  puVar2[2] = *(undefined2 *)(param_1 + 8);
  lVar3 = _GetExtraFieldWithSignatureFromLocalFileRecord(param_1,&_kInfoZipExtraFieldSignature,8);
  if (lVar3 == 0) {
    uVar4 = _DOS2UNIXTime(*(undefined4 *)(param_1 + 10));
    *(undefined8 *)(puVar2 + 4) = uVar4;
    *(undefined8 *)(puVar2 + 8) = uVar4;
  }
  else {
    *(ulong *)(puVar2 + 4) = (ulong)*(uint *)(lVar3 + 4);
    *(ulong *)(puVar2 + 8) = (ulong)*(uint *)(lVar3 + 8);
    if (0xb < *(ushort *)(lVar3 + 2)) {
      puVar2[0xc] = *(undefined2 *)(lVar3 + 0xc);
      puVar2[0xd] = *(undefined2 *)(lVar3 + 0xe);
      goto LAB_000a233f;
    }
  }
  *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
LAB_000a233f:
  *(bool *)(puVar2 + 0xf) = *(char *)((ulong)*(ushort *)(param_1 + 0x1a) + 0x1d + param_1) == '/';
  *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(param_1 + 0xe);
  local_40 = 0;
  local_38 = 0;
  _GetLFSizes(param_1,&local_38,&local_40);
  *(undefined8 *)(puVar2 + 0x14) = local_40;
  *(undefined8 *)(puVar2 + 0x18) = local_38;
  puVar2[0x20] = *(undefined2 *)(param_1 + 0x1c);
  uVar1 = *(ushort *)(param_1 + 0x1a);
  pvVar5 = _calloc((ulong)uVar1 + 1,1);
  _memcpy(pvVar5,(void *)(param_1 + 0x1e),(ulong)uVar1);
  *(void **)(puVar2 + 0x1c) = pvVar5;
  pvVar5 = _malloc((ulong)*(ushort *)(param_1 + 0x1c));
  *(void **)(puVar2 + 0x24) = pvVar5;
  _memcpy(pvVar5,(void *)(param_1 + (ulong)*(ushort *)(param_1 + 0x1a) + 0x1e),
          (ulong)*(ushort *)(param_1 + 0x1c));
  return puVar2;
}

