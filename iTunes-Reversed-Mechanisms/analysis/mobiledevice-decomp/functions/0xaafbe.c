// rea decompile_all
// name: _SZArchiverCopyStatsDescriptions
// address: 0xaafbe
// body: available
// range: 0xaafbe-0xab15a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xab156 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _SZArchiverCopyStatsDescriptions(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 local_108 [26];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar7 = 0;
  uVar10 = 0;
  do {
    uVar2 = _CFStringGetLength(**(undefined8 **)((long)&_sStatsData + lVar7));
    if (uVar10 < uVar2) {
      uVar10 = uVar2;
    }
    lVar7 = lVar7 + 0x28;
  } while (lVar7 != 0x410);
  pvVar3 = _malloc(uVar10 + 4);
  uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  puVar9 = &DAT_004443c0;
  lVar7 = 0;
  do {
    puVar1 = (undefined8 *)puVar9[-4];
    lVar4 = _CFStringGetLength(*puVar1);
    _memset(pvVar3,0x20,(uVar10 - lVar4) + 4);
    *(undefined1 *)((long)pvVar3 + (uVar10 - lVar4) + 4) = 0;
    pcVar8 = "CFBoolean     ";
    if (*(char *)(puVar9 + -2) == '\0') {
      if (puVar9[-3] == 0xd) {
        pcVar8 = "CFNumber:double";
      }
      else {
        pcVar8 = "UNKNOWN";
        if ((puVar9[-3] == 4) &&
           (pcVar8 = "CFNumber:uint64_t", *(char *)((long)puVar9 + -0xf) != '\0')) {
          pcVar8 = "CFNumber:int64_t";
        }
      }
    }
    uVar5 = _CFStringCreateWithFormat(uVar6,0,&cf____s_s_s,*puVar1,pvVar3,pcVar8,*puVar9);
    local_108[lVar7] = uVar5;
    lVar7 = lVar7 + 1;
    puVar9 = puVar9 + 5;
  } while (lVar7 != 0x1a);
  uVar6 = _CFArrayCreate(uVar6,local_108,0x1a,PTR__kCFTypeArrayCallBacks_004411a8);
  lVar7 = 0;
  do {
    _CFRelease(local_108[lVar7]);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x1a);
  _free(pvVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

