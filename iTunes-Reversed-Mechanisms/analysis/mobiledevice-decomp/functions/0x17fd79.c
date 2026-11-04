// rea decompile_all
// name: _uarpAllocPrepareTransmitBuffer2
// address: 0x17fd79
// body: available
// range: 0x17fd79-0x17ff16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _uarpAllocPrepareTransmitBuffer2
               (undefined8 param_1,long param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  long local_50;
  long local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  
  local_40 = param_3;
  local_3c = param_5;
  lVar7 = _uarpAvailableTransmitBuffer(param_1,param_2,param_4 & 0xffff);
  if (lVar7 == 0) {
    uVar1 = *(uint *)(param_2 + 0x60);
    local_50 = 0;
    iVar10 = (uVar1 & 0x7fff) << 4;
    local_38 = param_4 & 0xffff;
    iVar6 = _UARPLayer2RequestBuffer(param_1,&local_50,iVar10);
    if (iVar6 != 0) {
      return 0;
    }
    local_34 = uVar1 * 2;
    uVar9 = (ulong)*(ushort *)(param_2 + 0x60);
    uVar5 = (ushort)local_34;
    if (*(ushort *)(param_2 + 0x60) < uVar5) {
      do {
        uVar8 = _uarpAllocateTransmitBuffer2(param_1,param_2,0);
        *(undefined8 *)(local_50 + uVar9 * 8) = uVar8;
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
    uVar4 = (undefined2)local_34;
    *(undefined2 *)(param_2 + 0x60) = uVar4;
    _UARPLayer2ReturnBuffer(param_1,*(undefined8 *)(param_2 + 0x68));
    *(long *)(param_2 + 0x68) = local_50;
    local_48 = 0;
    iVar6 = _UARPLayer2RequestBuffer(param_1,&local_48,iVar10);
    if (iVar6 != 0) {
      return 0;
    }
    uVar5 = *(ushort *)(param_2 + 0x70);
    if ((ulong)uVar5 != 0) {
      uVar9 = 0;
      do {
        *(undefined8 *)(local_48 + uVar9 * 8) =
             *(undefined8 *)(*(long *)(param_2 + 0x78) + uVar9 * 8);
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
    *(undefined2 *)(param_2 + 0x70) = uVar4;
    _UARPLayer2ReturnBuffer(param_1,*(undefined8 *)(param_2 + 0x78));
    *(long *)(param_2 + 0x78) = local_48;
    lVar7 = _uarpAvailableTransmitBuffer(param_1,param_2,local_38);
    if (lVar7 == 0) {
      return 0;
    }
  }
  if (*(uint *)(lVar7 + 0x18) < param_4) {
    return 0;
  }
  *(short *)(lVar7 + 0x1c) = (short)param_4;
  *(char *)(lVar7 + 0x1f) = (char)local_3c;
  ___bzero(*(undefined8 *)(lVar7 + 0x10));
  uVar4 = _uarpNtohs((undefined2)local_40);
  puVar2 = *(undefined2 **)(lVar7 + 0x10);
  *puVar2 = uVar4;
  puVar2[1] = (short)(param_4 - 6);
  uVar4 = _uarpNtohs(param_4 - 6 & 0xffff);
  lVar3 = *(long *)(lVar7 + 0x10);
  *(undefined2 *)(lVar3 + 2) = uVar4;
  *(undefined2 *)(lVar3 + 4) = 0;
  return lVar7;
}

