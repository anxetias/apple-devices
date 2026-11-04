// rea decompile_all
// name: FUN_100005174
// address: 0x100005174
// body: available
// range: 0x100005174-0x1000052d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000052d4 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100005174(long param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  byte local_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined8 uStack_41;
  undefined1 local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10001c070;
  local_68 = 0x2020202020202020;
  uStack_60 = 0x2020202020202020;
  local_58 = 0x2020202020202020;
  uStack_50 = 0x20202020202020;
  uStack_49 = 0x20;
  uStack_48 = 0x20202020202020;
  uStack_41 = 0x2020202020202020;
  local_39 = 0;
  if (0 < param_2) {
    iVar3 = 0;
    do {
      uVar2 = param_2 - iVar3;
      uVar8 = 0x10;
      if ((int)uVar2 < 0x10) {
        uVar8 = uVar2;
      }
      if ((int)uVar2 < 1) {
LAB_100005250:
        _memset((void *)((long)&local_68 + (long)(int)(uVar8 * 3)),0x20,
                (ulong)((0x10 - uVar8) * 3 - 1));
      }
      else {
        uVar4 = 1;
        if (1 < (int)uVar8) {
          uVar4 = (ulong)uVar8;
        }
        pcVar5 = (char *)((long)&local_68 + 1);
        uVar6 = 0;
        do {
          bVar1 = *(byte *)(iVar3 + param_1 + uVar6);
          bVar7 = 0x2e;
          if ((byte)(bVar1 - 0x21) < 0x5e) {
            bVar7 = bVar1;
          }
          local_88[uVar6] = bVar7;
          pcVar5[-1] = "0123456789abcdef"[bVar1 >> 4];
          *pcVar5 = "0123456789abcdef"[bVar1 & 0xf];
          if (uVar8 - 1 == uVar6) {
            local_88[uVar8] = 0;
          }
          uVar6 = uVar6 + 1;
          pcVar5 = pcVar5 + 3;
        } while (uVar4 != uVar6);
        if ((int)uVar2 < 0x10) goto LAB_100005250;
      }
      if (6 < DAT_100021030) {
        FUN_1000008d2(7,0,&cf__4d_s_s,iVar3 + param_3,&local_68);
      }
      iVar3 = iVar3 + uVar8;
    } while (iVar3 < param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

