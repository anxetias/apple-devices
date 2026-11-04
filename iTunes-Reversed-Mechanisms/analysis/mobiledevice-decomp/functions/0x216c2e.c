// rea decompile_all
// name: ACFULogging::handleMessageBinary
// address: 0x216c2e
// body: available
// range: 0x216c2e-0x216f1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x216f16 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFULogging::handleMessageBinary(std::string const&, ACFULogLevel, void const*, unsigned long,
   bool) */

void __thiscall
ACFULogging::handleMessageBinary
          (ACFULogging *this,byte *param_1,undefined4 param_3,long param_4,ulong param_5,
          byte param_6)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  byte *local_98;
  byte local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  cVar2 = shouldLog(this,param_3);
  if (cVar2 != '\0') {
    std::mutex::lock();
    if (param_5 != 0) {
      uVar7 = 0xffffffff;
      if (16000 < param_5) {
        uVar7 = 0x70;
      }
      param_6 = 16000 < param_5 & param_6;
      local_98 = param_1 + 1;
      uVar12 = 0;
      do {
        if (uVar12 == uVar7 && param_6 == 1) {
          pbVar8 = local_98;
          if ((*param_1 & 1) != 0) {
            pbVar8 = *(byte **)(param_1 + 0x10);
          }
          handleMessageInternal(this,param_3,"%s -- middle of buffer snipped -- \n",pbVar8);
          uVar12 = param_5 - 0x70;
        }
        local_88[0x40] = 0;
        local_88[0x41] = 0;
        local_88[0x42] = 0;
        local_88[0x43] = 0;
        local_88[0x44] = 0;
        local_88[0x45] = 0;
        local_88[0x46] = 0;
        local_88[0x47] = 0;
        local_88[0x48] = 0;
        local_88[0x49] = 0;
        local_88[0x4a] = 0;
        local_88[0x4b] = 0;
        local_88[0x4c] = 0;
        local_88[0x4d] = 0;
        local_88[0x4e] = 0;
        local_88[0x4f] = 0;
        local_88[0x30] = 0;
        local_88[0x31] = 0;
        local_88[0x32] = 0;
        local_88[0x33] = 0;
        local_88[0x34] = 0;
        local_88[0x35] = 0;
        local_88[0x36] = 0;
        local_88[0x37] = 0;
        local_88[0x38] = 0;
        local_88[0x39] = 0;
        local_88[0x3a] = 0;
        local_88[0x3b] = 0;
        local_88[0x3c] = 0;
        local_88[0x3d] = 0;
        local_88[0x3e] = 0;
        local_88[0x3f] = 0;
        local_88[0x20] = 0;
        local_88[0x21] = 0;
        local_88[0x22] = 0;
        local_88[0x23] = 0;
        local_88[0x24] = 0;
        local_88[0x25] = 0;
        local_88[0x26] = 0;
        local_88[0x27] = 0;
        local_88[0x28] = '\0';
        local_88[0x29] = '\0';
        local_88[0x2a] = '\0';
        local_88[0x2b] = '\0';
        local_88[0x2c] = 0;
        local_88[0x2d] = 0;
        local_88[0x2e] = 0;
        local_88[0x2f] = 0;
        local_88[0x10] = 0;
        local_88[0x11] = 0;
        local_88[0x12] = 0;
        local_88[0x13] = 0;
        local_88[0x14] = 0;
        local_88[0x15] = 0;
        local_88[0x16] = 0;
        local_88[0x17] = 0;
        local_88[0x18] = 0;
        local_88[0x19] = 0;
        local_88[0x1a] = 0;
        local_88[0x1b] = 0;
        local_88[0x1c] = 0;
        local_88[0x1d] = 0;
        local_88[0x1e] = 0;
        local_88[0x1f] = 0;
        local_88[0] = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        local_88[3] = 0;
        local_88[4] = 0;
        local_88[5] = 0;
        local_88[6] = 0;
        local_88[7] = 0;
        local_88[8] = 0;
        local_88[9] = 0;
        local_88[10] = 0;
        local_88[0xb] = 0;
        local_88[0xc] = 0;
        local_88[0xd] = 0;
        local_88[0xe] = 0;
        local_88[0xf] = 0;
        uVar10 = param_5 - uVar12;
        if (uVar10 == 0) {
          local_88[0x20] = 0x20;
          local_88[0x21] = 0x20;
          local_88[0x22] = 0x20;
          local_88[0x23] = 0x20;
          local_88[0x24] = 0x20;
          local_88[0x25] = 0x20;
          local_88[0x26] = 0x20;
          local_88[0x27] = 0x20;
          local_88[0x28] = ' ';
          local_88[0x29] = ' ';
          local_88[0x2a] = ' ';
          local_88[0x2b] = ' ';
          local_88[0x10] = 0x20;
          local_88[0x11] = 0x20;
          local_88[0x12] = 0x20;
          local_88[0x13] = 0x20;
          local_88[0x14] = 0x20;
          local_88[0x15] = 0x20;
          local_88[0x16] = 0x20;
          local_88[0x17] = 0x20;
          local_88[0x18] = 0x20;
          local_88[0x19] = 0x20;
          local_88[0x1a] = 0x20;
          local_88[0x1b] = 0x20;
          local_88[0x1c] = 0x20;
          local_88[0x1d] = 0x20;
          local_88[0x1e] = 0x20;
          local_88[0x1f] = 0x20;
          local_88[0] = 0x20;
          local_88[1] = 0x20;
          local_88[2] = 0x20;
          local_88[3] = 0x20;
          local_88[4] = 0x20;
          local_88[5] = 0x20;
          local_88[6] = 0x20;
          local_88[7] = 0x20;
          local_88[8] = 0x20;
          local_88[9] = 0x20;
          local_88[10] = 0x20;
          local_88[0xb] = 0x20;
          local_88[0xc] = 0x20;
          local_88[0xd] = 0x20;
          local_88[0xe] = 0x20;
          local_88[0xf] = 0x20;
          local_88[0x2c] = 0x20;
          local_88[0x2d] = 0x20;
          local_88[0x2e] = 0x20;
          local_88[0x2f] = 0x20;
          local_88[0x30] = 0x20;
          local_88[0x31] = 0x20;
          local_88[0x32] = 0x20;
          iVar3 = 0x33;
        }
        else {
          if (0xf < uVar10) {
            uVar10 = 0x10;
          }
          lVar11 = uVar10 + (uVar10 == 0);
          lVar5 = 0;
          pbVar8 = (byte *)(param_4 + uVar12);
          pbVar1 = local_88 + ((int)lVar11 * -3 + 0x36);
          do {
            pbVar9 = pbVar1;
            lVar4 = lVar5;
            bVar6 = *pbVar8;
            local_88[lVar4] = "0123456789ABCDEF"[bVar6 >> 4];
            local_88[lVar4 + 1] = "0123456789ABCDEF"[bVar6 & 0xf];
            local_88[lVar4 + 2] = 0x20;
            pbVar8 = pbVar8 + 1;
            lVar5 = lVar4 + 3;
            pbVar1 = pbVar9 + 3;
          } while (lVar11 * 3 != lVar4 + 3);
          _memset(local_88 + lVar4 + 3,0x20,(0x11 - lVar11) * 3);
          iVar3 = (int)lVar11 + 0x33;
          lVar5 = 0;
          do {
            bVar6 = ((byte *)(param_4 + uVar12))[lVar5];
            if (0x5e < (byte)(bVar6 - 0x20)) {
              bVar6 = 0x2e;
            }
            *pbVar9 = bVar6;
            lVar5 = lVar5 + 1;
            pbVar9 = pbVar9 + 1;
          } while (lVar11 != lVar5);
        }
        (local_88 + iVar3)[0] = 0xd;
        (local_88 + iVar3)[1] = 10;
        local_88[(long)iVar3 + 2] = 0;
        pbVar8 = local_98;
        if ((*param_1 & 1) != 0) {
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
        handleMessageInternal(this,param_3,"%s %04zx  %s",pbVar8,uVar12,local_88);
        uVar12 = uVar12 + 0x10;
      } while (uVar12 < param_5);
      if (param_6 != 0) {
        if ((*param_1 & 1) != 0) {
          local_98 = *(byte **)(param_1 + 0x10);
        }
        handleMessageInternal(this,param_3,"%s (snipped)\n",local_98);
      }
    }
    std::mutex::unlock();
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

