// rea decompile_all
// name: _usbDFU_getStatus
// address: 0x265295
// body: available
// range: 0x265295-0x2653bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _usbDFU_getStatus(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long local_60;
  long local_58;
  undefined4 local_50;
  ushort local_4c;
  undefined2 local_4a;
  byte *local_48;
  byte local_36;
  uint3 local_35;
  byte local_32;
  undefined1 local_31;
  
  iVar4 = -9;
  if (((param_1 != 0) && (param_2 != (uint *)0x0)) &&
     (lVar1 = *(long *)(param_1 + 0x28), lVar1 != 0)) {
    _clock_gettime(0,&local_60);
    lVar2 = *(long *)(lVar1 + 0x38);
    lVar5 = local_58 + 1000000000;
    if (lVar2 <= local_58) {
      lVar5 = local_58;
    }
    uVar6 = (lVar5 - lVar2) / 1000000 +
            ((local_60 - *(long *)(lVar1 + 0x30)) - (ulong)(local_58 < lVar2)) * 1000;
    if (uVar6 < *(uint *)(lVar1 + 0x28)) {
      _usleep((*(uint *)(lVar1 + 0x28) - (int)uVar6) * 1000);
    }
    local_50 = 0x3a1;
    local_4c = (ushort)*(byte *)(*(long *)(lVar1 + 0x18) + 3);
    local_4a = 8;
    local_48 = &local_36;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (plVar3 = *(long **)(*(long *)(param_1 + 0x28) + 8),
       iVar4 = (**(code **)(*plVar3 + 0xd0))(plVar3,&local_50), iVar4 == 0)) {
      *param_2 = (uint)local_36;
      param_2[1] = (uint)local_35;
      param_2[2] = (uint)local_32;
      *(undefined1 *)(param_2 + 3) = local_31;
      *(uint *)(lVar1 + 0x28) = (uint)local_35;
      iVar4 = 0;
      _clock_gettime(0,lVar1 + 0x30);
    }
  }
  return iVar4;
}

