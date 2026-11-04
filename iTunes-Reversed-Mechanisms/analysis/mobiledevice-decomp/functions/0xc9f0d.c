// rea decompile_all
// name: _AMBootedModeDeviceGetECID
// address: 0xc9f0d
// body: available
// range: 0xc9f0d-0xca0c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xca0c1 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMBootedModeDeviceGetECID(long param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  void *local_78;
  undefined4 local_70;
  byte local_6c;
  char local_68 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 == 0) {
    local_6c = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    iVar1 = __AMRUSBDeviceSendDeviceRequest
                      (*(undefined8 *)(param_1 + 0x78),0,1,0,0,6,0x100,0x12,&local_98);
    if ((iVar1 == 0) &&
       (iVar1 = __AMRUSBDeviceSendDeviceRequest
                          (*(undefined8 *)(param_1 + 0x78),0,1,0,0,6,0xf00,5,&local_70), iVar1 == 0)
       ) {
      uVar5 = (ulong)local_70._2_2_;
      pvVar2 = _malloc(uVar5);
      iVar1 = __AMRUSBDeviceSendDeviceRequest
                        (*(undefined8 *)(param_1 + 0x78),0,1,0,0,6,0xf00,uVar5,pvVar2);
      if (iVar1 == 0) {
        uVar3 = (uint)local_6c;
        local_78 = pvVar2;
        if (local_6c != 0) {
          pbVar4 = (byte *)((long)pvVar2 + 5);
          do {
            local_68[0x10] = '\0';
            local_68[0x11] = '\0';
            local_68[0x12] = '\0';
            local_68[0x13] = '\0';
            local_68[0x14] = '\0';
            local_68[0x15] = '\0';
            local_68[0x16] = '\0';
            local_68[0x17] = '\0';
            local_68[0x18] = '\0';
            local_68[0x19] = '\0';
            local_68[0x1a] = '\0';
            local_68[0x1b] = '\0';
            local_68[0x1c] = '\0';
            local_68[0] = '\0';
            local_68[1] = '\0';
            local_68[2] = '\0';
            local_68[3] = '\0';
            local_68[4] = '\0';
            local_68[5] = '\0';
            local_68[6] = '\0';
            local_68[7] = '\0';
            local_68[8] = '\0';
            local_68[9] = '\0';
            local_68[10] = '\0';
            local_68[0xb] = '\0';
            local_68[0xc] = '\0';
            local_68[0xd] = '\0';
            local_68[0xe] = '\0';
            local_68[0xf] = '\0';
            local_68[0x1d] = '\0';
            local_68[0x1e] = '\0';
            local_68[0x1f] = '\0';
            local_68[0x20] = '\0';
            local_68[0x21] = '\0';
            local_68[0x22] = '\0';
            local_68[0x23] = '\0';
            local_68[0x24] = '\0';
            _uuid_unparse(pbVar4 + 4,local_68);
            iVar1 = _memcmp(local_68,"0A374CE4-7623-47C9-880E-1AC31513476F",0x25);
            if (iVar1 == 0) {
              lVar6 = *(long *)(pbVar4 + 0x14);
              _free(local_78);
              if (lVar6 == 0) goto LAB_000ca071;
              goto LAB_000c9f38;
            }
            pbVar4 = pbVar4 + *pbVar4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        _free(local_78);
      }
    }
LAB_000ca071:
    lVar6 = 0;
    _AMRLog(3,&cf_unabletogetECIDfromdevice_);
  }
  else {
LAB_000c9f38:
    *(long *)(param_1 + 0x58) = lVar6;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar6;
}

