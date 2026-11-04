// rea decompile_all
// name: _pqdownheap
// address: 0x83998
// body: available
// range: 0x83998-0x83a7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _pqdownheap(long param_1,long param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  iVar3 = *(int *)(param_1 + 0xbb0 + (ulong)param_3 * 4);
  uVar4 = param_3 * 2;
  iVar7 = *(int *)("/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib" +
                  param_1 + 0x2c);
  if ((int)uVar4 <= iVar7) {
    do {
      uVar5 = uVar4;
      if ((int)uVar4 < iVar7) {
        uVar9 = uVar4 | 1;
        lVar6 = (long)*(int *)(param_1 + 0xbb0 + (long)(int)uVar9 * 4);
        lVar8 = (long)(int)uVar4;
        lVar10 = (long)*(int *)(param_1 + 0xbb0 + lVar8 * 4);
        uVar1 = *(ushort *)(param_2 + lVar10 * 4);
        uVar2 = *(ushort *)(param_2 + lVar6 * 4);
        if (uVar2 < uVar1) {
LAB_000839f3:
          lVar8 = (long)(int)uVar9;
          uVar5 = uVar9;
        }
        else {
          if (uVar2 != uVar1) goto LAB_000839fe;
          if ((byte)"/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                    [lVar6 + param_1 + 0x34] <=
              (byte)"/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                    [lVar10 + param_1 + 0x34]) goto LAB_000839f3;
        }
      }
      else {
LAB_000839fe:
        lVar8 = (long)(int)uVar4;
      }
      iVar7 = *(int *)(param_1 + 0xbb0 + lVar8 * 4);
      uVar1 = *(ushort *)(param_2 + (long)iVar7 * 4);
      uVar2 = *(ushort *)(param_2 + (long)iVar3 * 4);
      if ((uVar2 < uVar1) ||
         ((uVar2 == uVar1 &&
          ((byte)"/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                 [(long)iVar3 + param_1 + 0x34] <=
           (byte)"/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                 [(long)iVar7 + param_1 + 0x34])))) break;
      *(int *)(param_1 + 0xbb0 + (long)(int)param_3 * 4) = iVar7;
      uVar4 = uVar5 * 2;
      iVar7 = *(int *)(
                      "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                      + param_1 + 0x2c);
      param_3 = uVar5;
    } while ((int)uVar4 <= iVar7);
  }
  *(int *)(param_1 + 0xbb0 + (long)(int)param_3 * 4) = iVar3;
  return;
}

