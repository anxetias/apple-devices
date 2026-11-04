// rea decompile_all
// name: _longest_match
// address: 0x909b6
// body: available
// range: 0x909b6-0x90baf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _longest_match(long param_1,uint param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  
  lVar6 = *(long *)(param_1 + 0x50);
  uVar4 = *(uint *)(param_1 + 0x9c);
  pcVar2 = (char *)(lVar6 + (ulong)uVar4);
  uVar11 = (ulong)(int)*(uint *)(param_1 + 0xa8);
  uVar13 = *(int *)(param_1 + 0x44) - 0x106;
  uVar14 = uVar4 - uVar13;
  if (uVar4 < uVar13) {
    uVar14 = 0;
  }
  cVar9 = pcVar2[uVar11 - 1];
  cVar12 = pcVar2[uVar11];
  uVar13 = *(uint *)(param_1 + 0xac) >> 2;
  if (*(uint *)(param_1 + 0xa8) < *(uint *)(param_1 + 0xbc)) {
    uVar13 = *(uint *)(param_1 + 0xac);
  }
  uVar5 = *(uint *)(param_1 + 0xa4);
  uVar15 = *(uint *)(param_1 + 0xc0);
  if (uVar5 <= *(uint *)(param_1 + 0xc0)) {
    uVar15 = uVar5;
  }
  do {
    pcVar3 = (char *)(lVar6 + (ulong)param_2);
    iVar10 = (int)uVar11;
    if ((((pcVar3[iVar10] == cVar12) && (pcVar3[(long)iVar10 + -1] == cVar9)) &&
        (*pcVar3 == *pcVar2)) && (pcVar3[1] == pcVar2[1])) {
      lVar19 = (ulong)param_2 + lVar6 + 10;
      lVar17 = 0;
      do {
        iVar16 = (int)pcVar2;
        iVar7 = (int)lVar17;
        if (pcVar2[lVar17 + 3] != *(char *)(lVar19 + -7 + lVar17)) {
          iVar16 = iVar7 + iVar16 + 3;
          goto LAB_00090b4a;
        }
        if (pcVar2[lVar17 + 4] != *(char *)(lVar19 + -6 + lVar17)) {
          iVar16 = iVar7 + iVar16 + 4;
          goto LAB_00090b4a;
        }
        if (pcVar2[lVar17 + 5] != *(char *)(lVar19 + -5 + lVar17)) {
          iVar16 = iVar7 + iVar16 + 5;
          goto LAB_00090b4a;
        }
        if (pcVar2[lVar17 + 6] != *(char *)(lVar19 + -4 + lVar17)) {
          iVar16 = iVar7 + iVar16 + 6;
          goto LAB_00090b4a;
        }
        if (pcVar2[lVar17 + 7] != *(char *)(lVar19 + -3 + lVar17)) {
          iVar16 = iVar7 + iVar16 + 7;
          goto LAB_00090b4a;
        }
        if (pcVar2[lVar17 + 8] != *(char *)(lVar19 + -2 + lVar17)) {
          iVar16 = iVar7 + iVar16 + 8;
          goto LAB_00090b4a;
        }
        if (pcVar2[lVar17 + 9] != *(char *)(lVar19 + -1 + lVar17)) {
          iVar16 = iVar7 + iVar16 + 9;
          goto LAB_00090b4a;
        }
        lVar1 = lVar17 + 8;
      } while ((lVar17 + 2U < 0xfa) &&
              (pcVar3 = (char *)(lVar19 + lVar17), lVar8 = lVar17 + 10, lVar17 = lVar1,
              pcVar2[lVar8] == *pcVar3));
      iVar16 = iVar16 + (int)lVar1 + 2;
LAB_00090b4a:
      iVar16 = iVar16 - ((int)lVar6 + uVar4 + 0x102);
      uVar18 = iVar16 + 0x102;
      if (iVar10 < (int)uVar18) {
        *(uint *)(param_1 + 0xa0) = param_2;
        if ((int)uVar15 <= (int)uVar18) {
LAB_00090b96:
          if (uVar18 < uVar5) {
            uVar5 = uVar18;
          }
          return uVar5;
        }
        cVar9 = pcVar2[iVar16 + 0x101];
        cVar12 = pcVar2[(int)uVar18];
        uVar11 = (ulong)uVar18;
      }
    }
    uVar18 = (uint)uVar11;
    param_2 = (uint)*(ushort *)
                     (*(long *)(param_1 + 0x60) + (ulong)(param_2 & *(uint *)(param_1 + 0x4c)) * 2);
    if ((param_2 <= uVar14) || (uVar13 = uVar13 - 1, uVar13 == 0)) goto LAB_00090b96;
  } while( true );
}

