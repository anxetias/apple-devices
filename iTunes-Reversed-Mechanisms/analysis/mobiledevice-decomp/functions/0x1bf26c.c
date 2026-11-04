// rea decompile_all
// name: _amai_zipWriteInFileInZip
// address: 0x1bf26c
// body: available
// range: 0x1bf26c-0x1bf396 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _amai_zipWriteInFileInZip(long param_1,Bytef *param_2,uInt param_3)

{
  uint uVar1;
  int iVar2;
  uLong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  iVar2 = -0x66;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x58) != 0)) {
    *(Bytef **)(param_1 + 0x60) = param_2;
    *(uInt *)(param_1 + 0x68) = param_3;
    uVar3 = _crc32(*(uLong *)(param_1 + 0x4108),param_2,param_3);
    *(uLong *)(param_1 + 0x4108) = uVar3;
    do {
      if (*(int *)(param_1 + 0x68) == 0) {
        return 0;
      }
      uVar5 = (ulong)*(uint *)(param_1 + 0x80);
      if (*(uint *)(param_1 + 0x80) == 0) {
        iVar2 = _zipFlushWriteBuffer(param_1);
        *(undefined4 *)(param_1 + 0x80) = 0x4000;
        *(long *)(param_1 + 0x78) = param_1 + 0x100;
        uVar5 = 0x4000;
        if (iVar2 == -1) {
          return -1;
        }
      }
      uVar4 = (uint)uVar5;
      if ((*(int *)(param_1 + 0xf8) == 8) && (*(int *)(param_1 + 0xfc) == 0)) {
        iVar7 = *(int *)(param_1 + 0x88);
        iVar2 = _deflate((z_streamp)(param_1 + 0x60),0);
        uVar5 = (ulong)(uint)(*(int *)(param_1 + 0x88) - iVar7);
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x68);
        if (uVar1 < uVar4) {
          uVar5 = (ulong)uVar1;
        }
        iVar2 = 0;
        iVar7 = 0;
        if (uVar1 != 0) {
          uVar6 = 0;
          do {
            *(undefined1 *)(*(long *)(param_1 + 0x78) + uVar6) =
                 *(undefined1 *)(*(long *)(param_1 + 0x60) + uVar6);
            uVar6 = uVar6 + 1;
          } while (uVar5 != uVar6);
          iVar7 = *(int *)(param_1 + 0x68);
          uVar4 = *(uint *)(param_1 + 0x80);
        }
        *(int *)(param_1 + 0x68) = iVar7 - (int)uVar5;
        *(uint *)(param_1 + 0x80) = uVar4 - (int)uVar5;
        *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + uVar5;
        *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + uVar5;
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + uVar5;
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + uVar5;
      }
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + (int)uVar5;
    } while (iVar2 == 0);
  }
  return iVar2;
}

