// rea decompile_all
// name: _uarpPlatformRemoteEndpointAdd
// address: 0x17ee49
// body: available
// range: 0x17ee49-0x17eff0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpPlatformRemoteEndpointAdd(int *param_1,int *param_2,int *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar9 = 0x1e;
  if (param_4 != 0 && (param_2 != (int *)0x0 && param_1 != (int *)0x0)) {
    *(long *)(param_2 + 10) = param_4;
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    iVar3 = param_1[3];
    iVar4 = param_1[4];
    iVar5 = param_1[5];
    iVar6 = param_1[6];
    iVar7 = param_1[7];
    *param_2 = *param_1;
    param_2[1] = iVar1;
    param_2[2] = iVar2;
    param_2[3] = iVar3;
    param_2[4] = iVar4;
    param_2[5] = iVar5;
    param_2[6] = iVar6;
    param_2[7] = iVar7;
    param_2[8] = param_1[8];
    if (param_3 != (int *)0x0) {
      iVar1 = param_3[1];
      iVar2 = param_3[2];
      iVar3 = param_3[3];
      iVar4 = param_3[4];
      iVar5 = param_3[5];
      iVar6 = param_3[6];
      iVar7 = param_3[7];
      *param_2 = *param_3;
      param_2[1] = iVar1;
      param_2[2] = iVar2;
      param_2[3] = iVar3;
      param_2[8] = param_3[8];
      param_2[4] = iVar4;
      param_2[5] = iVar5;
      param_2[6] = iVar6;
      param_2[7] = iVar7;
      if (param_2[1] == 0) {
        return 0x1e;
      }
      if (*param_2 == 0) {
        return 0x1e;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        return 0x1e;
      }
    }
    if ((short)param_2[3] == 0) {
      *(short *)(param_2 + 3) = (short)param_1[3];
    }
    *(undefined2 *)(param_2 + 0xc) = 0;
    iVar1 = param_1[0x92];
    param_1[0x92] = iVar1 + 1;
    param_2[0xd] = iVar1;
    *(undefined1 *)(param_2 + 0xe) = 1;
    *(undefined4 *)((long)param_2 + 0x3a) = 1;
    if ((*(ushort *)(param_2 + 7) != 0) &&
       (uVar9 = _UARPLayer2RequestBuffer
                          (param_1,param_2 + 0x14,(ulong)*(ushort *)(param_2 + 7) << 2),
       (int)uVar9 != 0)) {
      return uVar9;
    }
    uVar9 = _uarpPlatformRemoteEndpointAddEntry(param_1,param_2);
    if ((int)uVar9 == 0) {
      uVar8 = *(ushort *)(param_2 + 5);
      if (uVar8 == 0) {
        *(undefined2 *)(param_2 + 5) = 1;
        uVar8 = 1;
      }
      *(ushort *)(param_2 + 0x18) = uVar8;
      uVar9 = _UARPLayer2RequestBuffer(param_1,param_2 + 0x1a,(ulong)uVar8 << 3);
      if ((int)uVar9 == 0) {
        if ((short)param_2[0x18] != 0) {
          uVar10 = 0;
          do {
            uVar9 = _uarpAllocateTransmitBuffer2(param_1,param_2,0);
            *(undefined8 *)(*(long *)(param_2 + 0x1a) + uVar10 * 8) = uVar9;
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(param_2 + 0x18));
        }
        *(ushort *)(param_2 + 0x1c) = *(ushort *)(param_2 + 5);
        uVar9 = _UARPLayer2RequestBuffer
                          (param_1,param_2 + 0x1e,(ulong)*(ushort *)(param_2 + 5) << 3);
        if ((int)uVar9 == 0) {
          if (param_1[0x8a] - 1U < 2) {
            uVar9 = _uarpPlatformEndpointSendSyncMsg(param_1,param_2);
            if ((int)uVar9 != 0) {
              return uVar9;
            }
            if ((param_1[0x8a] == 2) &&
               (uVar9 = _uarpSendVersionDiscoveryRequest(param_1,param_2,(short)param_2[3]),
               (int)uVar9 != 0)) {
              return uVar9;
            }
          }
          uVar9 = 0;
        }
      }
    }
  }
  return uVar9;
}

