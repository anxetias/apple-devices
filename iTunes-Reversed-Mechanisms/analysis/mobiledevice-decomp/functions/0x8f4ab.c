// rea decompile_all
// name: _deflateBound
// address: 0x8f4ab
// body: available
// range: 0x8f4ab-0x8f5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uLong _deflateBound(z_streamp strm,uLong sourceLen)

{
  char cVar1;
  int iVar2;
  internal_state *piVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  
  lVar5 = (sourceLen + 7 >> 3) + sourceLen;
  uVar6 = sourceLen + 0x3f >> 6;
  if ((strm != (z_streamp)0x0) && (piVar3 = strm->state, piVar3 != (internal_state *)0x0)) {
    iVar2 = piVar3[0xb].dummy;
    lVar8 = 0;
    if (iVar2 != 0) {
      if (iVar2 == 2) {
        lVar4 = *(long *)(piVar3 + 0xc);
        if (lVar4 == 0) {
          lVar8 = 0x12;
        }
        else {
          if (*(long *)(lVar4 + 0x18) == 0) {
            lVar7 = 0x12;
          }
          else {
            lVar7 = (ulong)(*(int *)(lVar4 + 0x20) + 2) + 0x12;
          }
          pcVar9 = *(char **)(lVar4 + 0x28);
          if (pcVar9 != (char *)0x0) {
            do {
              lVar7 = lVar7 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
          }
          pcVar9 = *(char **)(lVar4 + 0x38);
          if (pcVar9 != (char *)0x0) {
            do {
              lVar7 = lVar7 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
          }
          lVar8 = lVar7 + 2;
          if (*(int *)(lVar4 + 0x44) == 0) {
            lVar8 = lVar7;
          }
        }
      }
      else if (iVar2 == 1) {
        lVar8 = (ulong)(piVar3[0x27].dummy != 0) * 4 + 6;
      }
      else {
        lVar8 = 6;
      }
    }
    if ((piVar3[0x12].dummy == 0xf) && (piVar3[0x1e].dummy == 0xf)) {
      lVar5 = sourceLen + 7 + (sourceLen >> 0xc) + (sourceLen >> 0x19) + (sourceLen >> 0xe);
    }
    else {
      lVar5 = lVar5 + uVar6 + 5;
    }
    return lVar5 + lVar8;
  }
  return lVar5 + uVar6 + 0xb;
}

