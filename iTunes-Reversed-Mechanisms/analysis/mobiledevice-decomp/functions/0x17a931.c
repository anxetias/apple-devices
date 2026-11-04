// rea decompile_all
// name: _uarpProcessPayloadTLVInternal
// address: 0x17a931
// body: available
// range: 0x17a931-0x17ab95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17aae5 to 0x182280 _UARPLayer2AssetCorrupt (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x17ab0b to 0x2aa50c _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x17ab91 to 0x181f98 _UARPLayer2HashInit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _uarpProcessPayloadTLVInternal
               (undefined8 param_1,undefined4 *param_2,long param_3,int param_4,int param_5,
               undefined4 *param_6)

{
  void *pvVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  
  if (param_4 == -0x332d7ee8) {
    *(int *)(param_3 + 0x78) = param_5;
    local_38 = param_6;
    iVar3 = _UARPLayer2RequestBuffer(param_1,(undefined8 *)(param_3 + 0x70),param_5);
    if ((iVar3 == 0) && (pvVar1 = *(void **)(param_3 + 0x70), pvVar1 != (void *)0x0)) {
      _memcpy(pvVar1,local_38,(ulong)*(uint *)(param_3 + 0x78));
      return;
    }
    goto LAB_0017aad7;
  }
  if (param_4 != -0x332d7ee9) {
    if (*(int *)(param_3 + 0x4c) != 0) {
      local_38 = param_2;
      local_40 = _uarpNtohl(param_4);
      _UARPLayer2HashUpdate
                (param_1,*(undefined4 *)(param_3 + 0x4c),*(undefined8 *)(param_3 + 0x50),&local_40,4
                );
      local_3c = _uarpNtohl(param_5);
      _UARPLayer2HashUpdate
                (param_1,*(undefined4 *)(param_3 + 0x4c),*(undefined8 *)(param_3 + 0x50),&local_3c,4
                );
      _UARPLayer2HashUpdate
                (param_1,*(undefined4 *)(param_3 + 0x4c),*(undefined8 *)(param_3 + 0x50),param_6,
                 param_5);
      param_2 = local_38;
    }
    if (param_4 == -0x332d7ee7) {
      if (param_5 == 4) {
        uVar4 = _uarpNtohl(*param_6);
        *(undefined4 *)(param_3 + 0x80) = uVar4;
        return;
      }
    }
    else if (param_4 == -0x332d7eee) {
      if (param_5 == 2) {
        uVar2 = _uarpNtohs(*(undefined2 *)param_6);
        *(uint *)(param_3 + 0x38) = (uint)uVar2;
        return;
      }
    }
    else {
      if (param_4 != -0x332d7ef9) {
        return;
      }
      *(int *)(param_3 + 0x48) = param_5;
      local_38 = param_2;
      iVar3 = _UARPLayer2RequestBuffer(param_1,(undefined8 *)(param_3 + 0x40),param_5);
      param_2 = local_38;
      if ((iVar3 == 0) && (pvVar1 = *(void **)(param_3 + 0x40), pvVar1 != (void *)0x0)) {
        _memcpy(pvVar1,param_6,(ulong)*(uint *)(param_3 + 0x48));
        return;
      }
    }
    _UARPLayer2AssetCorrupt(param_1,param_2);
    return;
  }
  if (param_5 != 2) goto LAB_0017aad7;
  uVar2 = _uarpNtohs(*(undefined2 *)param_6);
  *(uint *)(param_3 + 0x4c) = (uint)uVar2;
  _UARPLayer2HashInfo(param_1,uVar2,param_3 + 0x58,(int *)(param_3 + 0x68));
  if (*(int *)(param_3 + 0x58) == 0) {
LAB_0017a9b6:
    if (*(int *)(param_3 + 0x68) == 0) {
LAB_0017ab79:
      _UARPLayer2HashInit(param_1,*(undefined4 *)(param_3 + 0x4c),*(undefined8 *)(param_3 + 0x50));
      return;
    }
    iVar3 = _UARPLayer2RequestBuffer(param_1,(long *)(param_3 + 0x60));
    if ((iVar3 == 0) && (*(long *)(param_3 + 0x60) != 0)) goto LAB_0017ab79;
  }
  else {
    iVar3 = _UARPLayer2RequestBuffer(param_1,(long *)(param_3 + 0x50));
    if ((iVar3 == 0) && (*(long *)(param_3 + 0x50) != 0)) goto LAB_0017a9b6;
  }
  *(undefined4 *)(param_3 + 0x4c) = 0;
LAB_0017aad7:
  _UARPLayer2AssetCorrupt(param_1,param_2);
  return;
}

